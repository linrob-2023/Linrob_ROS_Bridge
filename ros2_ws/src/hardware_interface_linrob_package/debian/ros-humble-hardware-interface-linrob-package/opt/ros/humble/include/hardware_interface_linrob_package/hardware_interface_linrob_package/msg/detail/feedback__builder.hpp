// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hardware_interface_linrob_package:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__MSG__DETAIL__FEEDBACK__BUILDER_HPP_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__MSG__DETAIL__FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hardware_interface_linrob_package/msg/detail/feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hardware_interface_linrob_package
{

namespace msg
{

namespace builder
{

class Init_Feedback_axis_referenced
{
public:
  explicit Init_Feedback_axis_referenced(::hardware_interface_linrob_package::msg::Feedback & msg)
  : msg_(msg)
  {}
  ::hardware_interface_linrob_package::msg::Feedback axis_referenced(::hardware_interface_linrob_package::msg::Feedback::_axis_referenced_type arg)
  {
    msg_.axis_referenced = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::msg::Feedback msg_;
};

class Init_Feedback_position_reached
{
public:
  explicit Init_Feedback_position_reached(::hardware_interface_linrob_package::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_axis_referenced position_reached(::hardware_interface_linrob_package::msg::Feedback::_position_reached_type arg)
  {
    msg_.position_reached = std::move(arg);
    return Init_Feedback_axis_referenced(msg_);
  }

private:
  ::hardware_interface_linrob_package::msg::Feedback msg_;
};

class Init_Feedback_timestamp
{
public:
  explicit Init_Feedback_timestamp(::hardware_interface_linrob_package::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_position_reached timestamp(::hardware_interface_linrob_package::msg::Feedback::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Feedback_position_reached(msg_);
  }

private:
  ::hardware_interface_linrob_package::msg::Feedback msg_;
};

class Init_Feedback_error_id_l3
{
public:
  explicit Init_Feedback_error_id_l3(::hardware_interface_linrob_package::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_timestamp error_id_l3(::hardware_interface_linrob_package::msg::Feedback::_error_id_l3_type arg)
  {
    msg_.error_id_l3 = std::move(arg);
    return Init_Feedback_timestamp(msg_);
  }

private:
  ::hardware_interface_linrob_package::msg::Feedback msg_;
};

class Init_Feedback_error_id_l2
{
public:
  explicit Init_Feedback_error_id_l2(::hardware_interface_linrob_package::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_error_id_l3 error_id_l2(::hardware_interface_linrob_package::msg::Feedback::_error_id_l2_type arg)
  {
    msg_.error_id_l2 = std::move(arg);
    return Init_Feedback_error_id_l3(msg_);
  }

private:
  ::hardware_interface_linrob_package::msg::Feedback msg_;
};

class Init_Feedback_error_id_l1
{
public:
  explicit Init_Feedback_error_id_l1(::hardware_interface_linrob_package::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_error_id_l2 error_id_l1(::hardware_interface_linrob_package::msg::Feedback::_error_id_l1_type arg)
  {
    msg_.error_id_l1 = std::move(arg);
    return Init_Feedback_error_id_l2(msg_);
  }

private:
  ::hardware_interface_linrob_package::msg::Feedback msg_;
};

class Init_Feedback_state
{
public:
  explicit Init_Feedback_state(::hardware_interface_linrob_package::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_error_id_l1 state(::hardware_interface_linrob_package::msg::Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_Feedback_error_id_l1(msg_);
  }

private:
  ::hardware_interface_linrob_package::msg::Feedback msg_;
};

class Init_Feedback_status
{
public:
  explicit Init_Feedback_status(::hardware_interface_linrob_package::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_state status(::hardware_interface_linrob_package::msg::Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Feedback_state(msg_);
  }

private:
  ::hardware_interface_linrob_package::msg::Feedback msg_;
};

class Init_Feedback_axis_name
{
public:
  Init_Feedback_axis_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Feedback_status axis_name(::hardware_interface_linrob_package::msg::Feedback::_axis_name_type arg)
  {
    msg_.axis_name = std::move(arg);
    return Init_Feedback_status(msg_);
  }

private:
  ::hardware_interface_linrob_package::msg::Feedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::msg::Feedback>()
{
  return hardware_interface_linrob_package::msg::builder::Init_Feedback_axis_name();
}

}  // namespace hardware_interface_linrob_package

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__MSG__DETAIL__FEEDBACK__BUILDER_HPP_
