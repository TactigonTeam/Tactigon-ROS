// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tactigon_msgs:msg/TSkinState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tactigon_msgs/msg/t_skin_state.hpp"


#ifndef TACTIGON_MSGS__MSG__DETAIL__T_SKIN_STATE__STRUCT_HPP_
#define TACTIGON_MSGS__MSG__DETAIL__T_SKIN_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'touchpad'
#include "tactigon_msgs/msg/detail/touch__struct.hpp"
// Member 'angle'
#include "tactigon_msgs/msg/detail/angle__struct.hpp"
// Member 'gesture'
#include "tactigon_msgs/msg/detail/gesture__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tactigon_msgs__msg__TSkinState __attribute__((deprecated))
#else
# define DEPRECATED__tactigon_msgs__msg__TSkinState __declspec(deprecated)
#endif

namespace tactigon_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TSkinState_
{
  using Type = TSkinState_<ContainerAllocator>;

  explicit TSkinState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : touchpad(_init),
    angle(_init),
    gesture(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connected = false;
      this->battery = 0.0f;
      this->selector = 0;
      this->selector_valid = false;
      this->touchpad_valid = false;
      this->angle_valid = false;
      this->gesture_valid = false;
    }
  }

  explicit TSkinState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : touchpad(_alloc, _init),
    angle(_alloc, _init),
    gesture(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connected = false;
      this->battery = 0.0f;
      this->selector = 0;
      this->selector_valid = false;
      this->touchpad_valid = false;
      this->angle_valid = false;
      this->gesture_valid = false;
    }
  }

  // field types and members
  using _connected_type =
    bool;
  _connected_type connected;
  using _battery_type =
    float;
  _battery_type battery;
  using _selector_type =
    uint8_t;
  _selector_type selector;
  using _selector_valid_type =
    bool;
  _selector_valid_type selector_valid;
  using _touchpad_type =
    tactigon_msgs::msg::Touch_<ContainerAllocator>;
  _touchpad_type touchpad;
  using _touchpad_valid_type =
    bool;
  _touchpad_valid_type touchpad_valid;
  using _angle_type =
    tactigon_msgs::msg::Angle_<ContainerAllocator>;
  _angle_type angle;
  using _angle_valid_type =
    bool;
  _angle_valid_type angle_valid;
  using _gesture_type =
    tactigon_msgs::msg::Gesture_<ContainerAllocator>;
  _gesture_type gesture;
  using _gesture_valid_type =
    bool;
  _gesture_valid_type gesture_valid;

  // setters for named parameter idiom
  Type & set__connected(
    const bool & _arg)
  {
    this->connected = _arg;
    return *this;
  }
  Type & set__battery(
    const float & _arg)
  {
    this->battery = _arg;
    return *this;
  }
  Type & set__selector(
    const uint8_t & _arg)
  {
    this->selector = _arg;
    return *this;
  }
  Type & set__selector_valid(
    const bool & _arg)
  {
    this->selector_valid = _arg;
    return *this;
  }
  Type & set__touchpad(
    const tactigon_msgs::msg::Touch_<ContainerAllocator> & _arg)
  {
    this->touchpad = _arg;
    return *this;
  }
  Type & set__touchpad_valid(
    const bool & _arg)
  {
    this->touchpad_valid = _arg;
    return *this;
  }
  Type & set__angle(
    const tactigon_msgs::msg::Angle_<ContainerAllocator> & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__angle_valid(
    const bool & _arg)
  {
    this->angle_valid = _arg;
    return *this;
  }
  Type & set__gesture(
    const tactigon_msgs::msg::Gesture_<ContainerAllocator> & _arg)
  {
    this->gesture = _arg;
    return *this;
  }
  Type & set__gesture_valid(
    const bool & _arg)
  {
    this->gesture_valid = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BLE_SELECTOR_NONE =
    0u;
  static constexpr uint8_t BLE_SELECTOR_SENSORS =
    1u;
  static constexpr uint8_t BLE_SELECTOR_AUDIO =
    2u;

  // pointer types
  using RawPtr =
    tactigon_msgs::msg::TSkinState_<ContainerAllocator> *;
  using ConstRawPtr =
    const tactigon_msgs::msg::TSkinState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tactigon_msgs::msg::TSkinState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tactigon_msgs::msg::TSkinState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tactigon_msgs::msg::TSkinState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tactigon_msgs::msg::TSkinState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tactigon_msgs::msg::TSkinState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tactigon_msgs::msg::TSkinState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tactigon_msgs::msg::TSkinState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tactigon_msgs::msg::TSkinState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tactigon_msgs__msg__TSkinState
    std::shared_ptr<tactigon_msgs::msg::TSkinState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tactigon_msgs__msg__TSkinState
    std::shared_ptr<tactigon_msgs::msg::TSkinState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TSkinState_ & other) const
  {
    if (this->connected != other.connected) {
      return false;
    }
    if (this->battery != other.battery) {
      return false;
    }
    if (this->selector != other.selector) {
      return false;
    }
    if (this->selector_valid != other.selector_valid) {
      return false;
    }
    if (this->touchpad != other.touchpad) {
      return false;
    }
    if (this->touchpad_valid != other.touchpad_valid) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->angle_valid != other.angle_valid) {
      return false;
    }
    if (this->gesture != other.gesture) {
      return false;
    }
    if (this->gesture_valid != other.gesture_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const TSkinState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TSkinState_

// alias to use template instance with default allocator
using TSkinState =
  tactigon_msgs::msg::TSkinState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TSkinState_<ContainerAllocator>::BLE_SELECTOR_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TSkinState_<ContainerAllocator>::BLE_SELECTOR_SENSORS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TSkinState_<ContainerAllocator>::BLE_SELECTOR_AUDIO;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace tactigon_msgs

#endif  // TACTIGON_MSGS__MSG__DETAIL__T_SKIN_STATE__STRUCT_HPP_
