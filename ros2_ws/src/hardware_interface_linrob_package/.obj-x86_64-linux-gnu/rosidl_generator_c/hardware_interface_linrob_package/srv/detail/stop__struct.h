// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hardware_interface_linrob_package:srv/Stop.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__STOP__STRUCT_H_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__STOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Stop in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__srv__Stop_Request
{
  /// Optional: Specify if you want a custom deceleration for stopping
  float deceleration;
} hardware_interface_linrob_package__srv__Stop_Request;

// Struct for a sequence of hardware_interface_linrob_package__srv__Stop_Request.
typedef struct hardware_interface_linrob_package__srv__Stop_Request__Sequence
{
  hardware_interface_linrob_package__srv__Stop_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__srv__Stop_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Stop in the package hardware_interface_linrob_package.
typedef struct hardware_interface_linrob_package__srv__Stop_Response
{
  /// Indicates if the stop command was successfully executed
  bool success;
  /// Provides additional information or an error message
  rosidl_runtime_c__String message;
} hardware_interface_linrob_package__srv__Stop_Response;

// Struct for a sequence of hardware_interface_linrob_package__srv__Stop_Response.
typedef struct hardware_interface_linrob_package__srv__Stop_Response__Sequence
{
  hardware_interface_linrob_package__srv__Stop_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hardware_interface_linrob_package__srv__Stop_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__STOP__STRUCT_H_
