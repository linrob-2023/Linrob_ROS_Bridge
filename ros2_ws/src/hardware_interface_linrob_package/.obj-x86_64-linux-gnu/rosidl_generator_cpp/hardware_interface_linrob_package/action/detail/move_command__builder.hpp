// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hardware_interface_linrob_package:action/MoveCommand.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_COMMAND__BUILDER_HPP_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hardware_interface_linrob_package/action/detail/move_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hardware_interface_linrob_package
{

namespace action
{

namespace builder
{

class Init_MoveCommand_Goal_deceleration
{
public:
  explicit Init_MoveCommand_Goal_deceleration(::hardware_interface_linrob_package::action::MoveCommand_Goal & msg)
  : msg_(msg)
  {}
  ::hardware_interface_linrob_package::action::MoveCommand_Goal deceleration(::hardware_interface_linrob_package::action::MoveCommand_Goal::_deceleration_type arg)
  {
    msg_.deceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveCommand_Goal msg_;
};

class Init_MoveCommand_Goal_acceleration
{
public:
  explicit Init_MoveCommand_Goal_acceleration(::hardware_interface_linrob_package::action::MoveCommand_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveCommand_Goal_deceleration acceleration(::hardware_interface_linrob_package::action::MoveCommand_Goal::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_MoveCommand_Goal_deceleration(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveCommand_Goal msg_;
};

class Init_MoveCommand_Goal_velocity
{
public:
  explicit Init_MoveCommand_Goal_velocity(::hardware_interface_linrob_package::action::MoveCommand_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveCommand_Goal_acceleration velocity(::hardware_interface_linrob_package::action::MoveCommand_Goal::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_MoveCommand_Goal_acceleration(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveCommand_Goal msg_;
};

class Init_MoveCommand_Goal_position
{
public:
  Init_MoveCommand_Goal_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCommand_Goal_velocity position(::hardware_interface_linrob_package::action::MoveCommand_Goal::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_MoveCommand_Goal_velocity(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveCommand_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::action::MoveCommand_Goal>()
{
  return hardware_interface_linrob_package::action::builder::Init_MoveCommand_Goal_position();
}

}  // namespace hardware_interface_linrob_package


namespace hardware_interface_linrob_package
{

namespace action
{

namespace builder
{

class Init_MoveCommand_Result_message
{
public:
  explicit Init_MoveCommand_Result_message(::hardware_interface_linrob_package::action::MoveCommand_Result & msg)
  : msg_(msg)
  {}
  ::hardware_interface_linrob_package::action::MoveCommand_Result message(::hardware_interface_linrob_package::action::MoveCommand_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveCommand_Result msg_;
};

class Init_MoveCommand_Result_success
{
public:
  Init_MoveCommand_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCommand_Result_message success(::hardware_interface_linrob_package::action::MoveCommand_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveCommand_Result_message(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveCommand_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::action::MoveCommand_Result>()
{
  return hardware_interface_linrob_package::action::builder::Init_MoveCommand_Result_success();
}

}  // namespace hardware_interface_linrob_package


namespace hardware_interface_linrob_package
{

namespace action
{

namespace builder
{

class Init_MoveCommand_Feedback_current_position
{
public:
  Init_MoveCommand_Feedback_current_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hardware_interface_linrob_package::action::MoveCommand_Feedback current_position(::hardware_interface_linrob_package::action::MoveCommand_Feedback::_current_position_type arg)
  {
    msg_.current_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveCommand_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::action::MoveCommand_Feedback>()
{
  return hardware_interface_linrob_package::action::builder::Init_MoveCommand_Feedback_current_position();
}

}  // namespace hardware_interface_linrob_package


namespace hardware_interface_linrob_package
{

namespace action
{

namespace builder
{

class Init_MoveCommand_SendGoal_Request_goal
{
public:
  explicit Init_MoveCommand_SendGoal_Request_goal(::hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request goal(::hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request msg_;
};

class Init_MoveCommand_SendGoal_Request_goal_id
{
public:
  Init_MoveCommand_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCommand_SendGoal_Request_goal goal_id(::hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveCommand_SendGoal_Request_goal(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request>()
{
  return hardware_interface_linrob_package::action::builder::Init_MoveCommand_SendGoal_Request_goal_id();
}

}  // namespace hardware_interface_linrob_package


namespace hardware_interface_linrob_package
{

namespace action
{

namespace builder
{

class Init_MoveCommand_SendGoal_Response_stamp
{
public:
  explicit Init_MoveCommand_SendGoal_Response_stamp(::hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response stamp(::hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response msg_;
};

class Init_MoveCommand_SendGoal_Response_accepted
{
public:
  Init_MoveCommand_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCommand_SendGoal_Response_stamp accepted(::hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveCommand_SendGoal_Response_stamp(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response>()
{
  return hardware_interface_linrob_package::action::builder::Init_MoveCommand_SendGoal_Response_accepted();
}

}  // namespace hardware_interface_linrob_package


namespace hardware_interface_linrob_package
{

namespace action
{

namespace builder
{

class Init_MoveCommand_GetResult_Request_goal_id
{
public:
  Init_MoveCommand_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hardware_interface_linrob_package::action::MoveCommand_GetResult_Request goal_id(::hardware_interface_linrob_package::action::MoveCommand_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveCommand_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::action::MoveCommand_GetResult_Request>()
{
  return hardware_interface_linrob_package::action::builder::Init_MoveCommand_GetResult_Request_goal_id();
}

}  // namespace hardware_interface_linrob_package


namespace hardware_interface_linrob_package
{

namespace action
{

namespace builder
{

class Init_MoveCommand_GetResult_Response_result
{
public:
  explicit Init_MoveCommand_GetResult_Response_result(::hardware_interface_linrob_package::action::MoveCommand_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::hardware_interface_linrob_package::action::MoveCommand_GetResult_Response result(::hardware_interface_linrob_package::action::MoveCommand_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveCommand_GetResult_Response msg_;
};

class Init_MoveCommand_GetResult_Response_status
{
public:
  Init_MoveCommand_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCommand_GetResult_Response_result status(::hardware_interface_linrob_package::action::MoveCommand_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveCommand_GetResult_Response_result(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveCommand_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::action::MoveCommand_GetResult_Response>()
{
  return hardware_interface_linrob_package::action::builder::Init_MoveCommand_GetResult_Response_status();
}

}  // namespace hardware_interface_linrob_package


namespace hardware_interface_linrob_package
{

namespace action
{

namespace builder
{

class Init_MoveCommand_FeedbackMessage_feedback
{
public:
  explicit Init_MoveCommand_FeedbackMessage_feedback(::hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage feedback(::hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage msg_;
};

class Init_MoveCommand_FeedbackMessage_goal_id
{
public:
  Init_MoveCommand_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCommand_FeedbackMessage_feedback goal_id(::hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveCommand_FeedbackMessage_feedback(msg_);
  }

private:
  ::hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage>()
{
  return hardware_interface_linrob_package::action::builder::Init_MoveCommand_FeedbackMessage_goal_id();
}

}  // namespace hardware_interface_linrob_package

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_COMMAND__BUILDER_HPP_
