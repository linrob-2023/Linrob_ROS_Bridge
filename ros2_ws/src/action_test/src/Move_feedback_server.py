import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
import socket
import json
import threading
import time
from action_test.action import MoveFeedback  # Replace with the actual path

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
        
        # Start the feedback thread
        self.feedback_thread = threading.Thread(target=self.listen_for_feedback, args=(goal_handle,))
        self.feedback_thread.start()

        # Send command to IPC
        self.send_command_to_ipc(goal_handle)

        # Wait for the feedback thread to complete
        self.feedback_thread.join()

        # Complete the action goal
        self.get_logger().info('Move command action goal succeeded.')
        #goal_handle.succeed()
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

def main(args=None):
    rclpy.init(args=args)
    node = MoveFeedbackActionServer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

