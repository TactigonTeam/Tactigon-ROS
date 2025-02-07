// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tactigon_msgs:msg/Gesture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tactigon_msgs/msg/gesture.hpp"


#ifndef TACTIGON_MSGS__MSG__DETAIL__GESTURE__STRUCT_HPP_
#define TACTIGON_MSGS__MSG__DETAIL__GESTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tactigon_msgs__msg__Gesture __attribute__((deprecated))
#else
# define DEPRECATED__tactigon_msgs__msg__Gesture __declspec(deprecated)
#endif

namespace tactigon_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gesture_
{
  using Type = Gesture_<ContainerAllocator>;

  explicit Gesture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gesture = "";
      this->probability = 0.0f;
      this->confidence = 0.0f;
      this->displacement = 0.0f;
    }
  }

  explicit Gesture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gesture(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gesture = "";
      this->probability = 0.0f;
      this->confidence = 0.0f;
      this->displacement = 0.0f;
    }
  }

  // field types and members
  using _gesture_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gesture_type gesture;
  using _probability_type =
    float;
  _probability_type probability;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _displacement_type =
    float;
  _displacement_type displacement;

  // setters for named parameter idiom
  Type & set__gesture(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gesture = _arg;
    return *this;
  }
  Type & set__probability(
    const float & _arg)
  {
    this->probability = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__displacement(
    const float & _arg)
  {
    this->displacement = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tactigon_msgs::msg::Gesture_<ContainerAllocator> *;
  using ConstRawPtr =
    const tactigon_msgs::msg::Gesture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tactigon_msgs::msg::Gesture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tactigon_msgs::msg::Gesture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tactigon_msgs::msg::Gesture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tactigon_msgs::msg::Gesture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tactigon_msgs::msg::Gesture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tactigon_msgs::msg::Gesture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tactigon_msgs::msg::Gesture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tactigon_msgs::msg::Gesture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tactigon_msgs__msg__Gesture
    std::shared_ptr<tactigon_msgs::msg::Gesture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tactigon_msgs__msg__Gesture
    std::shared_ptr<tactigon_msgs::msg::Gesture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gesture_ & other) const
  {
    if (this->gesture != other.gesture) {
      return false;
    }
    if (this->probability != other.probability) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->displacement != other.displacement) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gesture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gesture_

// alias to use template instance with default allocator
using Gesture =
  tactigon_msgs::msg::Gesture_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tactigon_msgs

#endif  // TACTIGON_MSGS__MSG__DETAIL__GESTURE__STRUCT_HPP_
