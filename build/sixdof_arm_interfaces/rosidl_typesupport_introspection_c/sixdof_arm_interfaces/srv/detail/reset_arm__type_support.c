// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sixdof_arm_interfaces:srv/ResetArm.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sixdof_arm_interfaces/srv/detail/reset_arm__rosidl_typesupport_introspection_c.h"
#include "sixdof_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sixdof_arm_interfaces/srv/detail/reset_arm__functions.h"
#include "sixdof_arm_interfaces/srv/detail/reset_arm__struct.h"


// Include directives for member types
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__ResetArm_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sixdof_arm_interfaces__srv__ResetArm_Request__init(message_memory);
}

void sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__ResetArm_Request_fini_function(void * message_memory)
{
  sixdof_arm_interfaces__srv__ResetArm_Request__fini(message_memory);
}

size_t sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__size_function__ResetArm_Request__positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__get_const_function__ResetArm_Request__positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__get_function__ResetArm_Request__positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__fetch_function__ResetArm_Request__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__get_const_function__ResetArm_Request__positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__assign_function__ResetArm_Request__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__get_function__ResetArm_Request__positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__resize_function__ResetArm_Request__positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__ResetArm_Request_message_member_array[1] = {
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__srv__ResetArm_Request, positions),  // bytes offset in struct
    NULL,  // default value
    sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__size_function__ResetArm_Request__positions,  // size() function pointer
    sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__get_const_function__ResetArm_Request__positions,  // get_const(index) function pointer
    sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__get_function__ResetArm_Request__positions,  // get(index) function pointer
    sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__fetch_function__ResetArm_Request__positions,  // fetch(index, &value) function pointer
    sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__assign_function__ResetArm_Request__positions,  // assign(index, value) function pointer
    sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__resize_function__ResetArm_Request__positions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__ResetArm_Request_message_members = {
  "sixdof_arm_interfaces__srv",  // message namespace
  "ResetArm_Request",  // message name
  1,  // number of fields
  sizeof(sixdof_arm_interfaces__srv__ResetArm_Request),
  sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__ResetArm_Request_message_member_array,  // message members
  sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__ResetArm_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__ResetArm_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__ResetArm_Request_message_type_support_handle = {
  0,
  &sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__ResetArm_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sixdof_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, srv, ResetArm_Request)() {
  if (!sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__ResetArm_Request_message_type_support_handle.typesupport_identifier) {
    sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__ResetArm_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sixdof_arm_interfaces__srv__ResetArm_Request__rosidl_typesupport_introspection_c__ResetArm_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sixdof_arm_interfaces/srv/detail/reset_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sixdof_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sixdof_arm_interfaces/srv/detail/reset_arm__functions.h"
// already included above
// #include "sixdof_arm_interfaces/srv/detail/reset_arm__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void sixdof_arm_interfaces__srv__ResetArm_Response__rosidl_typesupport_introspection_c__ResetArm_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sixdof_arm_interfaces__srv__ResetArm_Response__init(message_memory);
}

void sixdof_arm_interfaces__srv__ResetArm_Response__rosidl_typesupport_introspection_c__ResetArm_Response_fini_function(void * message_memory)
{
  sixdof_arm_interfaces__srv__ResetArm_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sixdof_arm_interfaces__srv__ResetArm_Response__rosidl_typesupport_introspection_c__ResetArm_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sixdof_arm_interfaces__srv__ResetArm_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sixdof_arm_interfaces__srv__ResetArm_Response__rosidl_typesupport_introspection_c__ResetArm_Response_message_members = {
  "sixdof_arm_interfaces__srv",  // message namespace
  "ResetArm_Response",  // message name
  1,  // number of fields
  sizeof(sixdof_arm_interfaces__srv__ResetArm_Response),
  sixdof_arm_interfaces__srv__ResetArm_Response__rosidl_typesupport_introspection_c__ResetArm_Response_message_member_array,  // message members
  sixdof_arm_interfaces__srv__ResetArm_Response__rosidl_typesupport_introspection_c__ResetArm_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  sixdof_arm_interfaces__srv__ResetArm_Response__rosidl_typesupport_introspection_c__ResetArm_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sixdof_arm_interfaces__srv__ResetArm_Response__rosidl_typesupport_introspection_c__ResetArm_Response_message_type_support_handle = {
  0,
  &sixdof_arm_interfaces__srv__ResetArm_Response__rosidl_typesupport_introspection_c__ResetArm_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sixdof_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, srv, ResetArm_Response)() {
  if (!sixdof_arm_interfaces__srv__ResetArm_Response__rosidl_typesupport_introspection_c__ResetArm_Response_message_type_support_handle.typesupport_identifier) {
    sixdof_arm_interfaces__srv__ResetArm_Response__rosidl_typesupport_introspection_c__ResetArm_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sixdof_arm_interfaces__srv__ResetArm_Response__rosidl_typesupport_introspection_c__ResetArm_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sixdof_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "sixdof_arm_interfaces/srv/detail/reset_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers sixdof_arm_interfaces__srv__detail__reset_arm__rosidl_typesupport_introspection_c__ResetArm_service_members = {
  "sixdof_arm_interfaces__srv",  // service namespace
  "ResetArm",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // sixdof_arm_interfaces__srv__detail__reset_arm__rosidl_typesupport_introspection_c__ResetArm_Request_message_type_support_handle,
  NULL  // response message
  // sixdof_arm_interfaces__srv__detail__reset_arm__rosidl_typesupport_introspection_c__ResetArm_Response_message_type_support_handle
};

static rosidl_service_type_support_t sixdof_arm_interfaces__srv__detail__reset_arm__rosidl_typesupport_introspection_c__ResetArm_service_type_support_handle = {
  0,
  &sixdof_arm_interfaces__srv__detail__reset_arm__rosidl_typesupport_introspection_c__ResetArm_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, srv, ResetArm_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, srv, ResetArm_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sixdof_arm_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, srv, ResetArm)() {
  if (!sixdof_arm_interfaces__srv__detail__reset_arm__rosidl_typesupport_introspection_c__ResetArm_service_type_support_handle.typesupport_identifier) {
    sixdof_arm_interfaces__srv__detail__reset_arm__rosidl_typesupport_introspection_c__ResetArm_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)sixdof_arm_interfaces__srv__detail__reset_arm__rosidl_typesupport_introspection_c__ResetArm_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, srv, ResetArm_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sixdof_arm_interfaces, srv, ResetArm_Response)()->data;
  }

  return &sixdof_arm_interfaces__srv__detail__reset_arm__rosidl_typesupport_introspection_c__ResetArm_service_type_support_handle;
}
