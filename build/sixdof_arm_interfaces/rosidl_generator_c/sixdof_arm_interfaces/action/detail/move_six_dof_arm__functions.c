// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sixdof_arm_interfaces:action/MoveSixDofArm.idl
// generated code does not contain a copyright notice
#include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `current_position`
// Member `velocities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__init(sixdof_arm_interfaces__action__MoveSixDofArm_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 0)) {
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__fini(msg);
    return false;
  }
  // current_position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->current_position, 0)) {
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__fini(msg);
    return false;
  }
  // velocities
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocities, 0)) {
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__fini(msg);
    return false;
  }
  // duration
  // reset
  return true;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__fini(sixdof_arm_interfaces__action__MoveSixDofArm_Goal * msg)
{
  if (!msg) {
    return;
  }
  // joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_names);
  // current_position
  rosidl_runtime_c__double__Sequence__fini(&msg->current_position);
  // velocities
  rosidl_runtime_c__double__Sequence__fini(&msg->velocities);
  // duration
  // reset
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_Goal * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->joint_names), &(rhs->joint_names)))
  {
    return false;
  }
  // current_position
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->current_position), &(rhs->current_position)))
  {
    return false;
  }
  // velocities
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->velocities), &(rhs->velocities)))
  {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  // reset
  if (lhs->reset != rhs->reset) {
    return false;
  }
  return true;
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_Goal * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->joint_names), &(output->joint_names)))
  {
    return false;
  }
  // current_position
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->current_position), &(output->current_position)))
  {
    return false;
  }
  // velocities
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->velocities), &(output->velocities)))
  {
    return false;
  }
  // duration
  output->duration = input->duration;
  // reset
  output->reset = input->reset;
  return true;
}

sixdof_arm_interfaces__action__MoveSixDofArm_Goal *
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_Goal * msg = (sixdof_arm_interfaces__action__MoveSixDofArm_Goal *)allocator.allocate(sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Goal));
  bool success = sixdof_arm_interfaces__action__MoveSixDofArm_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence__init(sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_Goal * data = NULL;

  if (size) {
    data = (sixdof_arm_interfaces__action__MoveSixDofArm_Goal *)allocator.zero_allocate(size, sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sixdof_arm_interfaces__action__MoveSixDofArm_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sixdof_arm_interfaces__action__MoveSixDofArm_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence__fini(sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sixdof_arm_interfaces__action__MoveSixDofArm_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence *
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence * array = (sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence *)allocator.allocate(sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sixdof_arm_interfaces__action__MoveSixDofArm_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sixdof_arm_interfaces__action__MoveSixDofArm_Goal * data =
      (sixdof_arm_interfaces__action__MoveSixDofArm_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sixdof_arm_interfaces__action__MoveSixDofArm_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sixdof_arm_interfaces__action__MoveSixDofArm_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sixdof_arm_interfaces__action__MoveSixDofArm_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
sixdof_arm_interfaces__action__MoveSixDofArm_Result__init(sixdof_arm_interfaces__action__MoveSixDofArm_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_Result__fini(sixdof_arm_interfaces__action__MoveSixDofArm_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_Result__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_Result * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_Result__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_Result * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

sixdof_arm_interfaces__action__MoveSixDofArm_Result *
sixdof_arm_interfaces__action__MoveSixDofArm_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_Result * msg = (sixdof_arm_interfaces__action__MoveSixDofArm_Result *)allocator.allocate(sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Result));
  bool success = sixdof_arm_interfaces__action__MoveSixDofArm_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_Result__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sixdof_arm_interfaces__action__MoveSixDofArm_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence__init(sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_Result * data = NULL;

  if (size) {
    data = (sixdof_arm_interfaces__action__MoveSixDofArm_Result *)allocator.zero_allocate(size, sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sixdof_arm_interfaces__action__MoveSixDofArm_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sixdof_arm_interfaces__action__MoveSixDofArm_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence__fini(sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sixdof_arm_interfaces__action__MoveSixDofArm_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence *
sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence * array = (sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence *)allocator.allocate(sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sixdof_arm_interfaces__action__MoveSixDofArm_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sixdof_arm_interfaces__action__MoveSixDofArm_Result * data =
      (sixdof_arm_interfaces__action__MoveSixDofArm_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sixdof_arm_interfaces__action__MoveSixDofArm_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sixdof_arm_interfaces__action__MoveSixDofArm_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sixdof_arm_interfaces__action__MoveSixDofArm_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_position`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__init(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->current_position, 0)) {
    sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__fini(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_position
  rosidl_runtime_c__double__Sequence__fini(&msg->current_position);
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_position
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->current_position), &(rhs->current_position)))
  {
    return false;
  }
  return true;
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_position
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->current_position), &(output->current_position)))
  {
    return false;
  }
  return true;
}

sixdof_arm_interfaces__action__MoveSixDofArm_Feedback *
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * msg = (sixdof_arm_interfaces__action__MoveSixDofArm_Feedback *)allocator.allocate(sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback));
  bool success = sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence__init(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * data = NULL;

  if (size) {
    data = (sixdof_arm_interfaces__action__MoveSixDofArm_Feedback *)allocator.zero_allocate(size, sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence__fini(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence *
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence * array = (sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence *)allocator.allocate(sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sixdof_arm_interfaces__action__MoveSixDofArm_Feedback * data =
      (sixdof_arm_interfaces__action__MoveSixDofArm_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__functions.h"

bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__init(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!sixdof_arm_interfaces__action__MoveSixDofArm_Goal__init(&msg->goal)) {
    sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__fini(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  sixdof_arm_interfaces__action__MoveSixDofArm_Goal__fini(&msg->goal);
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!sixdof_arm_interfaces__action__MoveSixDofArm_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!sixdof_arm_interfaces__action__MoveSixDofArm_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request *
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * msg = (sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request *)allocator.allocate(sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request));
  bool success = sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence__init(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * data = NULL;

  if (size) {
    data = (sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request *)allocator.zero_allocate(size, sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence__fini(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence *
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence * array = (sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence *)allocator.allocate(sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request * data =
      (sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__init(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__fini(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response *
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * msg = (sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response *)allocator.allocate(sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response));
  bool success = sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence__init(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * data = NULL;

  if (size) {
    data = (sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response *)allocator.zero_allocate(size, sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence__fini(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence *
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence * array = (sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence *)allocator.allocate(sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response * data =
      (sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sixdof_arm_interfaces__action__MoveSixDofArm_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__init(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__fini(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request *
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * msg = (sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request *)allocator.allocate(sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request));
  bool success = sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence__init(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * data = NULL;

  if (size) {
    data = (sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request *)allocator.zero_allocate(size, sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence__fini(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence *
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence * array = (sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence *)allocator.allocate(sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request * data =
      (sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__functions.h"

bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__init(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!sixdof_arm_interfaces__action__MoveSixDofArm_Result__init(&msg->result)) {
    sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__fini(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  sixdof_arm_interfaces__action__MoveSixDofArm_Result__fini(&msg->result);
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!sixdof_arm_interfaces__action__MoveSixDofArm_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!sixdof_arm_interfaces__action__MoveSixDofArm_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response *
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * msg = (sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response *)allocator.allocate(sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response));
  bool success = sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence__init(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * data = NULL;

  if (size) {
    data = (sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response *)allocator.zero_allocate(size, sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence__fini(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence *
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence * array = (sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence *)allocator.allocate(sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response * data =
      (sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sixdof_arm_interfaces__action__MoveSixDofArm_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "sixdof_arm_interfaces/action/detail/move_six_dof_arm__functions.h"

bool
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__init(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__init(&msg->feedback)) {
    sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__fini(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__fini(&msg->feedback);
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!sixdof_arm_interfaces__action__MoveSixDofArm_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage *
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * msg = (sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage *)allocator.allocate(sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage));
  bool success = sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence__init(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * data = NULL;

  if (size) {
    data = (sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage *)allocator.zero_allocate(size, sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence__fini(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence *
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence * array = (sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence *)allocator.allocate(sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence__destroy(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence__are_equal(const sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence * lhs, const sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence__copy(
  const sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence * input,
  sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage * data =
      (sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sixdof_arm_interfaces__action__MoveSixDofArm_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
