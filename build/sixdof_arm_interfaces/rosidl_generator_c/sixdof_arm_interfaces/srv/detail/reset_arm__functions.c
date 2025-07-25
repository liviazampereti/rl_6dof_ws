// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sixdof_arm_interfaces:srv/ResetArm.idl
// generated code does not contain a copyright notice
#include "sixdof_arm_interfaces/srv/detail/reset_arm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
sixdof_arm_interfaces__srv__ResetArm_Request__init(sixdof_arm_interfaces__srv__ResetArm_Request * msg)
{
  if (!msg) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__init(&msg->positions, 0)) {
    sixdof_arm_interfaces__srv__ResetArm_Request__fini(msg);
    return false;
  }
  return true;
}

void
sixdof_arm_interfaces__srv__ResetArm_Request__fini(sixdof_arm_interfaces__srv__ResetArm_Request * msg)
{
  if (!msg) {
    return;
  }
  // positions
  rosidl_runtime_c__double__Sequence__fini(&msg->positions);
}

bool
sixdof_arm_interfaces__srv__ResetArm_Request__are_equal(const sixdof_arm_interfaces__srv__ResetArm_Request * lhs, const sixdof_arm_interfaces__srv__ResetArm_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->positions), &(rhs->positions)))
  {
    return false;
  }
  return true;
}

bool
sixdof_arm_interfaces__srv__ResetArm_Request__copy(
  const sixdof_arm_interfaces__srv__ResetArm_Request * input,
  sixdof_arm_interfaces__srv__ResetArm_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->positions), &(output->positions)))
  {
    return false;
  }
  return true;
}

sixdof_arm_interfaces__srv__ResetArm_Request *
sixdof_arm_interfaces__srv__ResetArm_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__srv__ResetArm_Request * msg = (sixdof_arm_interfaces__srv__ResetArm_Request *)allocator.allocate(sizeof(sixdof_arm_interfaces__srv__ResetArm_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sixdof_arm_interfaces__srv__ResetArm_Request));
  bool success = sixdof_arm_interfaces__srv__ResetArm_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sixdof_arm_interfaces__srv__ResetArm_Request__destroy(sixdof_arm_interfaces__srv__ResetArm_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sixdof_arm_interfaces__srv__ResetArm_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sixdof_arm_interfaces__srv__ResetArm_Request__Sequence__init(sixdof_arm_interfaces__srv__ResetArm_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__srv__ResetArm_Request * data = NULL;

  if (size) {
    data = (sixdof_arm_interfaces__srv__ResetArm_Request *)allocator.zero_allocate(size, sizeof(sixdof_arm_interfaces__srv__ResetArm_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sixdof_arm_interfaces__srv__ResetArm_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sixdof_arm_interfaces__srv__ResetArm_Request__fini(&data[i - 1]);
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
sixdof_arm_interfaces__srv__ResetArm_Request__Sequence__fini(sixdof_arm_interfaces__srv__ResetArm_Request__Sequence * array)
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
      sixdof_arm_interfaces__srv__ResetArm_Request__fini(&array->data[i]);
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

sixdof_arm_interfaces__srv__ResetArm_Request__Sequence *
sixdof_arm_interfaces__srv__ResetArm_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__srv__ResetArm_Request__Sequence * array = (sixdof_arm_interfaces__srv__ResetArm_Request__Sequence *)allocator.allocate(sizeof(sixdof_arm_interfaces__srv__ResetArm_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sixdof_arm_interfaces__srv__ResetArm_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sixdof_arm_interfaces__srv__ResetArm_Request__Sequence__destroy(sixdof_arm_interfaces__srv__ResetArm_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sixdof_arm_interfaces__srv__ResetArm_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sixdof_arm_interfaces__srv__ResetArm_Request__Sequence__are_equal(const sixdof_arm_interfaces__srv__ResetArm_Request__Sequence * lhs, const sixdof_arm_interfaces__srv__ResetArm_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sixdof_arm_interfaces__srv__ResetArm_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sixdof_arm_interfaces__srv__ResetArm_Request__Sequence__copy(
  const sixdof_arm_interfaces__srv__ResetArm_Request__Sequence * input,
  sixdof_arm_interfaces__srv__ResetArm_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sixdof_arm_interfaces__srv__ResetArm_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sixdof_arm_interfaces__srv__ResetArm_Request * data =
      (sixdof_arm_interfaces__srv__ResetArm_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sixdof_arm_interfaces__srv__ResetArm_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sixdof_arm_interfaces__srv__ResetArm_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sixdof_arm_interfaces__srv__ResetArm_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
sixdof_arm_interfaces__srv__ResetArm_Response__init(sixdof_arm_interfaces__srv__ResetArm_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
sixdof_arm_interfaces__srv__ResetArm_Response__fini(sixdof_arm_interfaces__srv__ResetArm_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
sixdof_arm_interfaces__srv__ResetArm_Response__are_equal(const sixdof_arm_interfaces__srv__ResetArm_Response * lhs, const sixdof_arm_interfaces__srv__ResetArm_Response * rhs)
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
sixdof_arm_interfaces__srv__ResetArm_Response__copy(
  const sixdof_arm_interfaces__srv__ResetArm_Response * input,
  sixdof_arm_interfaces__srv__ResetArm_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

sixdof_arm_interfaces__srv__ResetArm_Response *
sixdof_arm_interfaces__srv__ResetArm_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__srv__ResetArm_Response * msg = (sixdof_arm_interfaces__srv__ResetArm_Response *)allocator.allocate(sizeof(sixdof_arm_interfaces__srv__ResetArm_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sixdof_arm_interfaces__srv__ResetArm_Response));
  bool success = sixdof_arm_interfaces__srv__ResetArm_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sixdof_arm_interfaces__srv__ResetArm_Response__destroy(sixdof_arm_interfaces__srv__ResetArm_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sixdof_arm_interfaces__srv__ResetArm_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sixdof_arm_interfaces__srv__ResetArm_Response__Sequence__init(sixdof_arm_interfaces__srv__ResetArm_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__srv__ResetArm_Response * data = NULL;

  if (size) {
    data = (sixdof_arm_interfaces__srv__ResetArm_Response *)allocator.zero_allocate(size, sizeof(sixdof_arm_interfaces__srv__ResetArm_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sixdof_arm_interfaces__srv__ResetArm_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sixdof_arm_interfaces__srv__ResetArm_Response__fini(&data[i - 1]);
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
sixdof_arm_interfaces__srv__ResetArm_Response__Sequence__fini(sixdof_arm_interfaces__srv__ResetArm_Response__Sequence * array)
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
      sixdof_arm_interfaces__srv__ResetArm_Response__fini(&array->data[i]);
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

sixdof_arm_interfaces__srv__ResetArm_Response__Sequence *
sixdof_arm_interfaces__srv__ResetArm_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sixdof_arm_interfaces__srv__ResetArm_Response__Sequence * array = (sixdof_arm_interfaces__srv__ResetArm_Response__Sequence *)allocator.allocate(sizeof(sixdof_arm_interfaces__srv__ResetArm_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sixdof_arm_interfaces__srv__ResetArm_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sixdof_arm_interfaces__srv__ResetArm_Response__Sequence__destroy(sixdof_arm_interfaces__srv__ResetArm_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sixdof_arm_interfaces__srv__ResetArm_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sixdof_arm_interfaces__srv__ResetArm_Response__Sequence__are_equal(const sixdof_arm_interfaces__srv__ResetArm_Response__Sequence * lhs, const sixdof_arm_interfaces__srv__ResetArm_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sixdof_arm_interfaces__srv__ResetArm_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sixdof_arm_interfaces__srv__ResetArm_Response__Sequence__copy(
  const sixdof_arm_interfaces__srv__ResetArm_Response__Sequence * input,
  sixdof_arm_interfaces__srv__ResetArm_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sixdof_arm_interfaces__srv__ResetArm_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sixdof_arm_interfaces__srv__ResetArm_Response * data =
      (sixdof_arm_interfaces__srv__ResetArm_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sixdof_arm_interfaces__srv__ResetArm_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sixdof_arm_interfaces__srv__ResetArm_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sixdof_arm_interfaces__srv__ResetArm_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
