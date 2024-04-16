// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hardware_interface_linrob_package:srv/Home.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__HOME__STRUCT_HPP_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__HOME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hardware_interface_linrob_package__srv__Home_Request __attribute__((deprecated))
#else
# define DEPRECATED__hardware_interface_linrob_package__srv__Home_Request __declspec(deprecated)
#endif

namespace hardware_interface_linrob_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Home_Request_
{
  using Type = Home_Request_<ContainerAllocator>;

  explicit Home_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Home_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    hardware_interface_linrob_package::srv::Home_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hardware_interface_linrob_package::srv::Home_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::srv::Home_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::srv::Home_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::srv::Home_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::srv::Home_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::srv::Home_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::srv::Home_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::srv::Home_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::srv::Home_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hardware_interface_linrob_package__srv__Home_Request
    std::shared_ptr<hardware_interface_linrob_package::srv::Home_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hardware_interface_linrob_package__srv__Home_Request
    std::shared_ptr<hardware_interface_linrob_package::srv::Home_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Home_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Home_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Home_Request_

// alias to use template instance with default allocator
using Home_Request =
  hardware_interface_linrob_package::srv::Home_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hardware_interface_linrob_package


#ifndef _WIN32
# define DEPRECATED__hardware_interface_linrob_package__srv__Home_Response __attribute__((deprecated))
#else
# define DEPRECATED__hardware_interface_linrob_package__srv__Home_Response __declspec(deprecated)
#endif

namespace hardware_interface_linrob_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Home_Response_
{
  using Type = Home_Response_<ContainerAllocator>;

  explicit Home_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit Home_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hardware_interface_linrob_package::srv::Home_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hardware_interface_linrob_package::srv::Home_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::srv::Home_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::srv::Home_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::srv::Home_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::srv::Home_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::srv::Home_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::srv::Home_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::srv::Home_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::srv::Home_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hardware_interface_linrob_package__srv__Home_Response
    std::shared_ptr<hardware_interface_linrob_package::srv::Home_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hardware_interface_linrob_package__srv__Home_Response
    std::shared_ptr<hardware_interface_linrob_package::srv::Home_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Home_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Home_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Home_Response_

// alias to use template instance with default allocator
using Home_Response =
  hardware_interface_linrob_package::srv::Home_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hardware_interface_linrob_package

namespace hardware_interface_linrob_package
{

namespace srv
{

struct Home
{
  using Request = hardware_interface_linrob_package::srv::Home_Request;
  using Response = hardware_interface_linrob_package::srv::Home_Response;
};

}  // namespace srv

}  // namespace hardware_interface_linrob_package

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__SRV__DETAIL__HOME__STRUCT_HPP_
