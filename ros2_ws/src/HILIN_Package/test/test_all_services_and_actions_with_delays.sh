#!/bin/bash

# Function to log output to a file
log_output() {
    echo "$1" >> test_results.txt
    echo "----------------------------------------" >> test_results.txt
}

echo "Starting Automated Tests of All Services and Actions with Delays" > test_results.txt

# Source ROS environment (Adjust the path according to your ROS installation)
source /opt/ros/foxy/setup.bash
source ~/Linrob_ROS_Bridge/ros2_ws/install/setup.bash

# Define the topic to listen to for feedback
FEEDBACK_TOPIC="/feedback_topic"

# Testing Init Service
log_output "Testing Init Service..."
ros2 service call /init_robot action_test/srv/Init "{}" >> test_results.txt
sleep 180  # Wait for three minutes

# Testing Power Service
log_output "Testing Power Service..."
ros2 service call /power_robot action_test/srv/Power "{activate: true}" >> test_results.txt
sleep 180  # Wait for three minutes

# Testing Jog Service
log_output "Testing Jog Service..."
ros2 service call /jog_robot action_test/srv/Jog "{position: 5, velocity: 1.0, acceleration: 0.5, deceleration: 0.5}" >> test_results.txt
sleep 180  # Wait for three minutes

# Testing Reset Service
log_output "Testing Reset Service..."
ros2 service call /reset_robot action_test/srv/Reset "{}" >> test_results.txt
sleep 180  # Wait for three minutes

# Testing Stop Service
log_output "Testing Stop Service..."
ros2 service call /stop_robot action_test/srv/Stop "{deceleration: 0.5}" >> test_results.txt
sleep 180  # Wait for three minutes

# Testing Home Service
log_output "Testing Home Service..."
ros2 service call /home_robot action_test/srv/Home "{}" >> test_results.txt
sleep 180  # Wait for three minutes

# Testing Zero Service
log_output "Testing Zero Service..."
ros2 service call /zero_robot action_test/srv/Zero "{position: 0}" >> test_results.txt
sleep 180  # Wait for three minutes

# Testing AcknowledgeError Service
log_output "Testing AcknowledgeError Service..."
ros2 service call /acknowledge_error_robot action_test/srv/AcknowledgeError "{}" >> test_results.txt
sleep 180  # Wait for three minutes

# Testing MoveFeedback Action Server moveabs
log_output "Testing MoveFeedback Action..."
ros2 action send_goal /move_feedback action_test/action/MoveFeedback "{command_type: 'moveabs', position: 500, velocity: 50 , acceleration: 50, deceleration: 50}" >> test_results.txt
sleep 180  # Wait for three minutes

# Testing MoveFeedback Action Server moverel
log_output "Testing MoveFeedback Action..."
ros2 action send_goal /move_feedback action_test/action/MoveFeedback "{command_type: 'moverel', position: 800 , velocity: 50 , acceleration: 50, deceleration: 50}" >> test_results.txt
sleep 180  # Wait for three minutes


# Monitoring feedback for 3 minutes
log_output "Monitoring feedback for 3 minutes..."
timeout 180s ros2 topic echo $FEEDBACK_TOPIC >> test_results.txt

log_output "All tests and monitoring completed."

# End of the script
