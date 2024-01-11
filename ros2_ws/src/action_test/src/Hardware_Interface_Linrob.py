import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
import socket
import json
import threading
import time

from action_test.action import MoveFeedback
from action_test.srv import Jog, Stop
from action_test.msg import Feedback 

class IpcDataManager:
    def __init__(self, ipc_address, ipc_port):
        self.ipc_address = ipc_address
        self.ipc_port = ipc_port
        self.latest_feedback = None
        self.lock = threading.Lock()

    def start_listening(self):
        threading.Thread(target=self._listen_to_ipc, daemon=True).start()

    def _listen_to_ipc(self):
        try:
            with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as sock:
                sock.connect((self.ipc_address, self.ipc_port))
                while True:
                    data = sock.recv(8192)
                    if data:
                        with self.lock:
                            self.latest_feedback = json.loads(data.decode())
        except Exception as e:
            print(f"Error in IPC Data Manager: {e}")

    def get_latest_feedback(self):
        with self.lock:
            return self.latest_feedback
        
class MoveFeedbackActionServer(Node):
    def __init__(self, ipc_data_manager):
        super().__init__('move_feedback_action_server')
        self.action_server = ActionServer(
            self,
            MoveFeedback,
            'move_feedback',
            self.execute_callback)
        self.ipc_data_manager = ipc_data_manager

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing move command action goal...')
        self.send_command_to_ipc(goal_handle)
        
        while not goal_handle.is_cancel_requested:
            feedback_data = self.ipc_data_manager.get_latest_feedback()
            if feedback_data:
                # Convert feedback_data to MoveFeedback.Feedback and publish
                action_feedback = MoveFeedback.Feedback()
                action_feedback.axis_name = str(feedback_data["Axis_Name"])
                action_feedback.status = str(feedback_data["status"])
                action_feedback.state = str(feedback_data["state"])
                action_feedback.error_id = int(feedback_data["error_id"], 16) if feedback_data["error_id"].startswith("0x") else -1
                action_feedback.timestamp = str(feedback_data["timestamp"])
                action_feedback.position_reached = bool(feedback_data["position_reached"])
                goal_handle.publish_feedback(action_feedback)

            # Check if the goal is achieved and set the result
                if feedback_data["position_reached"]:
                    goal_handle.succeed()
                    return MoveFeedback.Result(success=True, message="Move completed successfully.")

            time.sleep(0.1)  

        if goal_handle.is_cancel_requested:
            goal_handle.canceled()
            return MoveFeedback.Result(success=False, message="Move canceled.")

    # If the loop exits without reaching the goal
        return MoveFeedback.Result(success=False, message="Move did not complete.")

    def send_command_to_ipc(self, goal_handle):
        command = {
            "cmd": "move",
            "position": goal_handle.request.position,
            "velocity": goal_handle.request.velocity,
            "acceleration": goal_handle.request.acceleration,
            "deceleration": goal_handle.request.deceleration,
        }
        message = json.dumps(command).encode() + b"\n"

        try:
            with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as sock:
                sock.connect(("172.31.176.1", 50000))  # Replace with actual address and port
                sock.sendall(message)
        except Exception as e:
            self.get_logger().error(f'Failed to send command to IPC: {e}')
            goal_handle.abort()
            return MoveFeedback.Result(success=False, message=str(e))

    def listen_for_feedback(self, goal_handle):
        try:
            with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as sock:
                sock.connect(("172.31.176.1", 60000))  # Replace with actual address and port
                while True:
                    data = sock.recv(8192)
                    if data:
                        status_data = json.loads(data.decode())
                        feedback = MoveFeedback.Feedback()
                        feedback.axis_name = str(status_data["Axis_Name"])
                        feedback.status = str(status_data["status"])
                        feedback.state = str(status_data["state"])

                        # Handle hexadecimal error_id conversion
                        hex_error_id = status_data["error_id"]
                        if hex_error_id.startswith("0x"):
                            feedback.error_id = int(hex_error_id, 16)
                        else:
                            self.get_logger().error(f"Error ID is not in hexadecimal format: {hex_error_id}")
                            continue  # Skip to the next loop iteration

                        feedback.timestamp = str(status_data["timestamp"])
                        feedback.position_reached = bool(status_data["position_reached"])
                        
                        goal_handle.publish_feedback(feedback)
                        if feedback.position_reached:
                        	goal_handle.succeed()
                            #sock.close()
                        	return  # Exit the loop once the goal is succeeded
                        time.sleep(0.1)
                    else:
                        break
        except Exception as e:
            self.get_logger().error(f'Failed to receive feedback from IPC: {e}')

class JogService(Node):
    def __init__(self):
        super().__init__('jog_service')
        self.service = self.create_service(Jog, 'jog_robot', self.jog_robot_callback)

    def jog_robot_callback(self, request, response):
        # Implement the jog command logic here
        try:
            sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            server_address = ("172.31.176.1", 50000)
            sock.connect(server_address)
            command = {"cmd": "jog", "velocity": str(request.speed), "servo_name": 1, "axis": 1, "direction": request.direction}
            message = json.dumps(command).encode() + b"\n"
            sock.sendall(message)
            response_bytes = sock.recv(1000)
            response_data = json.loads(response_bytes)
            response.success = True
            response.message = "Jogging command executed."
            sock.close()
        except Exception as e:
            response.success = False
            response.message = f"Failed to send command to IPC: {e}"
        return response

class StopService(Node):
    def __init__(self):
        super().__init__('stop_service')
        self.service = self.create_service(Stop, 'stop_robot', self.stop_robot_callback)

    def stop_robot_callback(self, request, response):
        # Implement the stop command logic here
        try:
            sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            server_address = ("172.31.176.1", 50000)
            sock.connect(server_address)
            command = {"cmd": "stop", "servo_name": 1, "axis": 1}
            message = json.dumps(command).encode() + b"\n"
            sock.sendall(message)
            response_bytes = sock.recv(1000)
            response_data = json.loads(response_bytes)
            response.success = True
            response.message = "Stop command executed."
            sock.close()
        except Exception as e:
            response.success = False
            response.message = f"Failed to send command to IPC: {e}"
        return response

class FeedbackPublisher(Node):
    def __init__(self, ipc_data_manager):
        super().__init__('feedback_publisher')
        self.publisher_ = self.create_publisher(Feedback, 'feedback_topic', 10)
        self.ipc_data_manager = ipc_data_manager
        self.timer = self.create_timer(1.0, self.timer_callback)

    def timer_callback(self):
        feedback_data = self.ipc_data_manager.get_latest_feedback()
        if feedback_data:
            feedback_msg = Feedback()
            feedback_msg.axis_name = str(feedback_data["Axis_Name"])
            feedback_msg.status = str(feedback_data["status"])
            feedback_msg.state = str(feedback_data["state"])
            feedback_msg.error_id = int(feedback_data["error_id"], 16) if feedback_data["error_id"].startswith("0x") else -1
            feedback_msg.timestamp = str(feedback_data["timestamp"])
            feedback_msg.position_reached = bool(feedback_data["position_reached"])
            self.publisher_.publish(feedback_msg)


def main(args=None):
    rclpy.init(args=args)

    ipc_data_manager = IpcDataManager("172.31.176.1", 60000)
    ipc_data_manager.start_listening()

    move_feedback_action_server = MoveFeedbackActionServer(ipc_data_manager)
    jog_service = JogService()
    stop_service = StopService()
    feedback_publisher = FeedbackPublisher(ipc_data_manager)

    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(move_feedback_action_server)
    executor.add_node(jog_service)
    executor.add_node(stop_service)
    executor.add_node(feedback_publisher)

    try:
        executor.spin()
    finally:
        executor.shutdown()
        move_feedback_action_server.destroy_node()
        jog_service.destroy_node()
        stop_service.destroy_node()
        feedback_publisher.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
