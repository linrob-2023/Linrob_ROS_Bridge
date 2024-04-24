# HILIN_Package

## Overview

`HILIN_Package` is a ROS 2 package designed for axis movement and control through a hardware interface layer (HIL). It interfaces with an IPC server to send commands and receive feedback, handling move commands with feedback, jogging service,stopping service.

## Features

- **MoveFeedbackActionServer**: Manages move commands with real-time feedback.
- **JogService**: Allows jogging of the robot at specified speeds and directions.
- **StopService**: Provides functionality to immediately stop the robot.
- **FeedbackPublisher**: Publishes feedback data from the IPC server on a ROS topic.
- **IpcDataManager**: Manages communication with the IPC server.

## Dependencies

This package relies on the following dependencies:
- ROS 2 (e.g., Foxy humble)
- Python 3.x
- An operational Linrob axis

## Installation

To install the `HILIN_Package`, follow these steps:

1. Clone the repository into your ROS 2 workspace:

    ```bash
    cd ~/ros2_ws/src/
    git clone 
    ```

2. Build the package using `colcon`:

    ```bash
    cd ~/ros2_ws
    colcon build
    ```

3. Source the setup script to include the package in your environment:

    ```bash
    source ~/ros2_ws/install/setup.bash
    ```

## Usage

To use the `HILIN_Package`, run the package using the provided launch file:

```bash
ros2 launch HILIN_Package hilin_launch.py
```

```bash
ros2 action send_goal --feedback move_feedback action_test/action/MoveFeedback "{command_type: 'move_abs',
 position: 1000.0, velocity: 0.5, acceleration: 0.1, deceleration: 0.1}"
```