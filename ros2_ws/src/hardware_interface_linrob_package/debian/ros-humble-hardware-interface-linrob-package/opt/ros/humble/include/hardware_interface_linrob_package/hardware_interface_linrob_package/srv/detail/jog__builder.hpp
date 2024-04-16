// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hardware_interface_linrob_package:srv/Jog.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__JOG__BUILDER_HPP_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__JOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hardware_interface_linrob_package/srv/detail/jog__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hardware_interface_linrob_package
{

namespace srv
{

namespace builder
{

class Init_Jog_Request_direction
{
public:
  explicit Init_Jog_Request_direction(::hardware_interface_linrob_package::srv::Jog_Request & msg)
  : msg_(msg)
  {}
  ::hardware_interface_linrob_package::srv::Jog_Request direction(::hardware_interface_linrob_package::srv::Jog_Request::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::srv::Jog_Request msg_;
};

class Init_Jog_Request_speed
{
public:
  Init_Jog_Request_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Jog_Request_direction speed(::hardware_interface_linrob_package::srv::Jog_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Jog_Request_direction(msg_);
  }

private:
  ::hardware_interface_linrob_package::srv::Jog_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::srv::Jog_Request>()
{
  return hardware_interface_linrob_package::srv::builder::Init_Jog_Request_speed();
}

}  // namespace hardware_interface_linrob_package


namespace hardware_interface_linrob_package
{

namespace srv
{

namespace builder
{

class Init_Jog_Response_message
{
public:
  explicit Init_Jog_Response_message(::hardware_interface_linrob_package::srv::Jog_Response & msg)
  : msg_(msg)
  {}
  ::hardware_interface_linrob_package::srv::Jog_Response message(::hardware_interface_linrob_package::srv::Jog_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::srv::Jog_Response msg_;
};

class Init_Jog_Response_success
{
public:
  Init_Jog_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Jog_Response_message success(::hardware_interface_linrob_package::srv::Jog_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Jog_Response_message(msg_);
  }

private:
  ::hardware_interface_linrob_package::srv::Jog_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::srv::Jog_Response>()
{
  return hardware_interface_linrob_package::srv::builder::Init_Jog_Response_success();
}

}  // namespace hardware_interface_linrob_package

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__JOG__BUILDER_HPP_
