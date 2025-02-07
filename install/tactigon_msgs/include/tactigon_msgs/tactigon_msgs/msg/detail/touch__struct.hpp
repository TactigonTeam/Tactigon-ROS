// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tactigon_msgs:msg/Touch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tactigon_msgs/msg/touch.hpp"


#ifndef TACTIGON_MSGS__MSG__DETAIL__TOUCH__STRUCT_HPP_
#define TACTIGON_MSGS__MSG__DETAIL__TOUCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tactigon_msgs__msg__Touch __attribute__((deprecated))
#else
# define DEPRECATED__tactigon_msgs__msg__Touch __declspec(deprecated)
#endif

namespace tactigon_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Touch_
{
  using Type = Touch_<ContainerAllocator>;

  explicit Touch_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->one_finger = 0;
      this->two_finger = 0;
      this->x_pos = 0.0f;
      this->y_pos = 0.0f;
    }
  }

  explicit Touch_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->one_finger = 0;
      this->two_finger = 0;
      this->x_pos = 0.0f;
      this->y_pos = 0.0f;
    }
  }

  // field types and members
  using _one_finger_type =
    uint8_t;
  _one_finger_type one_finger;
  using _two_finger_type =
    uint8_t;
  _two_finger_type two_finger;
  using _x_pos_type =
    float;
  _x_pos_type x_pos;
  using _y_pos_type =
    float;
  _y_pos_type y_pos;

  // setters for named parameter idiom
  Type & set__one_finger(
    const uint8_t & _arg)
  {
    this->one_finger = _arg;
    return *this;
  }
  Type & set__two_finger(
    const uint8_t & _arg)
  {
    this->two_finger = _arg;
    return *this;
  }
  Type & set__x_pos(
    const float & _arg)
  {
    this->x_pos = _arg;
    return *this;
  }
  Type & set__y_pos(
    const float & _arg)
  {
    this->y_pos = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ONE_FINGER_NONE =
    0u;
  static constexpr uint8_t ONE_FINGER_SINGLE_TAP =
    1u;
  static constexpr uint8_t ONE_FINGER_TAP_AND_HOLD =
    2u;
  static constexpr uint8_t ONE_FINGER_SWIPE_X_NEG =
    4u;
  static constexpr uint8_t ONE_FINGER_SWIPE_X_POS =
    8u;
  static constexpr uint8_t ONE_FINGER_SWIPE_Y_POS =
    16u;
  static constexpr uint8_t ONE_FINGER_SWIPE_Y_NEG =
    32u;
  static constexpr uint8_t TWO_FINGER_NONE =
    0u;
  static constexpr uint8_t TWO_FINGER_TAP =
    1u;
  static constexpr uint8_t TWO_FINGER_SCROLL =
    2u;
  static constexpr uint8_t TWO_FINGER_ZOOM =
    4u;

  // pointer types
  using RawPtr =
    tactigon_msgs::msg::Touch_<ContainerAllocator> *;
  using ConstRawPtr =
    const tactigon_msgs::msg::Touch_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tactigon_msgs::msg::Touch_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tactigon_msgs::msg::Touch_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tactigon_msgs::msg::Touch_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tactigon_msgs::msg::Touch_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tactigon_msgs::msg::Touch_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tactigon_msgs::msg::Touch_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tactigon_msgs::msg::Touch_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tactigon_msgs::msg::Touch_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tactigon_msgs__msg__Touch
    std::shared_ptr<tactigon_msgs::msg::Touch_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tactigon_msgs__msg__Touch
    std::shared_ptr<tactigon_msgs::msg::Touch_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Touch_ & other) const
  {
    if (this->one_finger != other.one_finger) {
      return false;
    }
    if (this->two_finger != other.two_finger) {
      return false;
    }
    if (this->x_pos != other.x_pos) {
      return false;
    }
    if (this->y_pos != other.y_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const Touch_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Touch_

// alias to use template instance with default allocator
using Touch =
  tactigon_msgs::msg::Touch_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Touch_<ContainerAllocator>::ONE_FINGER_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Touch_<ContainerAllocator>::ONE_FINGER_SINGLE_TAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Touch_<ContainerAllocator>::ONE_FINGER_TAP_AND_HOLD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Touch_<ContainerAllocator>::ONE_FINGER_SWIPE_X_NEG;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Touch_<ContainerAllocator>::ONE_FINGER_SWIPE_X_POS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Touch_<ContainerAllocator>::ONE_FINGER_SWIPE_Y_POS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Touch_<ContainerAllocator>::ONE_FINGER_SWIPE_Y_NEG;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Touch_<ContainerAllocator>::TWO_FINGER_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Touch_<ContainerAllocator>::TWO_FINGER_TAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Touch_<ContainerAllocator>::TWO_FINGER_SCROLL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Touch_<ContainerAllocator>::TWO_FINGER_ZOOM;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace tactigon_msgs

#endif  // TACTIGON_MSGS__MSG__DETAIL__TOUCH__STRUCT_HPP_
