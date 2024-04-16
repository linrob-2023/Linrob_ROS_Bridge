#!/usr/bin/env python3
"""
Hardware Interface Layer (HIL) for ROS 2 

This code provides a ROS 2 node that interfaces with various hardware components
via defined services, ensuring operations conform to the specified API version.

Conforms to API version: 2.2.0

Author: Selim Ouirari
Email: selim.ouirari@linrob.io   
Last Modified: 26-03-2024  

"""

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
import socket
import json
import threading
import time

from action_test.action import MoveFeedback
from action_test.srv import Home, Init,Jog,Reset, Stop, Zero,Power, AcknowledgeError,setSafeArea
from action_test.msg import Feedback 

class IpcDataManager:
    def __init__(self, ipc_address, ipc_port,control_port):
        self.ipc_address = ipc_address
        self.ipc_port = ipc_port
        self.control_port = control_port
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
        self.get_logger().info(f"Executing move command: {goal_handle.request.command_type}")
        self.send_command_to_ipc(goal_handle)
        
        while not goal_handle.is_cancel_requested:
            feedback_data = self.ipc_data_manager.get_latest_feedback()
            if feedback_data:
                # Convert feedback_data to MoveFeedback.Feedback and publish
                action_feedback = MoveFeedback.Feedback()
                action_feedback.axis_name = str(feedback_data["Axis_Name"])
                action_feedback.status = str(feedback_data["status"])
                action_feedback.state = str(feedback_data["state"])
                action_feedback.error_id_l1 = str(feedback_data["error_id_l1"])
                action_feedback.error_id_l2 = str(feedback_data["error_id_l2"])
                action_feedback.error_id_l3 = str(feedback_data["error_id_l3"])
                action_feedback.timestamp = str(feedback_data["timestamp"])
                action_feedback.position_reached = bool(feedback_data["position_reached"])
                action_feedback.position_reached = bool(feedback_data["axis_referenced"])

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
            "cmd": goal_handle.request.command_type,
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
                receive_bytes = sock.recv(1000)
                receive_data = json.loads(receive_bytes)
        except Exception as e:
            self.get_logger().error(f'Failed to send command to IPC: {e}')
            goal_handle.abort()
            return MoveFeedback.Result(success=False, message=str(e))
class BaseService(Node):
    def __init__(self, service_type, service_name, ipc_data_manager):
        super().__init__(service_name)
        self.service = self.create_service(service_type, service_name, self.callback)
        self.ipc_data_manager = ipc_data_manager

    def callback(self, request, response):
        # This method is to be overridden in derived classes
        pass

    def send_command_to_ipc(self, command):
        message = json.dumps(command).encode() + b"\n"
        try:
            with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as sock:
                sock.connect((self.ipc_data_manager.ipc_address, self.ipc_data_manager.control_port))
                sock.sendall(message)
                receive_bytes = sock.recv(1024)
                receive_data = json.loads(receive_bytes.decode())
                success = receive_data.get("reply_code") == "OK"
                message = "Command executed successfully." if success else "Failed to execute command."
                return success, message
        except Exception as e:
            self.get_logger().error(f'Failed to send command to IPC: {e}')
            return False, str(e)
class InitService(BaseService):
    def __init__(self, ipc_data_manager):
        super().__init__(Init, 'init_robot', ipc_data_manager)

    def callback(self, request, response):
        command = {"cmd": "init"}
        response.success, response.message = self.send_command_to_ipc(command)
        return response

class PowerService(BaseService):
    def __init__(self, ipc_data_manager):
        super().__init__(Power, 'Power_robot', ipc_data_manager)

    def callback(self, request, response):
        command = {"cmd": "power", "activate": request.activate}
        response.success, response.message = self.send_command_to_ipc(command)
        return response


class JogService(BaseService):
    def __init__(self, ipc_data_manager):
        super().__init__(Jog, 'jog_robot', ipc_data_manager)

    def callback(self, request, response):
        command = {"cmd": "jog", "velocity": request.velocity, "direction": request.direction}
        response.success, response.message = self.send_command_to_ipc(command)
        return response

class ResetService(BaseService):
    def __init__(self, ipc_data_manager):
        super().__init__(Reset, 'reset_robot', ipc_data_manager)

    def callback(self, request, response):
        command = {"cmd": "reset"}
        response.success, response.message = self.send_command_to_ipc(command)
        return response


class StopService(BaseService):
    def __init__(self, ipc_data_manager):
        super().__init__(Stop, 'stop_robot', ipc_data_manager)

    def callback(self, request, response):
        command = {"cmd": "stop","deceleration": request.activate}
        response.success, response.message = self.send_command_to_ipc(command)
        return response
class HomeService(BaseService):
    def __init__(self, ipc_data_manager):
        super().__init__(Home, 'home_robot', ipc_data_manager)

    def callback(self, request, response):
        command = {"cmd": "home"}
        response.success, response.message = self.send_command_to_ipc(command)
        return response

class ZeroService(BaseService):
    def __init__(self, ipc_data_manager):
        super().__init__(Zero, 'zero_robot', ipc_data_manager)

    def callback(self, request, response):
        command = {"cmd": "zero", "position": request.position}
        response.success, response.message = self.send_command_to_ipc(command)
        return response
class AcknowledgeErrorService(BaseService):
    def __init__(self, ipc_data_manager):
        super().__init__(AcknowledgeError, 'AcknowledgeError_robot', ipc_data_manager)

    def callback(self, request, response):
        command = {"cmd": "ackError"}
        response.success, response.message = self.send_command_to_ipc(command)
        return response
class setSafeAreaService(BaseService):
    def __init__(self, ipc_data_manager):
        super().__init__(setSafeArea, 'setSafeArea_robot', ipc_data_manager)

    def callback(self, request, response):
        command = {"cmd": "setSafeArea", "safe_area_low": request.safe_area_low, "safe_area_high": request.safe_area_do_high,"safe_area_do_high": request.safe_area_do_high}
        response.success, response.message = self.send_command_to_ipc(command)
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
            feedback_msg.error_id_l1 = str(feedback_data["error_id_l1"])
            feedback_msg.error_id_l2 = str(feedback_data["error_id_l2"])
            feedback_msg.error_id_l3 = str(feedback_data["error_id_l3"])
            feedback_msg.timestamp = str(feedback_data["timestamp"])
            feedback_msg.position_reached = bool(feedback_data["position_reached"])
            feedback_msg.position_reached = bool(feedback_data["axis_referenced"])
            self.publisher_.publish(feedback_msg)


def main(args=None):
    rclpy.init(args=args)

    ipc_data_manager = IpcDataManager("172.31.176.1", 60001,50000)
    ipc_data_manager.start_listening()

    move_feedback_action_server = MoveFeedbackActionServer(ipc_data_manager)
    # Initialize all services with the ipc_data_manager
    services = [
        InitService(ipc_data_manager),
        PowerService(ipc_data_manager),
        JogService(ipc_data_manager),
        ResetService(ipc_data_manager),
        StopService(ipc_data_manager),
        HomeService(ipc_data_manager),
        ZeroService(ipc_data_manager),
        AcknowledgeErrorService(ipc_data_manager),
        SetSafeAreaService(ipc_data_manager)
    ]

    feedback_publisher = FeedbackPublisher(ipc_data_manager)
    
    executor = rclpy.executors.MultiThreadedExecutor()
    for service in services:
        executor.add_node(service)

    try:
        executor.spin()
    finally:
        executor.shutdown()
        move_feedback_action_server.destroy_node()
        feedback_publisher.destroy_node()
        for service in services:
            service.destroy_node()
        feedback_publisher.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()