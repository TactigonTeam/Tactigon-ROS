// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tactigon_msgs:msg/Gesture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tactigon_msgs/msg/gesture.hpp"


#ifndef TACTIGON_MSGS__MSG__DETAIL__GESTURE__BUILDER_HPP_
#define TACTIGON_MSGS__MSG__DETAIL__GESTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tactigon_msgs/msg/detail/gesture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tactigon_msgs
{

namespace msg
{

namespace builder
{

class Init_Gesture_displacement
{
public:
  explicit Init_Gesture_displacement(::tactigon_msgs::msg::Gesture & msg)
  : msg_(msg)
  {}
  ::tactigon_msgs::msg::Gesture displacement(::tactigon_msgs::msg::Gesture::_displacement_type arg)
  {
    msg_.displacement = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tactigon_msgs::msg::Gesture msg_;
};

class Init_Gesture_confidence
{
public:
  explicit Init_Gesture_confidence(::tactigon_msgs::msg::Gesture & msg)
  : msg_(msg)
  {}
  Init_Gesture_displacement confidence(::tactigon_msgs::msg::Gesture::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_Gesture_displacement(msg_);
  }

private:
  ::tactigon_msgs::msg::Gesture msg_;
};

class Init_Gesture_probability
{
public:
  explicit Init_Gesture_probability(::tactigon_msgs::msg::Gesture & msg)
  : msg_(msg)
  {}
  Init_Gesture_confidence probability(::tactigon_msgs::msg::Gesture::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return Init_Gesture_confidence(msg_);
  }

private:
  ::tactigon_msgs::msg::Gesture msg_;
};

class Init_Gesture_gesture
{
public:
  Init_Gesture_gesture()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gesture_probability gesture(::tactigon_msgs::msg::Gesture::_gesture_type arg)
  {
    msg_.gesture = std::move(arg);
    return Init_Gesture_probability(msg_);
  }

private:
  ::tactigon_msgs::msg::Gesture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tactigon_msgs::msg::Gesture>()
{
  return tactigon_msgs::msg::builder::Init_Gesture_gesture();
}

}  // namespace tactigon_msgs

#endif  // TACTIGON_MSGS__MSG__DETAIL__GESTURE__BUILDER_HPP_
