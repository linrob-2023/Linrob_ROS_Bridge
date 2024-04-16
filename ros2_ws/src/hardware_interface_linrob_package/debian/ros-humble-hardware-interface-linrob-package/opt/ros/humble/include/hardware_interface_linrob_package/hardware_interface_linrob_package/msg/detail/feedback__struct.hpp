// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hardware_interface_linrob_package:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__MSG__DETAIL__FEEDBACK__STRUCT_HPP_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__MSG__DETAIL__FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hardware_interface_linrob_package__msg__Feedback __attribute__((deprecated))
#else
# define DEPRECATED__hardware_interface_linrob_package__msg__Feedback __declspec(deprecated)
#endif

namespace hardware_interface_linrob_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Feedback_
{
  using Type = Feedback_<ContainerAllocator>;

  explicit Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->axis_name = "";
      this->status = "";
      this->state = "";
      this->error_id_l1 = "";
      this->error_id_l2 = "";
      this->error_id_l3 = "";
      this->timestamp = "";
      this->position_reached = false;
      this->axis_referenced = false;
    }
  }

  explicit Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : axis_name(_alloc),
    status(_alloc),
    state(_alloc),
    error_id_l1(_alloc),
    error_id_l2(_alloc),
    error_id_l3(_alloc),
    timestamp(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->axis_name = "";
      this->status = "";
      this->state = "";
      this->error_id_l1 = "";
      this->error_id_l2 = "";
      this->error_id_l3 = "";
      this->timestamp = "";
      this->position_reached = false;
      this->axis_referenced = false;
    }
  }

  // field types and members
  using _axis_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _axis_name_type axis_name;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _error_id_l1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_id_l1_type error_id_l1;
  using _error_id_l2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_id_l2_type error_id_l2;
  using _error_id_l3_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_id_l3_type error_id_l3;
  using _timestamp_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _timestamp_type timestamp;
  using _position_reached_type =
    bool;
  _position_reached_type position_reached;
  using _axis_referenced_type =
    bool;
  _axis_referenced_type axis_referenced;

  // setters for named parameter idiom
  Type & set__axis_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->axis_name = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__error_id_l1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_id_l1 = _arg;
    return *this;
  }
  Type & set__error_id_l2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_id_l2 = _arg;
    return *this;
  }
  Type & set__error_id_l3(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_id_l3 = _arg;
    return *this;
  }
  Type & set__timestamp(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__position_reached(
    const bool & _arg)
  {
    this->position_reached = _arg;
    return *this;
  }
  Type & set__axis_referenced(
    const bool & _arg)
  {
    this->axis_referenced = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hardware_interface_linrob_package::msg::Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const hardware_interface_linrob_package::msg::Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::msg::Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::msg::Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::msg::Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::msg::Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::msg::Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::msg::Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::msg::Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::msg::Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hardware_interface_linrob_package__msg__Feedback
    std::shared_ptr<hardware_interface_linrob_package::msg::Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hardware_interface_linrob_package__msg__Feedback
    std::shared_ptr<hardware_interface_linrob_package::msg::Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Feedback_ & other) const
  {
    if (this->axis_name != other.axis_name) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->error_id_l1 != other.error_id_l1) {
      return false;
    }
    if (this->error_id_l2 != other.error_id_l2) {
      return false;
    }
    if (this->error_id_l3 != other.error_id_l3) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->position_reached != other.position_reached) {
      return false;
    }
    if (this->axis_referenced != other.axis_referenced) {
      return false;
    }
    return true;
  }
  bool operator!=(const Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Feedback_

// alias to use template instance with default allocator
using Feedback =
  hardware_interface_linrob_package::msg::Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hardware_interface_linrob_package

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__MSG__DETAIL__FEEDBACK__STRUCT_HPP_
