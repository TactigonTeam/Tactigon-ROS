// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tactigon_msgs:msg/TSkinState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tactigon_msgs/msg/t_skin_state.hpp"


#ifndef TACTIGON_MSGS__MSG__DETAIL__T_SKIN_STATE__TRAITS_HPP_
#define TACTIGON_MSGS__MSG__DETAIL__T_SKIN_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tactigon_msgs/msg/detail/t_skin_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'touchpad'
#include "tactigon_msgs/msg/detail/touch__traits.hpp"
// Member 'angle'
#include "tactigon_msgs/msg/detail/angle__traits.hpp"
// Member 'gesture'
#include "tactigon_msgs/msg/detail/gesture__traits.hpp"

namespace tactigon_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TSkinState & msg,
  std::ostream & out)
{
  out << "{";
  // member: connected
  {
    out << "connected: ";
    rosidl_generator_traits::value_to_yaml(msg.connected, out);
    out << ", ";
  }

  // member: battery
  {
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << ", ";
  }

  // member: selector
  {
    out << "selector: ";
    rosidl_generator_traits::value_to_yaml(msg.selector, out);
    out << ", ";
  }

  // member: selector_valid
  {
    out << "selector_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.selector_valid, out);
    out << ", ";
  }

  // member: touchpad
  {
    out << "touchpad: ";
    to_flow_style_yaml(msg.touchpad, out);
    out << ", ";
  }

  // member: touchpad_valid
  {
    out << "touchpad_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.touchpad_valid, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    to_flow_style_yaml(msg.angle, out);
    out << ", ";
  }

  // member: angle_valid
  {
    out << "angle_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_valid, out);
    out << ", ";
  }

  // member: gesture
  {
    out << "gesture: ";
    to_flow_style_yaml(msg.gesture, out);
    out << ", ";
  }

  // member: gesture_valid
  {
    out << "gesture_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.gesture_valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TSkinState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connected: ";
    rosidl_generator_traits::value_to_yaml(msg.connected, out);
    out << "\n";
  }

  // member: battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << "\n";
  }

  // member: selector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "selector: ";
    rosidl_generator_traits::value_to_yaml(msg.selector, out);
    out << "\n";
  }

  // member: selector_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "selector_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.selector_valid, out);
    out << "\n";
  }

  // member: touchpad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "touchpad:\n";
    to_block_style_yaml(msg.touchpad, out, indentation + 2);
  }

  // member: touchpad_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "touchpad_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.touchpad_valid, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle:\n";
    to_block_style_yaml(msg.angle, out, indentation + 2);
  }

  // member: angle_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_valid, out);
    out << "\n";
  }

  // member: gesture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gesture:\n";
    to_block_style_yaml(msg.gesture, out, indentation + 2);
  }

  // member: gesture_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gesture_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.gesture_valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TSkinState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tactigon_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tactigon_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tactigon_msgs::msg::TSkinState & msg,
  std::ostream & out, size_t indentation = 0)
{
  tactigon_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tactigon_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tactigon_msgs::msg::TSkinState & msg)
{
  return tactigon_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tactigon_msgs::msg::TSkinState>()
{
  return "tactigon_msgs::msg::TSkinState";
}

template<>
inline const char * name<tactigon_msgs::msg::TSkinState>()
{
  return "tactigon_msgs/msg/TSkinState";
}

template<>
struct has_fixed_size<tactigon_msgs::msg::TSkinState>
  : std::integral_constant<bool, has_fixed_size<tactigon_msgs::msg::Angle>::value && has_fixed_size<tactigon_msgs::msg::Gesture>::value && has_fixed_size<tactigon_msgs::msg::Touch>::value> {};

template<>
struct has_bounded_size<tactigon_msgs::msg::TSkinState>
  : std::integral_constant<bool, has_bounded_size<tactigon_msgs::msg::Angle>::value && has_bounded_size<tactigon_msgs::msg::Gesture>::value && has_bounded_size<tactigon_msgs::msg::Touch>::value> {};

template<>
struct is_message<tactigon_msgs::msg::TSkinState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TACTIGON_MSGS__MSG__DETAIL__T_SKIN_STATE__TRAITS_HPP_
