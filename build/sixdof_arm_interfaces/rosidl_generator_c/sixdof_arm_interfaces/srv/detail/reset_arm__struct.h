// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sixdof_arm_interfaces:srv/ResetArm.idl
// generated code does not contain a copyright notice

#ifndef SIXDOF_ARM_INTERFACES__SRV__DETAIL__RESET_ARM__STRUCT_H_
#define SIXDOF_ARM_INTERFACES__SRV__DETAIL__RESET_ARM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'positions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/ResetArm in the package sixdof_arm_interfaces.
typedef struct sixdof_arm_interfaces__srv__ResetArm_Request
{
  rosidl_runtime_c__double__Sequence positions;
} sixdof_arm_interfaces__srv__ResetArm_Request;

// Struct for a sequence of sixdof_arm_interfaces__srv__ResetArm_Request.
typedef struct sixdof_arm_interfaces__srv__ResetArm_Request__Sequence
{
  sixdof_arm_interfaces__srv__ResetArm_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sixdof_arm_interfaces__srv__ResetArm_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ResetArm in the package sixdof_arm_interfaces.
typedef struct sixdof_arm_interfaces__srv__ResetArm_Response
{
  bool success;
} sixdof_arm_interfaces__srv__ResetArm_Response;

// Struct for a sequence of sixdof_arm_interfaces__srv__ResetArm_Response.
typedef struct sixdof_arm_interfaces__srv__ResetArm_Response__Sequence
{
  sixdof_arm_interfaces__srv__ResetArm_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sixdof_arm_interfaces__srv__ResetArm_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIXDOF_ARM_INTERFACES__SRV__DETAIL__RESET_ARM__STRUCT_H_
