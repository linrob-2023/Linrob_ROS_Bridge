// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hardware_interface_linrob_package:srv/Stop.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__STOP__TRAITS_HPP_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__STOP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hardware_interface_linrob_package/srv/detail/stop__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hardware_interface_linrob_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const Stop_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: deceleration
  {
    out << "deceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.deceleration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Stop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const Stop_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hardware_interface_linrob_package

namespace rosidl_generator_traits
{

[[deprecated("use hardware_interface_linrob_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_interface_linrob_package::srv::Stop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_interface_linrob_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_interface_linrob_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const hardware_interface_linrob_package::srv::Stop_Request & msg)
{
  return hardware_interface_linrob_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_interface_linrob_package::srv::Stop_Request>()
{
  return "hardware_interface_linrob_package::srv::Stop_Request";
}

template<>
inline const char * name<hardware_interface_linrob_package::srv::Stop_Request>()
{
  return "hardware_interface_linrob_package/srv/Stop_Request";
}

template<>
struct has_fixed_size<hardware_interface_linrob_package::srv::Stop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hardware_interface_linrob_package::srv::Stop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hardware_interface_linrob_package::srv::Stop_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hardware_interface_linrob_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const Stop_Response & msg,
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
  const Stop_Response & msg,
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

inline std::string to_yaml(const Stop_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hardware_interface_linrob_package

namespace rosidl_generator_traits
{

[[deprecated("use hardware_interface_linrob_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hardware_interface_linrob_package::srv::Stop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hardware_interface_linrob_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hardware_interface_linrob_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const hardware_interface_linrob_package::srv::Stop_Response & msg)
{
  return hardware_interface_linrob_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hardware_interface_linrob_package::srv::Stop_Response>()
{
  return "hardware_interface_linrob_package::srv::Stop_Response";
}

template<>
inline const char * name<hardware_interface_linrob_package::srv::Stop_Response>()
{
  return "hardware_interface_linrob_package/srv/Stop_Response";
}

template<>
struct has_fixed_size<hardware_interface_linrob_package::srv::Stop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hardware_interface_linrob_package::srv::Stop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hardware_interface_linrob_package::srv::Stop_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hardware_interface_linrob_package::srv::Stop>()
{
  return "hardware_interface_linrob_package::srv::Stop";
}

template<>
inline const char * name<hardware_interface_linrob_package::srv::Stop>()
{
  return "hardware_interface_linrob_package/srv/Stop";
}

template<>
struct has_fixed_size<hardware_interface_linrob_package::srv::Stop>
  : std::integral_constant<
    bool,
    has_fixed_size<hardware_interface_linrob_package::srv::Stop_Request>::value &&
    has_fixed_size<hardware_interface_linrob_package::srv::Stop_Response>::value
  >
{
};

template<>
struct has_bounded_size<hardware_interface_linrob_package::srv::Stop>
  : std::integral_constant<
    bool,
    has_bounded_size<hardware_interface_linrob_package::srv::Stop_Request>::value &&
    has_bounded_size<hardware_interface_linrob_package::srv::Stop_Response>::value
  >
{
};

template<>
struct is_service<hardware_interface_linrob_package::srv::Stop>
  : std::true_type
{
};

template<>
struct is_service_request<hardware_interface_linrob_package::srv::Stop_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hardware_interface_linrob_package::srv::Stop_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__STOP__TRAITS_HPP_