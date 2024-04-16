// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hardware_interface_linrob_package:action/MoveCommand.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_COMMAND__STRUCT_HPP_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_Goal __attribute__((deprecated))
#else
# define DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_Goal __declspec(deprecated)
#endif

namespace hardware_interface_linrob_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveCommand_Goal_
{
  using Type = MoveCommand_Goal_<ContainerAllocator>;

  explicit MoveCommand_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0;
      this->velocity = 0.0;
      this->acceleration = 0.0;
      this->deceleration = 0.0;
    }
  }

  explicit MoveCommand_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0;
      this->velocity = 0.0;
      this->acceleration = 0.0;
      this->deceleration = 0.0;
    }
  }

  // field types and members
  using _position_type =
    double;
  _position_type position;
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _acceleration_type =
    double;
  _acceleration_type acceleration;
  using _deceleration_type =
    double;
  _deceleration_type deceleration;

  // setters for named parameter idiom
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const double & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__deceleration(
    const double & _arg)
  {
    this->deceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hardware_interface_linrob_package::action::MoveCommand_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const hardware_interface_linrob_package::action::MoveCommand_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::action::MoveCommand_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::action::MoveCommand_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::action::MoveCommand_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::action::MoveCommand_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::action::MoveCommand_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::action::MoveCommand_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_Goal
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_Goal
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCommand_Goal_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->deceleration != other.deceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCommand_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCommand_Goal_

// alias to use template instance with default allocator
using MoveCommand_Goal =
  hardware_interface_linrob_package::action::MoveCommand_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hardware_interface_linrob_package


#ifndef _WIN32
# define DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_Result __attribute__((deprecated))
#else
# define DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_Result __declspec(deprecated)
#endif

namespace hardware_interface_linrob_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveCommand_Result_
{
  using Type = MoveCommand_Result_<ContainerAllocator>;

  explicit MoveCommand_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit MoveCommand_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    hardware_interface_linrob_package::action::MoveCommand_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const hardware_interface_linrob_package::action::MoveCommand_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::action::MoveCommand_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::action::MoveCommand_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::action::MoveCommand_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::action::MoveCommand_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::action::MoveCommand_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::action::MoveCommand_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_Result
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_Result
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCommand_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCommand_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCommand_Result_

// alias to use template instance with default allocator
using MoveCommand_Result =
  hardware_interface_linrob_package::action::MoveCommand_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hardware_interface_linrob_package


#ifndef _WIN32
# define DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_Feedback __declspec(deprecated)
#endif

namespace hardware_interface_linrob_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveCommand_Feedback_
{
  using Type = MoveCommand_Feedback_<ContainerAllocator>;

  explicit MoveCommand_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_position = 0.0;
    }
  }

  explicit MoveCommand_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_position = 0.0;
    }
  }

  // field types and members
  using _current_position_type =
    double;
  _current_position_type current_position;

  // setters for named parameter idiom
  Type & set__current_position(
    const double & _arg)
  {
    this->current_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hardware_interface_linrob_package::action::MoveCommand_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const hardware_interface_linrob_package::action::MoveCommand_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::action::MoveCommand_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::action::MoveCommand_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::action::MoveCommand_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::action::MoveCommand_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::action::MoveCommand_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::action::MoveCommand_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_Feedback
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_Feedback
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCommand_Feedback_ & other) const
  {
    if (this->current_position != other.current_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCommand_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCommand_Feedback_

// alias to use template instance with default allocator
using MoveCommand_Feedback =
  hardware_interface_linrob_package::action::MoveCommand_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hardware_interface_linrob_package


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "hardware_interface_linrob_package/action/detail/move_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request __declspec(deprecated)
#endif

namespace hardware_interface_linrob_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveCommand_SendGoal_Request_
{
  using Type = MoveCommand_SendGoal_Request_<ContainerAllocator>;

  explicit MoveCommand_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MoveCommand_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    hardware_interface_linrob_package::action::MoveCommand_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const hardware_interface_linrob_package::action::MoveCommand_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCommand_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCommand_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCommand_SendGoal_Request_

// alias to use template instance with default allocator
using MoveCommand_SendGoal_Request =
  hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hardware_interface_linrob_package


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response __declspec(deprecated)
#endif

namespace hardware_interface_linrob_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveCommand_SendGoal_Response_
{
  using Type = MoveCommand_SendGoal_Response_<ContainerAllocator>;

  explicit MoveCommand_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MoveCommand_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCommand_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCommand_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCommand_SendGoal_Response_

// alias to use template instance with default allocator
using MoveCommand_SendGoal_Response =
  hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hardware_interface_linrob_package

namespace hardware_interface_linrob_package
{

namespace action
{

struct MoveCommand_SendGoal
{
  using Request = hardware_interface_linrob_package::action::MoveCommand_SendGoal_Request;
  using Response = hardware_interface_linrob_package::action::MoveCommand_SendGoal_Response;
};

}  // namespace action

}  // namespace hardware_interface_linrob_package


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_GetResult_Request __declspec(deprecated)
#endif

namespace hardware_interface_linrob_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveCommand_GetResult_Request_
{
  using Type = MoveCommand_GetResult_Request_<ContainerAllocator>;

  explicit MoveCommand_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MoveCommand_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hardware_interface_linrob_package::action::MoveCommand_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hardware_interface_linrob_package::action::MoveCommand_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::action::MoveCommand_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::action::MoveCommand_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::action::MoveCommand_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::action::MoveCommand_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::action::MoveCommand_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::action::MoveCommand_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_GetResult_Request
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_GetResult_Request
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCommand_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCommand_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCommand_GetResult_Request_

// alias to use template instance with default allocator
using MoveCommand_GetResult_Request =
  hardware_interface_linrob_package::action::MoveCommand_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hardware_interface_linrob_package


// Include directives for member types
// Member 'result'
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_GetResult_Response __declspec(deprecated)
#endif

namespace hardware_interface_linrob_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveCommand_GetResult_Response_
{
  using Type = MoveCommand_GetResult_Response_<ContainerAllocator>;

  explicit MoveCommand_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MoveCommand_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    hardware_interface_linrob_package::action::MoveCommand_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const hardware_interface_linrob_package::action::MoveCommand_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hardware_interface_linrob_package::action::MoveCommand_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hardware_interface_linrob_package::action::MoveCommand_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::action::MoveCommand_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::action::MoveCommand_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::action::MoveCommand_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::action::MoveCommand_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::action::MoveCommand_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::action::MoveCommand_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_GetResult_Response
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_GetResult_Response
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCommand_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCommand_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCommand_GetResult_Response_

// alias to use template instance with default allocator
using MoveCommand_GetResult_Response =
  hardware_interface_linrob_package::action::MoveCommand_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hardware_interface_linrob_package

namespace hardware_interface_linrob_package
{

namespace action
{

struct MoveCommand_GetResult
{
  using Request = hardware_interface_linrob_package::action::MoveCommand_GetResult_Request;
  using Response = hardware_interface_linrob_package::action::MoveCommand_GetResult_Response;
};

}  // namespace action

}  // namespace hardware_interface_linrob_package


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "hardware_interface_linrob_package/action/detail/move_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage __declspec(deprecated)
#endif

namespace hardware_interface_linrob_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveCommand_FeedbackMessage_
{
  using Type = MoveCommand_FeedbackMessage_<ContainerAllocator>;

  explicit MoveCommand_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MoveCommand_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    hardware_interface_linrob_package::action::MoveCommand_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const hardware_interface_linrob_package::action::MoveCommand_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage
    std::shared_ptr<hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveCommand_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveCommand_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveCommand_FeedbackMessage_

// alias to use template instance with default allocator
using MoveCommand_FeedbackMessage =
  hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hardware_interface_linrob_package

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace hardware_interface_linrob_package
{

namespace action
{

struct MoveCommand
{
  /// The goal message defined in the action definition.
  using Goal = hardware_interface_linrob_package::action::MoveCommand_Goal;
  /// The result message defined in the action definition.
  using Result = hardware_interface_linrob_package::action::MoveCommand_Result;
  /// The feedback message defined in the action definition.
  using Feedback = hardware_interface_linrob_package::action::MoveCommand_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = hardware_interface_linrob_package::action::MoveCommand_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = hardware_interface_linrob_package::action::MoveCommand_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = hardware_interface_linrob_package::action::MoveCommand_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MoveCommand MoveCommand;

}  // namespace action

}  // namespace hardware_interface_linrob_package

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_COMMAND__STRUCT_HPP_
