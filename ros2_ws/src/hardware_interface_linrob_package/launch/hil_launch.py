from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='hardware_interface_linrob_package',
            executable='HIL',
            name='hil_node',
            output='screen',
        ),
    ])
