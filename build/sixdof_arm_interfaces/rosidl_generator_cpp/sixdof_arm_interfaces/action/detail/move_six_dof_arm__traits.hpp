// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sixdof_arm_interfaces:action/MoveSixDofArm.idl
// generated code does not contain a copyright notice

#ifndef SIXDOF_ARM_INTERFACES__ACTION__DETAIL__MOVE_SIX_DOF_ARM__TRAITS_HPP_
#define SIXDOF_ARM_INTERFACES__ACTION__DETAIL__MOVE_SIX_DOF_ARM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sixdof_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveSixDofArm_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_names
  {
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []";
    } else {
      out << "joint_names: [";
      size_t pending_items = msg.joint_names.size();
      for (auto item : msg.joint_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_position
  {
    if (msg.current_position.size() == 0) {
      out << "current_position: []";
    } else {
      out << "current_position: [";
      size_t pending_items = msg.current_position.size();
      for (auto item : msg.current_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocities
  {
    if (msg.velocities.size() == 0) {
      out << "velocities: []";
    } else {
      out << "velocities: [";
      size_t pending_items = msg.velocities.size();
      for (auto item : msg.velocities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << ", ";
  }

  // member: reset
  {
    out << "reset: ";
    rosidl_generator_traits::value_to_yaml(msg.reset, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveSixDofArm_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []\n";
    } else {
      out << "joint_names:\n";
      for (auto item : msg.joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current_position.size() == 0) {
      out << "current_position: []\n";
    } else {
      out << "current_position:\n";
      for (auto item : msg.current_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocities.size() == 0) {
      out << "velocities: []\n";
    } else {
      out << "velocities:\n";
      for (auto item : msg.velocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: reset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset: ";
    rosidl_generator_traits::value_to_yaml(msg.reset, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveSixDofArm_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sixdof_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sixdof_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sixdof_arm_interfaces::action::MoveSixDofArm_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  sixdof_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sixdof_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const sixdof_arm_interfaces::action::MoveSixDofArm_Goal & msg)
{
  return sixdof_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<sixdof_arm_interfaces::action::MoveSixDofArm_Goal>()
{
  return "sixdof_arm_interfaces::action::MoveSixDofArm_Goal";
}

template<>
inline const char * name<sixdof_arm_interfaces::action::MoveSixDofArm_Goal>()
{
  return "sixdof_arm_interfaces/action/MoveSixDofArm_Goal";
}

template<>
struct has_fixed_size<sixdof_arm_interfaces::action::MoveSixDofArm_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sixdof_arm_interfaces::action::MoveSixDofArm_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sixdof_arm_interfaces::action::MoveSixDofArm_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace sixdof_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveSixDofArm_Result & msg,
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
  const MoveSixDofArm_Result & msg,
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

inline std::string to_yaml(const MoveSixDofArm_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sixdof_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sixdof_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sixdof_arm_interfaces::action::MoveSixDofArm_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  sixdof_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sixdof_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const sixdof_arm_interfaces::action::MoveSixDofArm_Result & msg)
{
  return sixdof_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<sixdof_arm_interfaces::action::MoveSixDofArm_Result>()
{
  return "sixdof_arm_interfaces::action::MoveSixDofArm_Result";
}

template<>
inline const char * name<sixdof_arm_interfaces::action::MoveSixDofArm_Result>()
{
  return "sixdof_arm_interfaces/action/MoveSixDofArm_Result";
}

template<>
struct has_fixed_size<sixdof_arm_interfaces::action::MoveSixDofArm_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sixdof_arm_interfaces::action::MoveSixDofArm_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sixdof_arm_interfaces::action::MoveSixDofArm_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace sixdof_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveSixDofArm_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_position
  {
    if (msg.current_position.size() == 0) {
      out << "current_position: []";
    } else {
      out << "current_position: [";
      size_t pending_items = msg.current_position.size();
      for (auto item : msg.current_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reward
  {
    out << "reward: ";
    rosidl_generator_traits::value_to_yaml(msg.reward, out);
    out << ", ";
  }

  // member: done
  {
    out << "done: ";
    rosidl_generator_traits::value_to_yaml(msg.done, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveSixDofArm_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current_position.size() == 0) {
      out << "current_position: []\n";
    } else {
      out << "current_position:\n";
      for (auto item : msg.current_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: reward
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reward: ";
    rosidl_generator_traits::value_to_yaml(msg.reward, out);
    out << "\n";
  }

  // member: done
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "done: ";
    rosidl_generator_traits::value_to_yaml(msg.done, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveSixDofArm_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sixdof_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sixdof_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sixdof_arm_interfaces::action::MoveSixDofArm_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  sixdof_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sixdof_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const sixdof_arm_interfaces::action::MoveSixDofArm_Feedback & msg)
{
  return sixdof_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback>()
{
  return "sixdof_arm_interfaces::action::MoveSixDofArm_Feedback";
}

template<>
inline const char * name<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback>()
{
  return "sixdof_arm_interfaces/action/MoveSixDofArm_Feedback";
}

template<>
struct has_fixed_size<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__traits.hpp"

namespace sixdof_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveSixDofArm_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveSixDofArm_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveSixDofArm_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sixdof_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sixdof_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sixdof_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sixdof_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request & msg)
{
  return sixdof_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request>()
{
  return "sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request";
}

template<>
inline const char * name<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request>()
{
  return "sixdof_arm_interfaces/action/MoveSixDofArm_SendGoal_Request";
}

template<>
struct has_fixed_size<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<sixdof_arm_interfaces::action::MoveSixDofArm_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<sixdof_arm_interfaces::action::MoveSixDofArm_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace sixdof_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveSixDofArm_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveSixDofArm_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveSixDofArm_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sixdof_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sixdof_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sixdof_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sixdof_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response & msg)
{
  return sixdof_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response>()
{
  return "sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response";
}

template<>
inline const char * name<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response>()
{
  return "sixdof_arm_interfaces/action/MoveSixDofArm_SendGoal_Response";
}

template<>
struct has_fixed_size<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal>()
{
  return "sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal";
}

template<>
inline const char * name<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal>()
{
  return "sixdof_arm_interfaces/action/MoveSixDofArm_SendGoal";
}

template<>
struct has_fixed_size<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request>::value &&
    has_fixed_size<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request>::value &&
    has_bounded_size<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace sixdof_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveSixDofArm_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveSixDofArm_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveSixDofArm_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sixdof_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sixdof_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sixdof_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sixdof_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request & msg)
{
  return sixdof_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request>()
{
  return "sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request";
}

template<>
inline const char * name<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request>()
{
  return "sixdof_arm_interfaces/action/MoveSixDofArm_GetResult_Request";
}

template<>
struct has_fixed_size<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__traits.hpp"

namespace sixdof_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveSixDofArm_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveSixDofArm_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveSixDofArm_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sixdof_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sixdof_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sixdof_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sixdof_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response & msg)
{
  return sixdof_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response>()
{
  return "sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response";
}

template<>
inline const char * name<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response>()
{
  return "sixdof_arm_interfaces/action/MoveSixDofArm_GetResult_Response";
}

template<>
struct has_fixed_size<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<sixdof_arm_interfaces::action::MoveSixDofArm_Result>::value> {};

template<>
struct has_bounded_size<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<sixdof_arm_interfaces::action::MoveSixDofArm_Result>::value> {};

template<>
struct is_message<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult>()
{
  return "sixdof_arm_interfaces::action::MoveSixDofArm_GetResult";
}

template<>
inline const char * name<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult>()
{
  return "sixdof_arm_interfaces/action/MoveSixDofArm_GetResult";
}

template<>
struct has_fixed_size<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request>::value &&
    has_fixed_size<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request>::value &&
    has_bounded_size<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response>::value
  >
{
};

template<>
struct is_service<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__traits.hpp"

namespace sixdof_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveSixDofArm_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveSixDofArm_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveSixDofArm_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sixdof_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sixdof_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  sixdof_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sixdof_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage & msg)
{
  return sixdof_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage>()
{
  return "sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage";
}

template<>
inline const char * name<sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage>()
{
  return "sixdof_arm_interfaces/action/MoveSixDofArm_FeedbackMessage";
}

template<>
struct has_fixed_size<sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<sixdof_arm_interfaces::action::MoveSixDofArm>
  : std::true_type
{
};

template<>
struct is_action_goal<sixdof_arm_interfaces::action::MoveSixDofArm_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<sixdof_arm_interfaces::action::MoveSixDofArm_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // SIXDOF_ARM_INTERFACES__ACTION__DETAIL__MOVE_SIX_DOF_ARM__TRAITS_HPP_
