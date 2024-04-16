// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from hardware_interface_linrob_package:srv/Init.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__INIT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__INIT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "hardware_interface_linrob_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "hardware_interface_linrob_package/srv/detail/init__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace hardware_interface_linrob_package
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hardware_interface_linrob_package
cdr_serialize(
  const hardware_interface_linrob_package::srv::Init_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hardware_interface_linrob_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hardware_interface_linrob_package::srv::Init_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hardware_interface_linrob_package
get_serialized_size(
  const hardware_interface_linrob_package::srv::Init_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hardware_interface_linrob_package
max_serialized_size_Init_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hardware_interface_linrob_package

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hardware_interface_linrob_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hardware_interface_linrob_package, srv, Init_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "hardware_interface_linrob_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "hardware_interface_linrob_package/srv/detail/init__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace hardware_interface_linrob_package
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hardware_interface_linrob_package
cdr_serialize(
  const hardware_interface_linrob_package::srv::Init_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hardware_interface_linrob_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hardware_interface_linrob_package::srv::Init_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hardware_interface_linrob_package
get_serialized_size(
  const hardware_interface_linrob_package::srv::Init_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hardware_interface_linrob_package
max_serialized_size_Init_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hardware_interface_linrob_package

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hardware_interface_linrob_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hardware_interface_linrob_package, srv, Init_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "hardware_interface_linrob_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hardware_interface_linrob_package
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hardware_interface_linrob_package, srv, Init)();

#ifdef __cplusplus
}
#endif

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__INIT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
