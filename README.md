# Linrob Motion Center ROS 2 Interface

## Description

This project provides a ROS 2 interface for controlling Linrob Motion Center's robotic axes. It includes functionalities for various types of movements such as:

- Move to a specific position (`Move` command)
- Perform jogging operations (`Jog` command)
- Stop the motion (`Stop` command)
- Perform homing (`Homing` command)
- Zero the axis (`Zeroing` command)

The project leverages ROS 2's Actions, Services, and Publisher-Subscriber mechanisms to achieve these functionalities.

## Repository Structure

\`\`\`plaintext
robot_hardware_interface_pkg/
│
├── action/
│   └── MoveCommand.action
│
├── srv/
│   └── JogStopCommand.srv
│
├── src/
│   └── robot_hardware_interface_node.py
│
├── launch/
│   └── robot_hardware_interface_launch.py
│
├── config/
│   └── robot_hardware_settings.yaml
│
├── package.xml
│
└── setup.py
\`\`\`

## Features

- **Move Command**: Implemented as an Action to allow asynchronous, cancelable, long-running tasks with progress feedback.
  
- **Jog and Stop Commands**: Implemented as Services for immediate response and synchronous operation.

- **Homing and Zeroing Commands**: Implemented as Services for quick and effective one-off operations.

## How to Run

1. Navigate to your ROS 2 workspace.
2. Clone the repository into your `src` directory.
3. Build the workspace.
4. Use the provided launch file to start the nodes.

\`\`\`bash
cd ~/ros2_ws/src/
git clone <repository_url>
cd ..
colcon build
source install/setup.bash
ros2 launch robot_hardware_interface_pkg robot_hardware_interface_launch.py
\`\`\`

## Dependencies

- ROS 2 (Foxy or above)
- Python 3.x