// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sixdof_arm_interfaces:action/MoveSixDofArm.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__rosidl_typesupport_introspection_c.h"
#include "sixdof_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__functions.h"
#include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.h"


// Include directives for member types
// Member `joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `current_position`
// Member `velocities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__MoveSixDofArm_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sixdof_arm_interfaces__action__MoveSixDofArm_Goal__init(message_memory);
}

void sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__MoveSixDofArm_Goal_fini_function(void * message_memory)
{
  sixdof_arm_interfaces__action__MoveSixDofArm_Goal__fini(message_memory);
}

size_t sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__size_function__MoveSixDofArm_Goal__joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_const_function__MoveSixDofArm_Goal__joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_function__MoveSixDofArm_Goal__joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__fetch_function__MoveSixDofArm_Goal__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_const_function__MoveSixDofArm_Goal__joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__assign_function__MoveSixDofArm_Goal__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_function__MoveSixDofArm_Goal__joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__resize_function__MoveSixDofArm_Goal__joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__size_function__MoveSixDofArm_Goal__current_position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_const_function__MoveSixDofArm_Goal__current_position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_function__MoveSixDofArm_Goal__current_position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__fetch_function__MoveSixDofArm_Goal__current_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_const_function__MoveSixDofArm_Goal__current_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__assign_function__MoveSixDofArm_Goal__current_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_function__MoveSixDofArm_Goal__current_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__resize_function__MoveSixDofArm_Goal__current_position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__size_function__MoveSixDofArm_Goal__velocities(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_const_function__MoveSixDofArm_Goal__velocities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_function__MoveSixDofArm_Goal__velocities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__fetch_function__MoveSixDofArm_Goal__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_const_function__MoveSixDofArm_Goal__velocities(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__assign_function__MoveSixDofArm_Goal__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_function__MoveSixDofArm_Goal__velocities(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__resize_function__MoveSixDofArm_Goal__velocities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__MoveSixDofArm_Goal_message_member_array[5] = {
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_Goal, joint_names),  // bytes offset in struct
    NULL,  // default value
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__size_function__MoveSixDofArm_Goal__joint_names,  // size() function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_const_function__MoveSixDofArm_Goal__joint_names,  // get_const(index) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_function__MoveSixDofArm_Goal__joint_names,  // get(index) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__fetch_function__MoveSixDofArm_Goal__joint_names,  // fetch(index, &value) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__assign_function__MoveSixDofArm_Goal__joint_names,  // assign(index, value) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__resize_function__MoveSixDofArm_Goal__joint_names  // resize(index) function pointer
  },
  {
    "current_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_Goal, current_position),  // bytes offset in struct
    NULL,  // default value
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__size_function__MoveSixDofArm_Goal__current_position,  // size() function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_const_function__MoveSixDofArm_Goal__current_position,  // get_const(index) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_function__MoveSixDofArm_Goal__current_position,  // get(index) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__fetch_function__MoveSixDofArm_Goal__current_position,  // fetch(index, &value) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__assign_function__MoveSixDofArm_Goal__current_position,  // assign(index, value) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__resize_function__MoveSixDofArm_Goal__current_position  // resize(index) function pointer
  },
  {
    "velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_Goal, velocities),  // bytes offset in struct
    NULL,  // default value
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__size_function__MoveSixDofArm_Goal__velocities,  // size() function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_const_function__MoveSixDofArm_Goal__velocities,  // get_const(index) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__get_function__MoveSixDofArm_Goal__velocities,  // get(index) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__fetch_function__MoveSixDofArm_Goal__velocities,  // fetch(index, &value) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__assign_function__MoveSixDofArm_Goal__velocities,  // assign(index, value) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__resize_function__MoveSixDofArm_Goal__velocities  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_Goal, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_Goal, reset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__MoveSixDofArm_Goal_message_members = {
  "sixdof_arm_interfaces__action",  // message namespace
  "MoveSixDofArm_Goal",  // message name
  5,  // number of fields
  sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Goal),
  sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__MoveSixDofArm_Goal_message_member_array,  // message members
  sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__MoveSixDofArm_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__MoveSixDofArm_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__MoveSixDofArm_Goal_message_type_support_handle = {
  0,
  &sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__MoveSixDofArm_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sixdof_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_Goal)() {
  if (!sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__MoveSixDofArm_Goal_message_type_support_handle.typesupport_identifier) {
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__MoveSixDofArm_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sixdof_arm_interfaces__action__MoveSixDofArm_Goal__rosidl_typesupport_introspection_c__MoveSixDofArm_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sixdof_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__functions.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.h"


// Include directives for member types
// Member `current_position`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__MoveSixDofArm_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sixdof_arm_interfaces__action__MoveSixDofArm_Result__init(message_memory);
}

void sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__MoveSixDofArm_Result_fini_function(void * message_memory)
{
  sixdof_arm_interfaces__action__MoveSixDofArm_Result__fini(message_memory);
}

size_t sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__size_function__MoveSixDofArm_Result__current_position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__get_const_function__MoveSixDofArm_Result__current_position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__get_function__MoveSixDofArm_Result__current_position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__fetch_function__MoveSixDofArm_Result__current_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__get_const_function__MoveSixDofArm_Result__current_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__assign_function__MoveSixDofArm_Result__current_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__get_function__MoveSixDofArm_Result__current_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__resize_function__MoveSixDofArm_Result__current_position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__MoveSixDofArm_Result_message_member_array[4] = {
  {
    "current_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_Result, current_position),  // bytes offset in struct
    NULL,  // default value
    sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__size_function__MoveSixDofArm_Result__current_position,  // size() function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__get_const_function__MoveSixDofArm_Result__current_position,  // get_const(index) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__get_function__MoveSixDofArm_Result__current_position,  // get(index) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__fetch_function__MoveSixDofArm_Result__current_position,  // fetch(index, &value) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__assign_function__MoveSixDofArm_Result__current_position,  // assign(index, value) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__resize_function__MoveSixDofArm_Result__current_position  // resize(index) function pointer
  },
  {
    "reward",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_Result, reward),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "done",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_Result, done),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__MoveSixDofArm_Result_message_members = {
  "sixdof_arm_interfaces__action",  // message namespace
  "MoveSixDofArm_Result",  // message name
  4,  // number of fields
  sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Result),
  sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__MoveSixDofArm_Result_message_member_array,  // message members
  sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__MoveSixDofArm_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__MoveSixDofArm_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__MoveSixDofArm_Result_message_type_support_handle = {
  0,
  &sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__MoveSixDofArm_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sixdof_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_Result)() {
  if (!sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__MoveSixDofArm_Result_message_type_support_handle.typesupport_identifier) {
    sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__MoveSixDofArm_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sixdof_arm_interfaces__action__MoveSixDofArm_Result__rosidl_typesupport_introspection_c__MoveSixDofArm_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sixdof_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__functions.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.h"


// Include directives for member types
// Member `current_position`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__MoveSixDofArm_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__init(message_memory);
}

void sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__MoveSixDofArm_Feedback_fini_function(void * message_memory)
{
  sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__fini(message_memory);
}

size_t sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__size_function__MoveSixDofArm_Feedback__current_position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__get_const_function__MoveSixDofArm_Feedback__current_position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__get_function__MoveSixDofArm_Feedback__current_position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__fetch_function__MoveSixDofArm_Feedback__current_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__get_const_function__MoveSixDofArm_Feedback__current_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__assign_function__MoveSixDofArm_Feedback__current_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__get_function__MoveSixDofArm_Feedback__current_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__resize_function__MoveSixDofArm_Feedback__current_position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__MoveSixDofArm_Feedback_message_member_array[3] = {
  {
    "current_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback, current_position),  // bytes offset in struct
    NULL,  // default value
    sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__size_function__MoveSixDofArm_Feedback__current_position,  // size() function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__get_const_function__MoveSixDofArm_Feedback__current_position,  // get_const(index) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__get_function__MoveSixDofArm_Feedback__current_position,  // get(index) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__fetch_function__MoveSixDofArm_Feedback__current_position,  // fetch(index, &value) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__assign_function__MoveSixDofArm_Feedback__current_position,  // assign(index, value) function pointer
    sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__resize_function__MoveSixDofArm_Feedback__current_position  // resize(index) function pointer
  },
  {
    "reward",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback, reward),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "done",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback, done),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__MoveSixDofArm_Feedback_message_members = {
  "sixdof_arm_interfaces__action",  // message namespace
  "MoveSixDofArm_Feedback",  // message name
  3,  // number of fields
  sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback),
  sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__MoveSixDofArm_Feedback_message_member_array,  // message members
  sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__MoveSixDofArm_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__MoveSixDofArm_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__MoveSixDofArm_Feedback_message_type_support_handle = {
  0,
  &sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__MoveSixDofArm_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sixdof_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_Feedback)() {
  if (!sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__MoveSixDofArm_Feedback_message_type_support_handle.typesupport_identifier) {
    sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__MoveSixDofArm_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__rosidl_typesupport_introspection_c__MoveSixDofArm_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sixdof_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__functions.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "sixdof_arm_interfaces/action/move_six_dof_arm.h"
// Member `goal`
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__init(message_memory);
}

void sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Request_fini_function(void * message_memory)
{
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Request_message_members = {
  "sixdof_arm_interfaces__action",  // message namespace
  "MoveSixDofArm_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request),
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Request_message_member_array,  // message members
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Request_message_type_support_handle = {
  0,
  &sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sixdof_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_SendGoal_Request)() {
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_Goal)();
  if (!sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sixdof_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__functions.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__init(message_memory);
}

void sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Response_fini_function(void * message_memory)
{
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Response_message_members = {
  "sixdof_arm_interfaces__action",  // message namespace
  "MoveSixDofArm_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response),
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Response_message_member_array,  // message members
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Response_message_type_support_handle = {
  0,
  &sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sixdof_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_SendGoal_Response)() {
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sixdof_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_service_members = {
  "sixdof_arm_interfaces__action",  // service namespace
  "MoveSixDofArm_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_service_type_support_handle = {
  0,
  &sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sixdof_arm_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_SendGoal)() {
  if (!sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_service_type_support_handle.typesupport_identifier) {
    sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_SendGoal_Response)()->data;
  }

  return &sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sixdof_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__functions.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__init(message_memory);
}

void sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Request_fini_function(void * message_memory)
{
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Request_message_members = {
  "sixdof_arm_interfaces__action",  // message namespace
  "MoveSixDofArm_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request),
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Request_message_member_array,  // message members
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Request_message_type_support_handle = {
  0,
  &sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sixdof_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_GetResult_Request)() {
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sixdof_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__functions.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "sixdof_arm_interfaces/action/move_six_dof_arm.h"
// Member `result`
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__init(message_memory);
}

void sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Response_fini_function(void * message_memory)
{
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Response_message_members = {
  "sixdof_arm_interfaces__action",  // message namespace
  "MoveSixDofArm_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response),
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Response_message_member_array,  // message members
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Response_message_type_support_handle = {
  0,
  &sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sixdof_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_GetResult_Response)() {
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_Result)();
  if (!sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sixdof_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_service_members = {
  "sixdof_arm_interfaces__action",  // service namespace
  "MoveSixDofArm_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_service_type_support_handle = {
  0,
  &sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sixdof_arm_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_GetResult)() {
  if (!sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_service_type_support_handle.typesupport_identifier) {
    sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_GetResult_Response)()->data;
  }

  return &sixdof_arm_interfaces__action__detail__move_six_dof_arm__rosidl_typesupport_introspection_c__MoveSixDofArm_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sixdof_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__functions.h"
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "sixdof_arm_interfaces/action/move_six_dof_arm.h"
// Member `feedback`
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveSixDofArm_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__init(message_memory);
}

void sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveSixDofArm_FeedbackMessage_fini_function(void * message_memory)
{
  sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveSixDofArm_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveSixDofArm_FeedbackMessage_message_members = {
  "sixdof_arm_interfaces__action",  // message namespace
  "MoveSixDofArm_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage),
  sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveSixDofArm_FeedbackMessage_message_member_array,  // message members
  sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveSixDofArm_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveSixDofArm_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveSixDofArm_FeedbackMessage_message_type_support_handle = {
  0,
  &sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveSixDofArm_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sixdof_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_FeedbackMessage)() {
  sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveSixDofArm_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveSixDofArm_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, action, MoveSixDofArm_Feedback)();
  if (!sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveSixDofArm_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveSixDofArm_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveSixDofArm_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
