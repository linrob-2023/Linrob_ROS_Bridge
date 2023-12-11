import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
import socket
import json
from action_test.action import MoveCommand  

class MoveCommandActionServer(Node):
    def __init__(self):
        super().__init__('move_command_action_server')
        self.action_server = ActionServer(
            self,
            MoveCommand,
            'move_command',
            self.execute_callback)

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing move command action goal...')

        # Translate the goal to JSON format
        command = {
            "cmd": "move",
            "position": goal_handle.request.position,
            "velocity": goal_handle.request.velocity,
            "acceleration": goal_handle.request.acceleration,
            "deceleration": goal_handle.request.deceleration,
        }
        message = json.dumps(command).encode() + b"\n"

        # Send the command to the external IPC via TCP/IP
        try:
            with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as sock:
                # Replace with your IPC's address and port
                ipc_address = "172.31.176.1"  # Placeholder
                ipc_port = 50000  # Placeholder
                sock.connect((ipc_address, ipc_port))
                sock.sendall(message)
                # Optionally receive response from IPC and handle it
                # response = sock.recv(1024)

        except Exception as e:
            self.get_logger().error(f'Failed to send command to IPC: {e}')
            goal_handle.abort()
            return MoveCommand.Result(success=False, message=str(e))

        # Optionally, add feedback publishing here
        # feedback = MoveCommand.Feedback()
        # feedback.current_position = ...
        # goal_handle.publish_feedback(feedback)

        # Complete the action goal
        self.get_logger().info('Move command action goal succeeded.')
        goal_handle.succeed()
        return MoveCommand.Result(success=True, message="Command executed successfully.")

def main(args=None):
    rclpy.init(args=args)
    node = MoveCommandActionServer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

