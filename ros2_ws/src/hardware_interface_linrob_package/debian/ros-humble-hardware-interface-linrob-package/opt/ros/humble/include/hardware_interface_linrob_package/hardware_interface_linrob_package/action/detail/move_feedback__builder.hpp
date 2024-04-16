// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hardware_interface_linrob_package:action/MoveFeedback.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_FEEDBACK__BUILDER_HPP_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hardware_interface_linrob_package/action/detail/move_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hardware_interface_linrob_package
{

namespace action
{

namespace builder
{

class Init_MoveFeedback_Goal_deceleration
{
public:
  explicit Init_MoveFeedback_Goal_deceleration(::hardware_interface_linrob_package::action::MoveFeedback_Goal & msg)
  : msg_(msg)
  {}
  ::hardware_interface_linrob_package::action::MoveFeedback_Goal deceleration(::hardware_interface_linrob_package::action::MoveFeedback_Goal::_deceleration_type arg)
  {
    msg_.deceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_Goal msg_;
};

class Init_MoveFeedback_Goal_acceleration
{
public:
  explicit Init_MoveFeedback_Goal_acceleration(::hardware_interface_linrob_package::action::MoveFeedback_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveFeedback_Goal_deceleration acceleration(::hardware_interface_linrob_package::action::MoveFeedback_Goal::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_MoveFeedback_Goal_deceleration(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_Goal msg_;
};

class Init_MoveFeedback_Goal_velocity
{
public:
  explicit Init_MoveFeedback_Goal_velocity(::hardware_interface_linrob_package::action::MoveFeedback_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveFeedback_Goal_acceleration velocity(::hardware_interface_linrob_package::action::MoveFeedback_Goal::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_MoveFeedback_Goal_acceleration(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_Goal msg_;
};

class Init_MoveFeedback_Goal_position
{
public:
  explicit Init_MoveFeedback_Goal_position(::hardware_interface_linrob_package::action::MoveFeedback_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveFeedback_Goal_velocity position(::hardware_interface_linrob_package::action::MoveFeedback_Goal::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_MoveFeedback_Goal_velocity(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_Goal msg_;
};

class Init_MoveFeedback_Goal_command_type
{
public:
  Init_MoveFeedback_Goal_command_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveFeedback_Goal_position command_type(::hardware_interface_linrob_package::action::MoveFeedback_Goal::_command_type_type arg)
  {
    msg_.command_type = std::move(arg);
    return Init_MoveFeedback_Goal_position(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::action::MoveFeedback_Goal>()
{
  return hardware_interface_linrob_package::action::builder::Init_MoveFeedback_Goal_command_type();
}

}  // namespace hardware_interface_linrob_package


namespace hardware_interface_linrob_package
{

namespace action
{

namespace builder
{

class Init_MoveFeedback_Result_message
{
public:
  explicit Init_MoveFeedback_Result_message(::hardware_interface_linrob_package::action::MoveFeedback_Result & msg)
  : msg_(msg)
  {}
  ::hardware_interface_linrob_package::action::MoveFeedback_Result message(::hardware_interface_linrob_package::action::MoveFeedback_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_Result msg_;
};

class Init_MoveFeedback_Result_success
{
public:
  Init_MoveFeedback_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveFeedback_Result_message success(::hardware_interface_linrob_package::action::MoveFeedback_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveFeedback_Result_message(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::action::MoveFeedback_Result>()
{
  return hardware_interface_linrob_package::action::builder::Init_MoveFeedback_Result_success();
}

}  // namespace hardware_interface_linrob_package


namespace hardware_interface_linrob_package
{

namespace action
{

namespace builder
{

class Init_MoveFeedback_Feedback_axis_referenced
{
public:
  explicit Init_MoveFeedback_Feedback_axis_referenced(::hardware_interface_linrob_package::action::MoveFeedback_Feedback & msg)
  : msg_(msg)
  {}
  ::hardware_interface_linrob_package::action::MoveFeedback_Feedback axis_referenced(::hardware_interface_linrob_package::action::MoveFeedback_Feedback::_axis_referenced_type arg)
  {
    msg_.axis_referenced = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_Feedback msg_;
};

class Init_MoveFeedback_Feedback_position_reached
{
public:
  explicit Init_MoveFeedback_Feedback_position_reached(::hardware_interface_linrob_package::action::MoveFeedback_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveFeedback_Feedback_axis_referenced position_reached(::hardware_interface_linrob_package::action::MoveFeedback_Feedback::_position_reached_type arg)
  {
    msg_.position_reached = std::move(arg);
    return Init_MoveFeedback_Feedback_axis_referenced(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_Feedback msg_;
};

class Init_MoveFeedback_Feedback_timestamp
{
public:
  explicit Init_MoveFeedback_Feedback_timestamp(::hardware_interface_linrob_package::action::MoveFeedback_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveFeedback_Feedback_position_reached timestamp(::hardware_interface_linrob_package::action::MoveFeedback_Feedback::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MoveFeedback_Feedback_position_reached(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_Feedback msg_;
};

class Init_MoveFeedback_Feedback_error_id_l3
{
public:
  explicit Init_MoveFeedback_Feedback_error_id_l3(::hardware_interface_linrob_package::action::MoveFeedback_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveFeedback_Feedback_timestamp error_id_l3(::hardware_interface_linrob_package::action::MoveFeedback_Feedback::_error_id_l3_type arg)
  {
    msg_.error_id_l3 = std::move(arg);
    return Init_MoveFeedback_Feedback_timestamp(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_Feedback msg_;
};

class Init_MoveFeedback_Feedback_error_id_l2
{
public:
  explicit Init_MoveFeedback_Feedback_error_id_l2(::hardware_interface_linrob_package::action::MoveFeedback_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveFeedback_Feedback_error_id_l3 error_id_l2(::hardware_interface_linrob_package::action::MoveFeedback_Feedback::_error_id_l2_type arg)
  {
    msg_.error_id_l2 = std::move(arg);
    return Init_MoveFeedback_Feedback_error_id_l3(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_Feedback msg_;
};

class Init_MoveFeedback_Feedback_error_id_l1
{
public:
  explicit Init_MoveFeedback_Feedback_error_id_l1(::hardware_interface_linrob_package::action::MoveFeedback_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveFeedback_Feedback_error_id_l2 error_id_l1(::hardware_interface_linrob_package::action::MoveFeedback_Feedback::_error_id_l1_type arg)
  {
    msg_.error_id_l1 = std::move(arg);
    return Init_MoveFeedback_Feedback_error_id_l2(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_Feedback msg_;
};

class Init_MoveFeedback_Feedback_state
{
public:
  explicit Init_MoveFeedback_Feedback_state(::hardware_interface_linrob_package::action::MoveFeedback_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveFeedback_Feedback_error_id_l1 state(::hardware_interface_linrob_package::action::MoveFeedback_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MoveFeedback_Feedback_error_id_l1(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_Feedback msg_;
};

class Init_MoveFeedback_Feedback_status
{
public:
  explicit Init_MoveFeedback_Feedback_status(::hardware_interface_linrob_package::action::MoveFeedback_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveFeedback_Feedback_state status(::hardware_interface_linrob_package::action::MoveFeedback_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveFeedback_Feedback_state(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_Feedback msg_;
};

class Init_MoveFeedback_Feedback_axis_name
{
public:
  Init_MoveFeedback_Feedback_axis_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveFeedback_Feedback_status axis_name(::hardware_interface_linrob_package::action::MoveFeedback_Feedback::_axis_name_type arg)
  {
    msg_.axis_name = std::move(arg);
    return Init_MoveFeedback_Feedback_status(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::action::MoveFeedback_Feedback>()
{
  return hardware_interface_linrob_package::action::builder::Init_MoveFeedback_Feedback_axis_name();
}

}  // namespace hardware_interface_linrob_package


namespace hardware_interface_linrob_package
{

namespace action
{

namespace builder
{

class Init_MoveFeedback_SendGoal_Request_goal
{
public:
  explicit Init_MoveFeedback_SendGoal_Request_goal(::hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request goal(::hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request msg_;
};

class Init_MoveFeedback_SendGoal_Request_goal_id
{
public:
  Init_MoveFeedback_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveFeedback_SendGoal_Request_goal goal_id(::hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveFeedback_SendGoal_Request_goal(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request>()
{
  return hardware_interface_linrob_package::action::builder::Init_MoveFeedback_SendGoal_Request_goal_id();
}

}  // namespace hardware_interface_linrob_package


namespace hardware_interface_linrob_package
{

namespace action
{

namespace builder
{

class Init_MoveFeedback_SendGoal_Response_stamp
{
public:
  explicit Init_MoveFeedback_SendGoal_Response_stamp(::hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response stamp(::hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response msg_;
};

class Init_MoveFeedback_SendGoal_Response_accepted
{
public:
  Init_MoveFeedback_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveFeedback_SendGoal_Response_stamp accepted(::hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveFeedback_SendGoal_Response_stamp(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response>()
{
  return hardware_interface_linrob_package::action::builder::Init_MoveFeedback_SendGoal_Response_accepted();
}

}  // namespace hardware_interface_linrob_package


namespace hardware_interface_linrob_package
{

namespace action
{

namespace builder
{

class Init_MoveFeedback_GetResult_Request_goal_id
{
public:
  Init_MoveFeedback_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hardware_interface_linrob_package::action::MoveFeedback_GetResult_Request goal_id(::hardware_interface_linrob_package::action::MoveFeedback_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::action::MoveFeedback_GetResult_Request>()
{
  return hardware_interface_linrob_package::action::builder::Init_MoveFeedback_GetResult_Request_goal_id();
}

}  // namespace hardware_interface_linrob_package


namespace hardware_interface_linrob_package
{

namespace action
{

namespace builder
{

class Init_MoveFeedback_GetResult_Response_result
{
public:
  explicit Init_MoveFeedback_GetResult_Response_result(::hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response result(::hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response msg_;
};

class Init_MoveFeedback_GetResult_Response_status
{
public:
  Init_MoveFeedback_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveFeedback_GetResult_Response_result status(::hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveFeedback_GetResult_Response_result(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response>()
{
  return hardware_interface_linrob_package::action::builder::Init_MoveFeedback_GetResult_Response_status();
}

}  // namespace hardware_interface_linrob_package


namespace hardware_interface_linrob_package
{

namespace action
{

namespace builder
{

class Init_MoveFeedback_FeedbackMessage_feedback
{
public:
  explicit Init_MoveFeedback_FeedbackMessage_feedback(::hardware_interface_linrob_package::action::MoveFeedback_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::hardware_interface_linrob_package::action::MoveFeedback_FeedbackMessage feedback(::hardware_interface_linrob_package::action::MoveFeedback_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_FeedbackMessage msg_;
};

class Init_MoveFeedback_FeedbackMessage_goal_id
{
public:
  Init_MoveFeedback_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveFeedback_FeedbackMessage_feedback goal_id(::hardware_interface_linrob_package::action::MoveFeedback_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveFeedback_FeedbackMessage_feedback(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveFeedback_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::action::MoveFeedback_FeedbackMessage>()
{
  return hardware_interface_linrob_package::action::builder::Init_MoveFeedback_FeedbackMessage_goal_id();
}

}  // namespace hardware_interface_linrob_package

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_FEEDBACK__BUILDER_HPP_
