// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hardware_interface_linrob_package:srv/Stop.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__STOP__BUILDER_HPP_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__STOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hardware_interface_linrob_package/srv/detail/stop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hardware_interface_linrob_package
{

namespace srv
{

namespace builder
{

class Init_Stop_Request_deceleration
{
public:
  Init_Stop_Request_deceleration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hardware_interface_linrob_package::srv::Stop_Request deceleration(::hardware_interface_linrob_package::srv::Stop_Request::_deceleration_type arg)
  {
    msg_.deceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::srv::Stop_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::srv::Stop_Request>()
{
  return hardware_interface_linrob_package::srv::builder::Init_Stop_Request_deceleration();
}

}  // namespace hardware_interface_linrob_package


namespace hardware_interface_linrob_package
{

namespace srv
{

namespace builder
{

class Init_Stop_Response_message
{
public:
  explicit Init_Stop_Response_message(::hardware_interface_linrob_package::srv::Stop_Response & msg)
  : msg_(msg)
  {}
  ::hardware_interface_linrob_package::srv::Stop_Response message(::hardware_interface_linrob_package::srv::Stop_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::srv::Stop_Response msg_;
};

class Init_Stop_Response_success
{
public:
  Init_Stop_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Stop_Response_message success(::hardware_interface_linrob_package::srv::Stop_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Stop_Response_message(msg_);
  }

private:
  ::hardware_interface_linrob_package::srv::Stop_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::srv::Stop_Response>()
{
  return hardware_interface_linrob_package::srv::builder::Init_Stop_Response_success();
}

}  // namespace hardware_interface_linrob_package

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__STOP__BUILDER_HPP_
