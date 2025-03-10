// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sixdof_arm_interfaces:action/MoveSixDofArm.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sixdof_arm_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveSixDofArm_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sixdof_arm_interfaces::action::MoveSixDofArm_Goal(_init);
}

void MoveSixDofArm_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sixdof_arm_interfaces::action::MoveSixDofArm_Goal *>(message_memory);
  typed_message->~MoveSixDofArm_Goal();
}

size_t size_function__MoveSixDofArm_Goal__joint_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MoveSixDofArm_Goal__joint_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__MoveSixDofArm_Goal__joint_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__MoveSixDofArm_Goal__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__MoveSixDofArm_Goal__joint_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__MoveSixDofArm_Goal__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__MoveSixDofArm_Goal__joint_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__MoveSixDofArm_Goal__joint_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MoveSixDofArm_Goal__current_position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MoveSixDofArm_Goal__current_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MoveSixDofArm_Goal__current_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MoveSixDofArm_Goal__current_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MoveSixDofArm_Goal__current_position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MoveSixDofArm_Goal__current_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MoveSixDofArm_Goal__current_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MoveSixDofArm_Goal__current_position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MoveSixDofArm_Goal__velocities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MoveSixDofArm_Goal__velocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MoveSixDofArm_Goal__velocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MoveSixDofArm_Goal__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MoveSixDofArm_Goal__velocities(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MoveSixDofArm_Goal__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MoveSixDofArm_Goal__velocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MoveSixDofArm_Goal__velocities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveSixDofArm_Goal_message_member_array[5] = {
  {
    "joint_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_Goal, joint_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__MoveSixDofArm_Goal__joint_names,  // size() function pointer
    get_const_function__MoveSixDofArm_Goal__joint_names,  // get_const(index) function pointer
    get_function__MoveSixDofArm_Goal__joint_names,  // get(index) function pointer
    fetch_function__MoveSixDofArm_Goal__joint_names,  // fetch(index, &value) function pointer
    assign_function__MoveSixDofArm_Goal__joint_names,  // assign(index, value) function pointer
    resize_function__MoveSixDofArm_Goal__joint_names  // resize(index) function pointer
  },
  {
    "current_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_Goal, current_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__MoveSixDofArm_Goal__current_position,  // size() function pointer
    get_const_function__MoveSixDofArm_Goal__current_position,  // get_const(index) function pointer
    get_function__MoveSixDofArm_Goal__current_position,  // get(index) function pointer
    fetch_function__MoveSixDofArm_Goal__current_position,  // fetch(index, &value) function pointer
    assign_function__MoveSixDofArm_Goal__current_position,  // assign(index, value) function pointer
    resize_function__MoveSixDofArm_Goal__current_position  // resize(index) function pointer
  },
  {
    "velocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_Goal, velocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__MoveSixDofArm_Goal__velocities,  // size() function pointer
    get_const_function__MoveSixDofArm_Goal__velocities,  // get_const(index) function pointer
    get_function__MoveSixDofArm_Goal__velocities,  // get(index) function pointer
    fetch_function__MoveSixDofArm_Goal__velocities,  // fetch(index, &value) function pointer
    assign_function__MoveSixDofArm_Goal__velocities,  // assign(index, value) function pointer
    resize_function__MoveSixDofArm_Goal__velocities  // resize(index) function pointer
  },
  {
    "duration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_Goal, duration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_Goal, reset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveSixDofArm_Goal_message_members = {
  "sixdof_arm_interfaces::action",  // message namespace
  "MoveSixDofArm_Goal",  // message name
  5,  // number of fields
  sizeof(sixdof_arm_interfaces::action::MoveSixDofArm_Goal),
  MoveSixDofArm_Goal_message_member_array,  // message members
  MoveSixDofArm_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveSixDofArm_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveSixDofArm_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveSixDofArm_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace sixdof_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sixdof_arm_interfaces::action::MoveSixDofArm_Goal>()
{
  return &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sixdof_arm_interfaces, action, MoveSixDofArm_Goal)() {
  return &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sixdof_arm_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveSixDofArm_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sixdof_arm_interfaces::action::MoveSixDofArm_Result(_init);
}

void MoveSixDofArm_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sixdof_arm_interfaces::action::MoveSixDofArm_Result *>(message_memory);
  typed_message->~MoveSixDofArm_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveSixDofArm_Result_message_member_array[1] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_Result, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveSixDofArm_Result_message_members = {
  "sixdof_arm_interfaces::action",  // message namespace
  "MoveSixDofArm_Result",  // message name
  1,  // number of fields
  sizeof(sixdof_arm_interfaces::action::MoveSixDofArm_Result),
  MoveSixDofArm_Result_message_member_array,  // message members
  MoveSixDofArm_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveSixDofArm_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveSixDofArm_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveSixDofArm_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace sixdof_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sixdof_arm_interfaces::action::MoveSixDofArm_Result>()
{
  return &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sixdof_arm_interfaces, action, MoveSixDofArm_Result)() {
  return &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sixdof_arm_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveSixDofArm_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sixdof_arm_interfaces::action::MoveSixDofArm_Feedback(_init);
}

void MoveSixDofArm_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback *>(message_memory);
  typed_message->~MoveSixDofArm_Feedback();
}

size_t size_function__MoveSixDofArm_Feedback__current_position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MoveSixDofArm_Feedback__current_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MoveSixDofArm_Feedback__current_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MoveSixDofArm_Feedback__current_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MoveSixDofArm_Feedback__current_position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MoveSixDofArm_Feedback__current_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MoveSixDofArm_Feedback__current_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MoveSixDofArm_Feedback__current_position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveSixDofArm_Feedback_message_member_array[3] = {
  {
    "current_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_Feedback, current_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__MoveSixDofArm_Feedback__current_position,  // size() function pointer
    get_const_function__MoveSixDofArm_Feedback__current_position,  // get_const(index) function pointer
    get_function__MoveSixDofArm_Feedback__current_position,  // get(index) function pointer
    fetch_function__MoveSixDofArm_Feedback__current_position,  // fetch(index, &value) function pointer
    assign_function__MoveSixDofArm_Feedback__current_position,  // assign(index, value) function pointer
    resize_function__MoveSixDofArm_Feedback__current_position  // resize(index) function pointer
  },
  {
    "reward",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_Feedback, reward),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "done",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_Feedback, done),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveSixDofArm_Feedback_message_members = {
  "sixdof_arm_interfaces::action",  // message namespace
  "MoveSixDofArm_Feedback",  // message name
  3,  // number of fields
  sizeof(sixdof_arm_interfaces::action::MoveSixDofArm_Feedback),
  MoveSixDofArm_Feedback_message_member_array,  // message members
  MoveSixDofArm_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveSixDofArm_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveSixDofArm_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveSixDofArm_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace sixdof_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback>()
{
  return &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sixdof_arm_interfaces, action, MoveSixDofArm_Feedback)() {
  return &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sixdof_arm_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveSixDofArm_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request(_init);
}

void MoveSixDofArm_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request *>(message_memory);
  typed_message->~MoveSixDofArm_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveSixDofArm_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sixdof_arm_interfaces::action::MoveSixDofArm_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveSixDofArm_SendGoal_Request_message_members = {
  "sixdof_arm_interfaces::action",  // message namespace
  "MoveSixDofArm_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request),
  MoveSixDofArm_SendGoal_Request_message_member_array,  // message members
  MoveSixDofArm_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveSixDofArm_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveSixDofArm_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveSixDofArm_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace sixdof_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request>()
{
  return &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sixdof_arm_interfaces, action, MoveSixDofArm_SendGoal_Request)() {
  return &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sixdof_arm_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveSixDofArm_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response(_init);
}

void MoveSixDofArm_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response *>(message_memory);
  typed_message->~MoveSixDofArm_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveSixDofArm_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveSixDofArm_SendGoal_Response_message_members = {
  "sixdof_arm_interfaces::action",  // message namespace
  "MoveSixDofArm_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response),
  MoveSixDofArm_SendGoal_Response_message_member_array,  // message members
  MoveSixDofArm_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveSixDofArm_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveSixDofArm_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveSixDofArm_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace sixdof_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response>()
{
  return &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sixdof_arm_interfaces, action, MoveSixDofArm_SendGoal_Response)() {
  return &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace sixdof_arm_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers MoveSixDofArm_SendGoal_service_members = {
  "sixdof_arm_interfaces::action",  // service namespace
  "MoveSixDofArm_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t MoveSixDofArm_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveSixDofArm_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace sixdof_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sixdof_arm_interfaces, action, MoveSixDofArm_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<sixdof_arm_interfaces::action::MoveSixDofArm_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sixdof_arm_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveSixDofArm_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request(_init);
}

void MoveSixDofArm_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request *>(message_memory);
  typed_message->~MoveSixDofArm_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveSixDofArm_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveSixDofArm_GetResult_Request_message_members = {
  "sixdof_arm_interfaces::action",  // message namespace
  "MoveSixDofArm_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request),
  MoveSixDofArm_GetResult_Request_message_member_array,  // message members
  MoveSixDofArm_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveSixDofArm_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveSixDofArm_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveSixDofArm_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace sixdof_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request>()
{
  return &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sixdof_arm_interfaces, action, MoveSixDofArm_GetResult_Request)() {
  return &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sixdof_arm_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveSixDofArm_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response(_init);
}

void MoveSixDofArm_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response *>(message_memory);
  typed_message->~MoveSixDofArm_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveSixDofArm_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sixdof_arm_interfaces::action::MoveSixDofArm_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveSixDofArm_GetResult_Response_message_members = {
  "sixdof_arm_interfaces::action",  // message namespace
  "MoveSixDofArm_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response),
  MoveSixDofArm_GetResult_Response_message_member_array,  // message members
  MoveSixDofArm_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveSixDofArm_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveSixDofArm_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveSixDofArm_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace sixdof_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response>()
{
  return &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sixdof_arm_interfaces, action, MoveSixDofArm_GetResult_Response)() {
  return &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace sixdof_arm_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers MoveSixDofArm_GetResult_service_members = {
  "sixdof_arm_interfaces::action",  // service namespace
  "MoveSixDofArm_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t MoveSixDofArm_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveSixDofArm_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace sixdof_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::sixdof_arm_interfaces::action::MoveSixDofArm_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sixdof_arm_interfaces, action, MoveSixDofArm_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<sixdof_arm_interfaces::action::MoveSixDofArm_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sixdof_arm_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void MoveSixDofArm_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage(_init);
}

void MoveSixDofArm_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage *>(message_memory);
  typed_message->~MoveSixDofArm_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoveSixDofArm_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sixdof_arm_interfaces::action::MoveSixDofArm_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoveSixDofArm_FeedbackMessage_message_members = {
  "sixdof_arm_interfaces::action",  // message namespace
  "MoveSixDofArm_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage),
  MoveSixDofArm_FeedbackMessage_message_member_array,  // message members
  MoveSixDofArm_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveSixDofArm_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoveSixDofArm_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoveSixDofArm_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace sixdof_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sixdof_arm_interfaces::action::MoveSixDofArm_FeedbackMessage>()
{
  return &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sixdof_arm_interfaces, action, MoveSixDofArm_FeedbackMessage)() {
  return &::sixdof_arm_interfaces::action::rosidl_typesupport_introspection_cpp::MoveSixDofArm_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
