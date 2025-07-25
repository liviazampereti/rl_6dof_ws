// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sixdof_arm_interfaces:srv/ResetArm.idl
// generated code does not contain a copyright notice

#ifndef SIXDOF_ARM_INTERFACES__SRV__DETAIL__RESET_ARM__TRAITS_HPP_
#define SIXDOF_ARM_INTERFACES__SRV__DETAIL__RESET_ARM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sixdof_arm_interfaces/srv/detail/reset_arm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sixdof_arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetArm_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: positions
  {
    if (msg.positions.size() == 0) {
      out << "positions: []";
    } else {
      out << "positions: [";
      size_t pending_items = msg.positions.size();
      for (auto item : msg.positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetArm_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positions.size() == 0) {
      out << "positions: []\n";
    } else {
      out << "positions:\n";
      for (auto item : msg.positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetArm_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sixdof_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sixdof_arm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sixdof_arm_interfaces::srv::ResetArm_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sixdof_arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sixdof_arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const sixdof_arm_interfaces::srv::ResetArm_Request & msg)
{
  return sixdof_arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sixdof_arm_interfaces::srv::ResetArm_Request>()
{
  return "sixdof_arm_interfaces::srv::ResetArm_Request";
}

template<>
inline const char * name<sixdof_arm_interfaces::srv::ResetArm_Request>()
{
  return "sixdof_arm_interfaces/srv/ResetArm_Request";
}

template<>
struct has_fixed_size<sixdof_arm_interfaces::srv::ResetArm_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sixdof_arm_interfaces::srv::ResetArm_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sixdof_arm_interfaces::srv::ResetArm_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace sixdof_arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetArm_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetArm_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetArm_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sixdof_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sixdof_arm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sixdof_arm_interfaces::srv::ResetArm_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sixdof_arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sixdof_arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const sixdof_arm_interfaces::srv::ResetArm_Response & msg)
{
  return sixdof_arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sixdof_arm_interfaces::srv::ResetArm_Response>()
{
  return "sixdof_arm_interfaces::srv::ResetArm_Response";
}

template<>
inline const char * name<sixdof_arm_interfaces::srv::ResetArm_Response>()
{
  return "sixdof_arm_interfaces/srv/ResetArm_Response";
}

template<>
struct has_fixed_size<sixdof_arm_interfaces::srv::ResetArm_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sixdof_arm_interfaces::srv::ResetArm_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sixdof_arm_interfaces::srv::ResetArm_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sixdof_arm_interfaces::srv::ResetArm>()
{
  return "sixdof_arm_interfaces::srv::ResetArm";
}

template<>
inline const char * name<sixdof_arm_interfaces::srv::ResetArm>()
{
  return "sixdof_arm_interfaces/srv/ResetArm";
}

template<>
struct has_fixed_size<sixdof_arm_interfaces::srv::ResetArm>
  : std::integral_constant<
    bool,
    has_fixed_size<sixdof_arm_interfaces::srv::ResetArm_Request>::value &&
    has_fixed_size<sixdof_arm_interfaces::srv::ResetArm_Response>::value
  >
{
};

template<>
struct has_bounded_size<sixdof_arm_interfaces::srv::ResetArm>
  : std::integral_constant<
    bool,
    has_bounded_size<sixdof_arm_interfaces::srv::ResetArm_Request>::value &&
    has_bounded_size<sixdof_arm_interfaces::srv::ResetArm_Response>::value
  >
{
};

template<>
struct is_service<sixdof_arm_interfaces::srv::ResetArm>
  : std::true_type
{
};

template<>
struct is_service_request<sixdof_arm_interfaces::srv::ResetArm_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sixdof_arm_interfaces::srv::ResetArm_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIXDOF_ARM_INTERFACES__SRV__DETAIL__RESET_ARM__TRAITS_HPP_
