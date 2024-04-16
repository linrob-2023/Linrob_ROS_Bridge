// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hardware_interface_linrob_package:action/MoveCommand.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_COMMAND__STRUCT_H_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MoveCommand in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__action__MoveCommand_Goal
{
  double position;
  double velocity;
  double acceleration;
  double deceleration;
} hardware_interface_linrob_package__action__MoveCommand_Goal;

// Struct for a sequence of hardware_interface_linrob_package__action__MoveCommand_Goal.
typedef struct hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence
{
  hardware_interface_linrob_package__action__MoveCommand_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveCommand in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__action__MoveCommand_Result
{
  bool success;
  rosidl_runtime_c__String message;
} hardware_interface_linrob_package__action__MoveCommand_Result;

// Struct for a sequence of hardware_interface_linrob_package__action__MoveCommand_Result.
typedef struct hardware_interface_linrob_package__action__MoveCommand_Result__Sequence
{
  hardware_interface_linrob_package__action__MoveCommand_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__action__MoveCommand_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveCommand in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__action__MoveCommand_Feedback
{
  double current_position;
} hardware_interface_linrob_package__action__MoveCommand_Feedback;

// Struct for a sequence of hardware_interface_linrob_package__action__MoveCommand_Feedback.
typedef struct hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence
{
  hardware_interface_linrob_package__action__MoveCommand_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "hardware_interface_linrob_package/action/detail/move_command__struct.h"

/// Struct defined in action/MoveCommand in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  hardware_interface_linrob_package__action__MoveCommand_Goal goal;
} hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request;

// Struct for a sequence of hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request.
typedef struct hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence
{
  hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveCommand in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response;

// Struct for a sequence of hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response.
typedef struct hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence
{
  hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveCommand in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__action__MoveCommand_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} hardware_interface_linrob_package__action__MoveCommand_GetResult_Request;

// Struct for a sequence of hardware_interface_linrob_package__action__MoveCommand_GetResult_Request.
typedef struct hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence
{
  hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_command__struct.h"

/// Struct defined in action/MoveCommand in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__action__MoveCommand_GetResult_Response
{
  int8_t status;
  hardware_interface_linrob_package__action__MoveCommand_Result result;
} hardware_interface_linrob_package__action__MoveCommand_GetResult_Response;

// Struct for a sequence of hardware_interface_linrob_package__action__MoveCommand_GetResult_Response.
typedef struct hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence
{
  hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_command__struct.h"

/// Struct defined in action/MoveCommand in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  hardware_interface_linrob_package__action__MoveCommand_Feedback feedback;
} hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage;

// Struct for a sequence of hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage.
typedef struct hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence
{
  hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_COMMAND__STRUCT_H_
