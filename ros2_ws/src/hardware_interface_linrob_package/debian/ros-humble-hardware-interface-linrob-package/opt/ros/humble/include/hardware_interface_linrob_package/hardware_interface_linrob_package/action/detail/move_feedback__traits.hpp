// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hardware_interface_linrob_package:action/MoveFeedback.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_FEEDBACK__TRAITS_HPP_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hardware_interface_linrob_package/action/detail/move_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hardware_interface_linrob_package
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveFeedback_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: command_type
  {
    out << "command_type: ";
    rosidl_generator_traits::value_to_yaml(msg.command_type, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: deceleration
  {
    out << "deceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.deceleration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveFeedback_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_type: ";
    rosidl_generator_traits::value_to_yaml(msg.command_type, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << "\n";
  }

  // member: deceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.deceleration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveFeedback_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hardware_interface_linrob_package

namespace rosidl_generator_traits
{

[[deprecated("use hardware_interface_linrob_package::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_interface_linrob_package::action::MoveFeedback_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_interface_linrob_package::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_interface_linrob_package::action::to_yaml() instead")]]
inline std::string to_yaml(const hardware_interface_linrob_package::action::MoveFeedback_Goal & msg)
{
  return hardware_interface_linrob_package::action::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_interface_linrob_package::action::MoveFeedback_Goal>()
{
  return "hardware_interface_linrob_package::action::MoveFeedback_Goal";
}

template<>
inline const char * name<hardware_interface_linrob_package::action::MoveFeedback_Goal>()
{
  return "hardware_interface_linrob_package/action/MoveFeedback_Goal";
}

template<>
struct has_fixed_size<hardware_interface_linrob_package::action::MoveFeedback_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hardware_interface_linrob_package::action::MoveFeedback_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hardware_interface_linrob_package::action::MoveFeedback_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hardware_interface_linrob_package
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveFeedback_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveFeedback_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveFeedback_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hardware_interface_linrob_package

namespace rosidl_generator_traits
{

[[deprecated("use hardware_interface_linrob_package::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_interface_linrob_package::action::MoveFeedback_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_interface_linrob_package::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_interface_linrob_package::action::to_yaml() instead")]]
inline std::string to_yaml(const hardware_interface_linrob_package::action::MoveFeedback_Result & msg)
{
  return hardware_interface_linrob_package::action::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_interface_linrob_package::action::MoveFeedback_Result>()
{
  return "hardware_interface_linrob_package::action::MoveFeedback_Result";
}

template<>
inline const char * name<hardware_interface_linrob_package::action::MoveFeedback_Result>()
{
  return "hardware_interface_linrob_package/action/MoveFeedback_Result";
}

template<>
struct has_fixed_size<hardware_interface_linrob_package::action::MoveFeedback_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hardware_interface_linrob_package::action::MoveFeedback_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hardware_interface_linrob_package::action::MoveFeedback_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hardware_interface_linrob_package
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveFeedback_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: axis_name
  {
    out << "axis_name: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_name, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: error_id_l1
  {
    out << "error_id_l1: ";
    rosidl_generator_traits::value_to_yaml(msg.error_id_l1, out);
    out << ", ";
  }

  // member: error_id_l2
  {
    out << "error_id_l2: ";
    rosidl_generator_traits::value_to_yaml(msg.error_id_l2, out);
    out << ", ";
  }

  // member: error_id_l3
  {
    out << "error_id_l3: ";
    rosidl_generator_traits::value_to_yaml(msg.error_id_l3, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: position_reached
  {
    out << "position_reached: ";
    rosidl_generator_traits::value_to_yaml(msg.position_reached, out);
    out << ", ";
  }

  // member: axis_referenced
  {
    out << "axis_referenced: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_referenced, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveFeedback_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: axis_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_name: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_name, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: error_id_l1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_id_l1: ";
    rosidl_generator_traits::value_to_yaml(msg.error_id_l1, out);
    out << "\n";
  }

  // member: error_id_l2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_id_l2: ";
    rosidl_generator_traits::value_to_yaml(msg.error_id_l2, out);
    out << "\n";
  }

  // member: error_id_l3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_id_l3: ";
    rosidl_generator_traits::value_to_yaml(msg.error_id_l3, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: position_reached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_reached: ";
    rosidl_generator_traits::value_to_yaml(msg.position_reached, out);
    out << "\n";
  }

  // member: axis_referenced
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_referenced: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_referenced, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveFeedback_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hardware_interface_linrob_package

namespace rosidl_generator_traits
{

[[deprecated("use hardware_interface_linrob_package::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_interface_linrob_package::action::MoveFeedback_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_interface_linrob_package::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_interface_linrob_package::action::to_yaml() instead")]]
inline std::string to_yaml(const hardware_interface_linrob_package::action::MoveFeedback_Feedback & msg)
{
  return hardware_interface_linrob_package::action::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_interface_linrob_package::action::MoveFeedback_Feedback>()
{
  return "hardware_interface_linrob_package::action::MoveFeedback_Feedback";
}

template<>
inline const char * name<hardware_interface_linrob_package::action::MoveFeedback_Feedback>()
{
  return "hardware_interface_linrob_package/action/MoveFeedback_Feedback";
}

template<>
struct has_fixed_size<hardware_interface_linrob_package::action::MoveFeedback_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hardware_interface_linrob_package::action::MoveFeedback_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hardware_interface_linrob_package::action::MoveFeedback_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "hardware_interface_linrob_package/action/detail/move_feedback__traits.hpp"

namespace hardware_interface_linrob_package
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveFeedback_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveFeedback_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveFeedback_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hardware_interface_linrob_package

namespace rosidl_generator_traits
{

[[deprecated("use hardware_interface_linrob_package::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_interface_linrob_package::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_interface_linrob_package::action::to_yaml() instead")]]
inline std::string to_yaml(const hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request & msg)
{
  return hardware_interface_linrob_package::action::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request>()
{
  return "hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request";
}

template<>
inline const char * name<hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request>()
{
  return "hardware_interface_linrob_package/action/MoveFeedback_SendGoal_Request";
}

template<>
struct has_fixed_size<hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<hardware_interface_linrob_package::action::MoveFeedback_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<hardware_interface_linrob_package::action::MoveFeedback_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace hardware_interface_linrob_package
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveFeedback_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveFeedback_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveFeedback_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hardware_interface_linrob_package

namespace rosidl_generator_traits
{

[[deprecated("use hardware_interface_linrob_package::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_interface_linrob_package::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_interface_linrob_package::action::to_yaml() instead")]]
inline std::string to_yaml(const hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response & msg)
{
  return hardware_interface_linrob_package::action::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response>()
{
  return "hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response";
}

template<>
inline const char * name<hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response>()
{
  return "hardware_interface_linrob_package/action/MoveFeedback_SendGoal_Response";
}

template<>
struct has_fixed_size<hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hardware_interface_linrob_package::action::MoveFeedback_SendGoal>()
{
  return "hardware_interface_linrob_package::action::MoveFeedback_SendGoal";
}

template<>
inline const char * name<hardware_interface_linrob_package::action::MoveFeedback_SendGoal>()
{
  return "hardware_interface_linrob_package/action/MoveFeedback_SendGoal";
}

template<>
struct has_fixed_size<hardware_interface_linrob_package::action::MoveFeedback_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request>::value &&
    has_fixed_size<hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<hardware_interface_linrob_package::action::MoveFeedback_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request>::value &&
    has_bounded_size<hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<hardware_interface_linrob_package::action::MoveFeedback_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hardware_interface_linrob_package::action::MoveFeedback_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace hardware_interface_linrob_package
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveFeedback_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveFeedback_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveFeedback_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hardware_interface_linrob_package

namespace rosidl_generator_traits
{

[[deprecated("use hardware_interface_linrob_package::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_interface_linrob_package::action::MoveFeedback_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_interface_linrob_package::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_interface_linrob_package::action::to_yaml() instead")]]
inline std::string to_yaml(const hardware_interface_linrob_package::action::MoveFeedback_GetResult_Request & msg)
{
  return hardware_interface_linrob_package::action::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_interface_linrob_package::action::MoveFeedback_GetResult_Request>()
{
  return "hardware_interface_linrob_package::action::MoveFeedback_GetResult_Request";
}

template<>
inline const char * name<hardware_interface_linrob_package::action::MoveFeedback_GetResult_Request>()
{
  return "hardware_interface_linrob_package/action/MoveFeedback_GetResult_Request";
}

template<>
struct has_fixed_size<hardware_interface_linrob_package::action::MoveFeedback_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hardware_interface_linrob_package::action::MoveFeedback_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hardware_interface_linrob_package::action::MoveFeedback_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__traits.hpp"

namespace hardware_interface_linrob_package
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveFeedback_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveFeedback_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveFeedback_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hardware_interface_linrob_package

namespace rosidl_generator_traits
{

[[deprecated("use hardware_interface_linrob_package::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_interface_linrob_package::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_interface_linrob_package::action::to_yaml() instead")]]
inline std::string to_yaml(const hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response & msg)
{
  return hardware_interface_linrob_package::action::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response>()
{
  return "hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response";
}

template<>
inline const char * name<hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response>()
{
  return "hardware_interface_linrob_package/action/MoveFeedback_GetResult_Response";
}

template<>
struct has_fixed_size<hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<hardware_interface_linrob_package::action::MoveFeedback_Result>::value> {};

template<>
struct has_bounded_size<hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<hardware_interface_linrob_package::action::MoveFeedback_Result>::value> {};

template<>
struct is_message<hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hardware_interface_linrob_package::action::MoveFeedback_GetResult>()
{
  return "hardware_interface_linrob_package::action::MoveFeedback_GetResult";
}

template<>
inline const char * name<hardware_interface_linrob_package::action::MoveFeedback_GetResult>()
{
  return "hardware_interface_linrob_package/action/MoveFeedback_GetResult";
}

template<>
struct has_fixed_size<hardware_interface_linrob_package::action::MoveFeedback_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<hardware_interface_linrob_package::action::MoveFeedback_GetResult_Request>::value &&
    has_fixed_size<hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<hardware_interface_linrob_package::action::MoveFeedback_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<hardware_interface_linrob_package::action::MoveFeedback_GetResult_Request>::value &&
    has_bounded_size<hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response>::value
  >
{
};

template<>
struct is_service<hardware_interface_linrob_package::action::MoveFeedback_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<hardware_interface_linrob_package::action::MoveFeedback_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hardware_interface_linrob_package::action::MoveFeedback_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_feedback__traits.hpp"

namespace hardware_interface_linrob_package
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveFeedback_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveFeedback_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveFeedback_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace hardware_interface_linrob_package

namespace rosidl_generator_traits
{

[[deprecated("use hardware_interface_linrob_package::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_interface_linrob_package::action::MoveFeedback_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_interface_linrob_package::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_interface_linrob_package::action::to_yaml() instead")]]
inline std::string to_yaml(const hardware_interface_linrob_package::action::MoveFeedback_FeedbackMessage & msg)
{
  return hardware_interface_linrob_package::action::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_interface_linrob_package::action::MoveFeedback_FeedbackMessage>()
{
  return "hardware_interface_linrob_package::action::MoveFeedback_FeedbackMessage";
}

template<>
inline const char * name<hardware_interface_linrob_package::action::MoveFeedback_FeedbackMessage>()
{
  return "hardware_interface_linrob_package/action/MoveFeedback_FeedbackMessage";
}

template<>
struct has_fixed_size<hardware_interface_linrob_package::action::MoveFeedback_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<hardware_interface_linrob_package::action::MoveFeedback_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<hardware_interface_linrob_package::action::MoveFeedback_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<hardware_interface_linrob_package::action::MoveFeedback_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<hardware_interface_linrob_package::action::MoveFeedback_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<hardware_interface_linrob_package::action::MoveFeedback>
  : std::true_type
{
};

template<>
struct is_action_goal<hardware_interface_linrob_package::action::MoveFeedback_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<hardware_interface_linrob_package::action::MoveFeedback_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<hardware_interface_linrob_package::action::MoveFeedback_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_FEEDBACK__TRAITS_HPP_
