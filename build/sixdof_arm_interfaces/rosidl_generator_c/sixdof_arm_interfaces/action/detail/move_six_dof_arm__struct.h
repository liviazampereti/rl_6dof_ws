// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sixdof_arm_interfaces:action/MoveSixDofArm.idl
// generated code does not contain a copyright notice

#ifndef SIXDOF_ARM_INTERFACES__ACTION__DETAIL__MOVE_SIX_DOF_ARM__STRUCT_H_
#define SIXDOF_ARM_INTERFACES__ACTION__DETAIL__MOVE_SIX_DOF_ARM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_names'
#include "rosidl_runtime_c/string.h"
// Member 'current_position'
// Member 'velocities'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/MoveSixDofArm in the package sixdof_arm_interfaces.
typedef struct sixdof_arm_interfaces__action__MoveSixDofArm_Goal
{
  rosidl_runtime_c__String__Sequence joint_names;
  rosidl_runtime_c__double__Sequence current_position;
  rosidl_runtime_c__double__Sequence velocities;
  double duration;
  bool reset;
} sixdof_arm_interfaces__action__MoveSixDofArm_Goal;

// Struct for a sequence of sixdof_arm_interfaces__action__MoveSixDofArm_Goal.
typedef struct sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence
{
  sixdof_arm_interfaces__action__MoveSixDofArm_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveSixDofArm in the package sixdof_arm_interfaces.
typedef struct sixdof_arm_interfaces__action__MoveSixDofArm_Result
{
  bool success;
} sixdof_arm_interfaces__action__MoveSixDofArm_Result;

// Struct for a sequence of sixdof_arm_interfaces__action__MoveSixDofArm_Result.
typedef struct sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence
{
  sixdof_arm_interfaces__action__MoveSixDofArm_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_position'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/MoveSixDofArm in the package sixdof_arm_interfaces.
typedef struct sixdof_arm_interfaces__action__MoveSixDofArm_Feedback
{
  rosidl_runtime_c__double__Sequence current_position;
  int64_t reward;
  bool done;
} sixdof_arm_interfaces__action__MoveSixDofArm_Feedback;

// Struct for a sequence of sixdof_arm_interfaces__action__MoveSixDofArm_Feedback.
typedef struct sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence
{
  sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.h"

/// Struct defined in action/MoveSixDofArm in the package sixdof_arm_interfaces.
typedef struct sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  sixdof_arm_interfaces__action__MoveSixDofArm_Goal goal;
} sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request;

// Struct for a sequence of sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request.
typedef struct sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence
{
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveSixDofArm in the package sixdof_arm_interfaces.
typedef struct sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response;

// Struct for a sequence of sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response.
typedef struct sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence
{
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveSixDofArm in the package sixdof_arm_interfaces.
typedef struct sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request;

// Struct for a sequence of sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request.
typedef struct sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence
{
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.h"

/// Struct defined in action/MoveSixDofArm in the package sixdof_arm_interfaces.
typedef struct sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response
{
  int8_t status;
  sixdof_arm_interfaces__action__MoveSixDofArm_Result result;
} sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response;

// Struct for a sequence of sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response.
typedef struct sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence
{
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.h"

/// Struct defined in action/MoveSixDofArm in the package sixdof_arm_interfaces.
typedef struct sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  sixdof_arm_interfaces__action__MoveSixDofArm_Feedback feedback;
} sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage;

// Struct for a sequence of sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage.
typedef struct sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence
{
  sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIXDOF_ARM_INTERFACES__ACTION__DETAIL__MOVE_SIX_DOF_ARM__STRUCT_H_
