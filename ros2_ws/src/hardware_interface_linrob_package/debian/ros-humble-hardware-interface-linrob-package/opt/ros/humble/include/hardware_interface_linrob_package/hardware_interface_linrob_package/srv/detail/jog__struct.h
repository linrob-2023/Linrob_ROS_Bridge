// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hardware_interface_linrob_package:srv/Jog.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__JOG__STRUCT_H_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__JOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Jog in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__srv__Jog_Request
{
  double speed;
  int64_t direction;
} hardware_interface_linrob_package__srv__Jog_Request;

// Struct for a sequence of hardware_interface_linrob_package__srv__Jog_Request.
typedef struct hardware_interface_linrob_package__srv__Jog_Request__Sequence
{
  hardware_interface_linrob_package__srv__Jog_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__srv__Jog_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Jog in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__srv__Jog_Response
{
  bool success;
  rosidl_runtime_c__String message;
} hardware_interface_linrob_package__srv__Jog_Response;

// Struct for a sequence of hardware_interface_linrob_package__srv__Jog_Response.
typedef struct hardware_interface_linrob_package__srv__Jog_Response__Sequence
{
  hardware_interface_linrob_package__srv__Jog_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__srv__Jog_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__JOG__STRUCT_H_
