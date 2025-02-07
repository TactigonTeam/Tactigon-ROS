// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tactigon_msgs:msg/Angle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tactigon_msgs/msg/angle.hpp"


#ifndef TACTIGON_MSGS__MSG__DETAIL__ANGLE__BUILDER_HPP_
#define TACTIGON_MSGS__MSG__DETAIL__ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tactigon_msgs/msg/detail/angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tactigon_msgs
{

namespace msg
{

namespace builder
{

class Init_Angle_yaw
{
public:
  explicit Init_Angle_yaw(::tactigon_msgs::msg::Angle & msg)
  : msg_(msg)
  {}
  ::tactigon_msgs::msg::Angle yaw(::tactigon_msgs::msg::Angle::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tactigon_msgs::msg::Angle msg_;
};

class Init_Angle_pitch
{
public:
  explicit Init_Angle_pitch(::tactigon_msgs::msg::Angle & msg)
  : msg_(msg)
  {}
  Init_Angle_yaw pitch(::tactigon_msgs::msg::Angle::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Angle_yaw(msg_);
  }

private:
  ::tactigon_msgs::msg::Angle msg_;
};

class Init_Angle_roll
{
public:
  Init_Angle_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Angle_pitch roll(::tactigon_msgs::msg::Angle::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Angle_pitch(msg_);
  }

private:
  ::tactigon_msgs::msg::Angle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tactigon_msgs::msg::Angle>()
{
  return tactigon_msgs::msg::builder::Init_Angle_roll();
}

}  // namespace tactigon_msgs

#endif  // TACTIGON_MSGS__MSG__DETAIL__ANGLE__BUILDER_HPP_
