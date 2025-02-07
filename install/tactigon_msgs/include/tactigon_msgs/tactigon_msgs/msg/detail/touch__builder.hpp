// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tactigon_msgs:msg/Touch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tactigon_msgs/msg/touch.hpp"


#ifndef TACTIGON_MSGS__MSG__DETAIL__TOUCH__BUILDER_HPP_
#define TACTIGON_MSGS__MSG__DETAIL__TOUCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tactigon_msgs/msg/detail/touch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tactigon_msgs
{

namespace msg
{

namespace builder
{

class Init_Touch_y_pos
{
public:
  explicit Init_Touch_y_pos(::tactigon_msgs::msg::Touch & msg)
  : msg_(msg)
  {}
  ::tactigon_msgs::msg::Touch y_pos(::tactigon_msgs::msg::Touch::_y_pos_type arg)
  {
    msg_.y_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tactigon_msgs::msg::Touch msg_;
};

class Init_Touch_x_pos
{
public:
  explicit Init_Touch_x_pos(::tactigon_msgs::msg::Touch & msg)
  : msg_(msg)
  {}
  Init_Touch_y_pos x_pos(::tactigon_msgs::msg::Touch::_x_pos_type arg)
  {
    msg_.x_pos = std::move(arg);
    return Init_Touch_y_pos(msg_);
  }

private:
  ::tactigon_msgs::msg::Touch msg_;
};

class Init_Touch_two_finger
{
public:
  explicit Init_Touch_two_finger(::tactigon_msgs::msg::Touch & msg)
  : msg_(msg)
  {}
  Init_Touch_x_pos two_finger(::tactigon_msgs::msg::Touch::_two_finger_type arg)
  {
    msg_.two_finger = std::move(arg);
    return Init_Touch_x_pos(msg_);
  }

private:
  ::tactigon_msgs::msg::Touch msg_;
};

class Init_Touch_one_finger
{
public:
  Init_Touch_one_finger()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Touch_two_finger one_finger(::tactigon_msgs::msg::Touch::_one_finger_type arg)
  {
    msg_.one_finger = std::move(arg);
    return Init_Touch_two_finger(msg_);
  }

private:
  ::tactigon_msgs::msg::Touch msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tactigon_msgs::msg::Touch>()
{
  return tactigon_msgs::msg::builder::Init_Touch_one_finger();
}

}  // namespace tactigon_msgs

#endif  // TACTIGON_MSGS__MSG__DETAIL__TOUCH__BUILDER_HPP_
