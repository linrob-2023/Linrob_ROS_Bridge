import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
import socket
import json
import threading
import time

from action_test.action import MoveFeedback
from action_test.srv import Jog, Stop

class MoveFeedbackActionServer(Node):
    def __init__(self):
        super().__init__('move_feedback_action_server')
        self.action_server = ActionServer(
            self,
            MoveFeedback,
            'move_feedback',
            self.execute_callback)
        self.feedback_thread = None

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing move command action goal...')
        self.feedback_thread = threading.Thread(target=self.listen_for_feedback, args=(goal_handle,))
        self.feedback_thread.start()
        self.send_command_to_ipc(goal_handle)
        self.feedback_thread.join()
        self.get_logger().info('Move command action goal succeeded.')
        return MoveFeedback.Result(success=True, message="Command executed successfully.")

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

def main(args=None):
    rclpy.init(args=args)
    move_feedback_action_server = MoveFeedbackActionServer()
    jog_service = JogService()
    stop_service = StopService()

    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(move_feedback_action_server)
    executor.add_node(jog_service)
    executor.add_node(stop_service)

    try:
        executor.spin()
    finally:
        executor.shutdown()
        move_feedback_action_server.destroy_node()
        jog_service.destroy_node()
        stop_service.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
