// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tactigon_msgs:msg/TSkinState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tactigon_msgs/msg/t_skin_state.hpp"


#ifndef TACTIGON_MSGS__MSG__DETAIL__T_SKIN_STATE__BUILDER_HPP_
#define TACTIGON_MSGS__MSG__DETAIL__T_SKIN_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tactigon_msgs/msg/detail/t_skin_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tactigon_msgs
{

namespace msg
{

namespace builder
{

class Init_TSkinState_gesture_valid
{
public:
  explicit Init_TSkinState_gesture_valid(::tactigon_msgs::msg::TSkinState & msg)
  : msg_(msg)
  {}
  ::tactigon_msgs::msg::TSkinState gesture_valid(::tactigon_msgs::msg::TSkinState::_gesture_valid_type arg)
  {
    msg_.gesture_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tactigon_msgs::msg::TSkinState msg_;
};

class Init_TSkinState_gesture
{
public:
  explicit Init_TSkinState_gesture(::tactigon_msgs::msg::TSkinState & msg)
  : msg_(msg)
  {}
  Init_TSkinState_gesture_valid gesture(::tactigon_msgs::msg::TSkinState::_gesture_type arg)
  {
    msg_.gesture = std::move(arg);
    return Init_TSkinState_gesture_valid(msg_);
  }

private:
  ::tactigon_msgs::msg::TSkinState msg_;
};

class Init_TSkinState_angle_valid
{
public:
  explicit Init_TSkinState_angle_valid(::tactigon_msgs::msg::TSkinState & msg)
  : msg_(msg)
  {}
  Init_TSkinState_gesture angle_valid(::tactigon_msgs::msg::TSkinState::_angle_valid_type arg)
  {
    msg_.angle_valid = std::move(arg);
    return Init_TSkinState_gesture(msg_);
  }

private:
  ::tactigon_msgs::msg::TSkinState msg_;
};

class Init_TSkinState_angle
{
public:
  explicit Init_TSkinState_angle(::tactigon_msgs::msg::TSkinState & msg)
  : msg_(msg)
  {}
  Init_TSkinState_angle_valid angle(::tactigon_msgs::msg::TSkinState::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_TSkinState_angle_valid(msg_);
  }

private:
  ::tactigon_msgs::msg::TSkinState msg_;
};

class Init_TSkinState_touchpad_valid
{
public:
  explicit Init_TSkinState_touchpad_valid(::tactigon_msgs::msg::TSkinState & msg)
  : msg_(msg)
  {}
  Init_TSkinState_angle touchpad_valid(::tactigon_msgs::msg::TSkinState::_touchpad_valid_type arg)
  {
    msg_.touchpad_valid = std::move(arg);
    return Init_TSkinState_angle(msg_);
  }

private:
  ::tactigon_msgs::msg::TSkinState msg_;
};

class Init_TSkinState_touchpad
{
public:
  explicit Init_TSkinState_touchpad(::tactigon_msgs::msg::TSkinState & msg)
  : msg_(msg)
  {}
  Init_TSkinState_touchpad_valid touchpad(::tactigon_msgs::msg::TSkinState::_touchpad_type arg)
  {
    msg_.touchpad = std::move(arg);
    return Init_TSkinState_touchpad_valid(msg_);
  }

private:
  ::tactigon_msgs::msg::TSkinState msg_;
};

class Init_TSkinState_selector_valid
{
public:
  explicit Init_TSkinState_selector_valid(::tactigon_msgs::msg::TSkinState & msg)
  : msg_(msg)
  {}
  Init_TSkinState_touchpad selector_valid(::tactigon_msgs::msg::TSkinState::_selector_valid_type arg)
  {
    msg_.selector_valid = std::move(arg);
    return Init_TSkinState_touchpad(msg_);
  }

private:
  ::tactigon_msgs::msg::TSkinState msg_;
};

class Init_TSkinState_selector
{
public:
  explicit Init_TSkinState_selector(::tactigon_msgs::msg::TSkinState & msg)
  : msg_(msg)
  {}
  Init_TSkinState_selector_valid selector(::tactigon_msgs::msg::TSkinState::_selector_type arg)
  {
    msg_.selector = std::move(arg);
    return Init_TSkinState_selector_valid(msg_);
  }

private:
  ::tactigon_msgs::msg::TSkinState msg_;
};

class Init_TSkinState_battery
{
public:
  explicit Init_TSkinState_battery(::tactigon_msgs::msg::TSkinState & msg)
  : msg_(msg)
  {}
  Init_TSkinState_selector battery(::tactigon_msgs::msg::TSkinState::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return Init_TSkinState_selector(msg_);
  }

private:
  ::tactigon_msgs::msg::TSkinState msg_;
};

class Init_TSkinState_connected
{
public:
  Init_TSkinState_connected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TSkinState_battery connected(::tactigon_msgs::msg::TSkinState::_connected_type arg)
  {
    msg_.connected = std::move(arg);
    return Init_TSkinState_battery(msg_);
  }

private:
  ::tactigon_msgs::msg::TSkinState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tactigon_msgs::msg::TSkinState>()
{
  return tactigon_msgs::msg::builder::Init_TSkinState_connected();
}

}  // namespace tactigon_msgs

#endif  // TACTIGON_MSGS__MSG__DETAIL__T_SKIN_STATE__BUILDER_HPP_
