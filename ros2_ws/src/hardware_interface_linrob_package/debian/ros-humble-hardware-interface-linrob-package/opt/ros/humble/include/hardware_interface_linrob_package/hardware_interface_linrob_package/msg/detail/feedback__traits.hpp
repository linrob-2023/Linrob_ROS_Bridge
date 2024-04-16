// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hardware_interface_linrob_package:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__MSG__DETAIL__FEEDBACK__TRAITS_HPP_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__MSG__DETAIL__FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hardware_interface_linrob_package/msg/detail/feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hardware_interface_linrob_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const Feedback & msg,
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
  const Feedback & msg,
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

inline std::string to_yaml(const Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hardware_interface_linrob_package

namespace rosidl_generator_traits
{

[[deprecated("use hardware_interface_linrob_package::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_interface_linrob_package::msg::Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_interface_linrob_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_interface_linrob_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const hardware_interface_linrob_package::msg::Feedback & msg)
{
  return hardware_interface_linrob_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_interface_linrob_package::msg::Feedback>()
{
  return "hardware_interface_linrob_package::msg::Feedback";
}

template<>
inline const char * name<hardware_interface_linrob_package::msg::Feedback>()
{
  return "hardware_interface_linrob_package/msg/Feedback";
}

template<>
struct has_fixed_size<hardware_interface_linrob_package::msg::Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hardware_interface_linrob_package::msg::Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hardware_interface_linrob_package::msg::Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__MSG__DETAIL__FEEDBACK__TRAITS_HPP_
