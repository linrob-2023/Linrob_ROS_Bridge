from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='HILIN_Package',
            executable='HIL',
            name='hil_node',
            output='screen',
        ),
    ])
