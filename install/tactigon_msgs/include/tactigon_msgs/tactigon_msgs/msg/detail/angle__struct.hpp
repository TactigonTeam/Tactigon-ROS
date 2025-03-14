// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tactigon_msgs:msg/Angle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tactigon_msgs/msg/angle.hpp"


#ifndef TACTIGON_MSGS__MSG__DETAIL__ANGLE__STRUCT_HPP_
#define TACTIGON_MSGS__MSG__DETAIL__ANGLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tactigon_msgs__msg__Angle __attribute__((deprecated))
#else
# define DEPRECATED__tactigon_msgs__msg__Angle __declspec(deprecated)
#endif

namespace tactigon_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Angle_
{
  using Type = Angle_<ContainerAllocator>;

  explicit Angle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
    }
  }

  explicit Angle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
    }
  }

  // field types and members
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tactigon_msgs::msg::Angle_<ContainerAllocator> *;
  using ConstRawPtr =
    const tactigon_msgs::msg::Angle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tactigon_msgs::msg::Angle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tactigon_msgs::msg::Angle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tactigon_msgs::msg::Angle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tactigon_msgs::msg::Angle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tactigon_msgs::msg::Angle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tactigon_msgs::msg::Angle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tactigon_msgs::msg::Angle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tactigon_msgs::msg::Angle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tactigon_msgs__msg__Angle
    std::shared_ptr<tactigon_msgs::msg::Angle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tactigon_msgs__msg__Angle
    std::shared_ptr<tactigon_msgs::msg::Angle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Angle_ & other) const
  {
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const Angle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Angle_

// alias to use template instance with default allocator
using Angle =
  tactigon_msgs::msg::Angle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tactigon_msgs

#endif  // TACTIGON_MSGS__MSG__DETAIL__ANGLE__STRUCT_HPP_
