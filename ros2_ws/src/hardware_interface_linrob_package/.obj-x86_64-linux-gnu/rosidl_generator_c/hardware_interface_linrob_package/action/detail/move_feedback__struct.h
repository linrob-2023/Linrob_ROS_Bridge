// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hardware_interface_linrob_package:action/MoveFeedback.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_FEEDBACK__STRUCT_H_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveFeedback in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__action__MoveFeedback_Goal
{
  rosidl_runtime_c__String command_type;
  double position;
  double velocity;
  double acceleration;
  double deceleration;
} hardware_interface_linrob_package__action__MoveFeedback_Goal;

// Struct for a sequence of hardware_interface_linrob_package__action__MoveFeedback_Goal.
typedef struct hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence
{
  hardware_interface_linrob_package__action__MoveFeedback_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveFeedback in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__action__MoveFeedback_Result
{
  bool success;
  rosidl_runtime_c__String message;
} hardware_interface_linrob_package__action__MoveFeedback_Result;

// Struct for a sequence of hardware_interface_linrob_package__action__MoveFeedback_Result.
typedef struct hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence
{
  hardware_interface_linrob_package__action__MoveFeedback_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'axis_name'
// Member 'status'
// Member 'state'
// Member 'error_id_l1'
// Member 'error_id_l2'
// Member 'error_id_l3'
// Member 'timestamp'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveFeedback in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__action__MoveFeedback_Feedback
{
  rosidl_runtime_c__String axis_name;
  rosidl_runtime_c__String status;
  rosidl_runtime_c__String state;
  rosidl_runtime_c__String error_id_l1;
  rosidl_runtime_c__String error_id_l2;
  rosidl_runtime_c__String error_id_l3;
  rosidl_runtime_c__String timestamp;
  bool position_reached;
  bool axis_referenced;
} hardware_interface_linrob_package__action__MoveFeedback_Feedback;

// Struct for a sequence of hardware_interface_linrob_package__action__MoveFeedback_Feedback.
typedef struct hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence
{
  hardware_interface_linrob_package__action__MoveFeedback_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "hardware_interface_linrob_package/action/detail/move_feedback__struct.h"

/// Struct defined in action/MoveFeedback in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  hardware_interface_linrob_package__action__MoveFeedback_Goal goal;
} hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request;

// Struct for a sequence of hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request.
typedef struct hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence
{
  hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveFeedback in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response;

// Struct for a sequence of hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response.
typedef struct hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence
{
  hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveFeedback in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request;

// Struct for a sequence of hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request.
typedef struct hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence
{
  hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__struct.h"

/// Struct defined in action/MoveFeedback in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response
{
  int8_t status;
  hardware_interface_linrob_package__action__MoveFeedback_Result result;
} hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response;

// Struct for a sequence of hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response.
typedef struct hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence
{
  hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__struct.h"

/// Struct defined in action/MoveFeedback in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  hardware_interface_linrob_package__action__MoveFeedback_Feedback feedback;
} hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage;

// Struct for a sequence of hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage.
typedef struct hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence
{
  hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_FEEDBACK__STRUCT_H_
