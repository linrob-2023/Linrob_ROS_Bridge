import json
import socket
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from your_action_package.action import MoveCommand  # Import your Move action definition
from your_service_package.srv import JogStopCommand  # Import your Jog/Stop/Homing/Zeroing service definition

class RobotHardwareInterfaceNode(Node):
    """Node for interfacing with robot hardware via TCP/JSON."""

    def __init__(self):
        """Initialize the node, action server, and service server."""
        super().__init__('robot_hardware_interface')

        # Initialize action server for 'move' command
        self.action_server = ActionServer(
            self,
            MoveCommand,
            'move_command',
            self.execute_move_callback
        )

        # Initialize service server for 'jog', 'stop', 'homing', and 'zeroing' commands
        self.service_server = self.create_service(
            JogStopCommand,
            'jog_stop_command',
            self.handle_jog_stop_request
        )

        # Initialize TCP socket for communicating with robot hardware
        self.client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.client_socket.connect(("robot_ip", robot_port))  # Replace with your robot's IP and port

    def execute_move_callback(self, goal_handle):
        """
        Callback to handle 'move' action goals.

        Parameters:
            goal_handle: The action goal handle which contains the request.

        Returns:
            None
        """
        goal = goal_handle.request
        json_msg = {
            'command': 'move',
            'goal_position_x': goal.goal_position_x,
            'max_velocity': goal.max_velocity,
            'max_acceleration': goal.max_acceleration,
            'max_deceleration': goal.max_deceleration
        }
        
        self.client_socket.sendall(json.dumps(json_msg).encode('utf-8'))
        # TODO: Handle feedback and result

    def handle_jog_stop_request(self, request, response):
        """
        Callback to handle 'jog', 'stop', 'homing', and 'zeroing' service requests.

        Parameters:
            request: The service request message.
            response: The service response message.

        Returns:
            response: Modified service response message.
        """
        if request.command_type == 'jog':
            json_msg = {'command': 'jog', 'velocity': request.velocity}
        elif request.command_type == 'stop':
            json_msg = {'command': 'stop'}
        elif request.command_type == 'homing':
            json_msg = {'command': 'homing'}  # Add any additional parameters if needed
        elif request.command_type == 'zeroing':
            json_msg = {'command': 'zeroing'}  # Add any additional parameters if needed
        else:
            response.success = False
            response.message = 'Invalid command_type'
            return response

        self.client_socket.sendall(json.dumps(json_msg).encode('utf-8'))
        # TODO: Handle the response

        response.success = True
        response.message = f"Executed command: {request.command_type}"
        return response

def main(args=None):
    """Entry point for the node."""
    rclpy.init(args=args)
    node = RobotHardwareInterfaceNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()