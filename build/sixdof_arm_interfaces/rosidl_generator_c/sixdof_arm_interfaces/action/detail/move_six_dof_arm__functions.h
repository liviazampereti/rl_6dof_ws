// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sixdof_arm_interfaces:action/MoveSixDofArm.idl
// generated code does not contain a copyright notice

#ifndef SIXDOF_ARM_INTERFACES__ACTION__DETAIL__MOVE_SIX_DOF_ARM__FUNCTIONS_H_
#define SIXDOF_ARM_INTERFACES__ACTION__DETAIL__MOVE_SIX_DOF_ARM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sixdof_arm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__struct.h"

/// Initialize action/MoveSixDofArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sixdof_arm_interfaces__action__MoveSixDofArm_Goal
 * )) before or use
 * sixdof_arm_interfaces__action__MoveSixDofArm_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__init(sixdof_arm_interfaces__action__MoveSixDofArm_Goal * msg);

/// Finalize action/MoveSixDofArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__fini(sixdof_arm_interfaces__action__MoveSixDofArm_Goal * msg);

/// Create action/MoveSixDofArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
sixdof_arm_interfaces__action__MoveSixDofArm_Goal *
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__create();

/// Destroy action/MoveSixDofArm message.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_Goal * msg);

/// Check for action/MoveSixDofArm message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_Goal * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_Goal * rhs);

/// Copy a action/MoveSixDofArm message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_Goal * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_Goal * output);

/// Initialize array of action/MoveSixDofArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence__init(sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence * array, size_t size);

/// Finalize array of action/MoveSixDofArm messages.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence__fini(sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence * array);

/// Create array of action/MoveSixDofArm messages.
/**
 * It allocates the memory for the array and calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence *
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence__create(size_t size);

/// Destroy array of action/MoveSixDofArm messages.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence * array);

/// Check for action/MoveSixDofArm message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence * rhs);

/// Copy an array of action/MoveSixDofArm messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence * output);

/// Initialize action/MoveSixDofArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sixdof_arm_interfaces__action__MoveSixDofArm_Result
 * )) before or use
 * sixdof_arm_interfaces__action__MoveSixDofArm_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Result__init(sixdof_arm_interfaces__action__MoveSixDofArm_Result * msg);

/// Finalize action/MoveSixDofArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_Result__fini(sixdof_arm_interfaces__action__MoveSixDofArm_Result * msg);

/// Create action/MoveSixDofArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
sixdof_arm_interfaces__action__MoveSixDofArm_Result *
sixdof_arm_interfaces__action__MoveSixDofArm_Result__create();

/// Destroy action/MoveSixDofArm message.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_Result__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_Result * msg);

/// Check for action/MoveSixDofArm message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Result__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_Result * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_Result * rhs);

/// Copy a action/MoveSixDofArm message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Result__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_Result * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_Result * output);

/// Initialize array of action/MoveSixDofArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence__init(sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence * array, size_t size);

/// Finalize array of action/MoveSixDofArm messages.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence__fini(sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence * array);

/// Create array of action/MoveSixDofArm messages.
/**
 * It allocates the memory for the array and calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence *
sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence__create(size_t size);

/// Destroy array of action/MoveSixDofArm messages.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence * array);

/// Check for action/MoveSixDofArm message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence * rhs);

/// Copy an array of action/MoveSixDofArm messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence * output);

/// Initialize action/MoveSixDofArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sixdof_arm_interfaces__action__MoveSixDofArm_Feedback
 * )) before or use
 * sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__init(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * msg);

/// Finalize action/MoveSixDofArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__fini(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * msg);

/// Create action/MoveSixDofArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback *
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__create();

/// Destroy action/MoveSixDofArm message.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * msg);

/// Check for action/MoveSixDofArm message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * rhs);

/// Copy a action/MoveSixDofArm message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * output);

/// Initialize array of action/MoveSixDofArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence__init(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MoveSixDofArm messages.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence__fini(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence * array);

/// Create array of action/MoveSixDofArm messages.
/**
 * It allocates the memory for the array and calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence *
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MoveSixDofArm messages.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence * array);

/// Check for action/MoveSixDofArm message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence * rhs);

/// Copy an array of action/MoveSixDofArm messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence * output);

/// Initialize action/MoveSixDofArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request
 * )) before or use
 * sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__init(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * msg);

/// Finalize action/MoveSixDofArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__fini(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * msg);

/// Create action/MoveSixDofArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request *
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__create();

/// Destroy action/MoveSixDofArm message.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * msg);

/// Check for action/MoveSixDofArm message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * rhs);

/// Copy a action/MoveSixDofArm message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * output);

/// Initialize array of action/MoveSixDofArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence__init(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveSixDofArm messages.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence__fini(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence * array);

/// Create array of action/MoveSixDofArm messages.
/**
 * It allocates the memory for the array and calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence *
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveSixDofArm messages.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence * array);

/// Check for action/MoveSixDofArm message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/MoveSixDofArm messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence * output);

/// Initialize action/MoveSixDofArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response
 * )) before or use
 * sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__init(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * msg);

/// Finalize action/MoveSixDofArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__fini(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * msg);

/// Create action/MoveSixDofArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response *
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__create();

/// Destroy action/MoveSixDofArm message.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * msg);

/// Check for action/MoveSixDofArm message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * rhs);

/// Copy a action/MoveSixDofArm message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * output);

/// Initialize array of action/MoveSixDofArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence__init(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveSixDofArm messages.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence__fini(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence * array);

/// Create array of action/MoveSixDofArm messages.
/**
 * It allocates the memory for the array and calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence *
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveSixDofArm messages.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence * array);

/// Check for action/MoveSixDofArm message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/MoveSixDofArm messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence * output);

/// Initialize action/MoveSixDofArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request
 * )) before or use
 * sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__init(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * msg);

/// Finalize action/MoveSixDofArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__fini(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * msg);

/// Create action/MoveSixDofArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request *
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__create();

/// Destroy action/MoveSixDofArm message.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * msg);

/// Check for action/MoveSixDofArm message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * rhs);

/// Copy a action/MoveSixDofArm message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * output);

/// Initialize array of action/MoveSixDofArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence__init(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveSixDofArm messages.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence__fini(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence * array);

/// Create array of action/MoveSixDofArm messages.
/**
 * It allocates the memory for the array and calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence *
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveSixDofArm messages.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence * array);

/// Check for action/MoveSixDofArm message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence * rhs);

/// Copy an array of action/MoveSixDofArm messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence * output);

/// Initialize action/MoveSixDofArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response
 * )) before or use
 * sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__init(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * msg);

/// Finalize action/MoveSixDofArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__fini(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * msg);

/// Create action/MoveSixDofArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response *
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__create();

/// Destroy action/MoveSixDofArm message.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * msg);

/// Check for action/MoveSixDofArm message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * rhs);

/// Copy a action/MoveSixDofArm message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * output);

/// Initialize array of action/MoveSixDofArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence__init(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveSixDofArm messages.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence__fini(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence * array);

/// Create array of action/MoveSixDofArm messages.
/**
 * It allocates the memory for the array and calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence *
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveSixDofArm messages.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence * array);

/// Check for action/MoveSixDofArm message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence * rhs);

/// Copy an array of action/MoveSixDofArm messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence * output);

/// Initialize action/MoveSixDofArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage
 * )) before or use
 * sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__init(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * msg);

/// Finalize action/MoveSixDofArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__fini(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * msg);

/// Create action/MoveSixDofArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage *
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__create();

/// Destroy action/MoveSixDofArm message.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * msg);

/// Check for action/MoveSixDofArm message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * rhs);

/// Copy a action/MoveSixDofArm message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * output);

/// Initialize array of action/MoveSixDofArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence__init(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MoveSixDofArm messages.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence__fini(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence * array);

/// Create array of action/MoveSixDofArm messages.
/**
 * It allocates the memory for the array and calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence *
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MoveSixDofArm messages.
/**
 * It calls
 * sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
void
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence * array);

/// Check for action/MoveSixDofArm message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/MoveSixDofArm messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sixdof_arm_interfaces
bool
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SIXDOF_ARM_INTERFACES__ACTION__DETAIL__MOVE_SIX_DOF_ARM__FUNCTIONS_H_
