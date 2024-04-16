// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hardware_interface_linrob_package:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__MSG__DETAIL__FEEDBACK__STRUCT_H_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__MSG__DETAIL__FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'axis_name'
// Member 'status'
// Member 'state'
// Member 'error_id_l1'
// Member 'error_id_l2'
// Member 'error_id_l3'
// Member 'timestamp'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Feedback in the package hardware_interface_linrob_package.
/**
  * Feedback.msg
 */
typedef struct hardware_interface_linrob_package__msg__Feedback
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
} hardware_interface_linrob_package__msg__Feedback;

// Struct for a sequence of hardware_interface_linrob_package__msg__Feedback.
typedef struct hardware_interface_linrob_package__msg__Feedback__Sequence
{
  hardware_interface_linrob_package__msg__Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__msg__Feedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__MSG__DETAIL__FEEDBACK__STRUCT_H_
