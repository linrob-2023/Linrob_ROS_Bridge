// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hardware_interface_linrob_package:action/MoveCommand.idl
// generated code does not contain a copyright notice
#include "hardware_interface_linrob_package/action/detail/move_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
hardware_interface_linrob_package__action__MoveCommand_Goal__init(hardware_interface_linrob_package__action__MoveCommand_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // velocity
  // acceleration
  // deceleration
  return true;
}

void
hardware_interface_linrob_package__action__MoveCommand_Goal__fini(hardware_interface_linrob_package__action__MoveCommand_Goal * msg)
{
  if (!msg) {
    return;
  }
  // position
  // velocity
  // acceleration
  // deceleration
}

bool
hardware_interface_linrob_package__action__MoveCommand_Goal__are_equal(const hardware_interface_linrob_package__action__MoveCommand_Goal * lhs, const hardware_interface_linrob_package__action__MoveCommand_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  // deceleration
  if (lhs->deceleration != rhs->deceleration) {
    return false;
  }
  return true;
}

bool
hardware_interface_linrob_package__action__MoveCommand_Goal__copy(
  const hardware_interface_linrob_package__action__MoveCommand_Goal * input,
  hardware_interface_linrob_package__action__MoveCommand_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  output->position = input->position;
  // velocity
  output->velocity = input->velocity;
  // acceleration
  output->acceleration = input->acceleration;
  // deceleration
  output->deceleration = input->deceleration;
  return true;
}

hardware_interface_linrob_package__action__MoveCommand_Goal *
hardware_interface_linrob_package__action__MoveCommand_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_Goal * msg = (hardware_interface_linrob_package__action__MoveCommand_Goal *)allocator.allocate(sizeof(hardware_interface_linrob_package__action__MoveCommand_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hardware_interface_linrob_package__action__MoveCommand_Goal));
  bool success = hardware_interface_linrob_package__action__MoveCommand_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hardware_interface_linrob_package__action__MoveCommand_Goal__destroy(hardware_interface_linrob_package__action__MoveCommand_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hardware_interface_linrob_package__action__MoveCommand_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence__init(hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_Goal * data = NULL;

  if (size) {
    data = (hardware_interface_linrob_package__action__MoveCommand_Goal *)allocator.zero_allocate(size, sizeof(hardware_interface_linrob_package__action__MoveCommand_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hardware_interface_linrob_package__action__MoveCommand_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hardware_interface_linrob_package__action__MoveCommand_Goal__fini(&data[i - 1]);
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
hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence__fini(hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence * array)
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
      hardware_interface_linrob_package__action__MoveCommand_Goal__fini(&array->data[i]);
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

hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence *
hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence * array = (hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence *)allocator.allocate(sizeof(hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence__destroy(hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence * lhs, const hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hardware_interface_linrob_package__action__MoveCommand_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence * input,
  hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hardware_interface_linrob_package__action__MoveCommand_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hardware_interface_linrob_package__action__MoveCommand_Goal * data =
      (hardware_interface_linrob_package__action__MoveCommand_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hardware_interface_linrob_package__action__MoveCommand_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hardware_interface_linrob_package__action__MoveCommand_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hardware_interface_linrob_package__action__MoveCommand_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
hardware_interface_linrob_package__action__MoveCommand_Result__init(hardware_interface_linrob_package__action__MoveCommand_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    hardware_interface_linrob_package__action__MoveCommand_Result__fini(msg);
    return false;
  }
  return true;
}

void
hardware_interface_linrob_package__action__MoveCommand_Result__fini(hardware_interface_linrob_package__action__MoveCommand_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
hardware_interface_linrob_package__action__MoveCommand_Result__are_equal(const hardware_interface_linrob_package__action__MoveCommand_Result * lhs, const hardware_interface_linrob_package__action__MoveCommand_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
hardware_interface_linrob_package__action__MoveCommand_Result__copy(
  const hardware_interface_linrob_package__action__MoveCommand_Result * input,
  hardware_interface_linrob_package__action__MoveCommand_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

hardware_interface_linrob_package__action__MoveCommand_Result *
hardware_interface_linrob_package__action__MoveCommand_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_Result * msg = (hardware_interface_linrob_package__action__MoveCommand_Result *)allocator.allocate(sizeof(hardware_interface_linrob_package__action__MoveCommand_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hardware_interface_linrob_package__action__MoveCommand_Result));
  bool success = hardware_interface_linrob_package__action__MoveCommand_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hardware_interface_linrob_package__action__MoveCommand_Result__destroy(hardware_interface_linrob_package__action__MoveCommand_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hardware_interface_linrob_package__action__MoveCommand_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hardware_interface_linrob_package__action__MoveCommand_Result__Sequence__init(hardware_interface_linrob_package__action__MoveCommand_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_Result * data = NULL;

  if (size) {
    data = (hardware_interface_linrob_package__action__MoveCommand_Result *)allocator.zero_allocate(size, sizeof(hardware_interface_linrob_package__action__MoveCommand_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hardware_interface_linrob_package__action__MoveCommand_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hardware_interface_linrob_package__action__MoveCommand_Result__fini(&data[i - 1]);
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
hardware_interface_linrob_package__action__MoveCommand_Result__Sequence__fini(hardware_interface_linrob_package__action__MoveCommand_Result__Sequence * array)
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
      hardware_interface_linrob_package__action__MoveCommand_Result__fini(&array->data[i]);
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

hardware_interface_linrob_package__action__MoveCommand_Result__Sequence *
hardware_interface_linrob_package__action__MoveCommand_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_Result__Sequence * array = (hardware_interface_linrob_package__action__MoveCommand_Result__Sequence *)allocator.allocate(sizeof(hardware_interface_linrob_package__action__MoveCommand_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hardware_interface_linrob_package__action__MoveCommand_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hardware_interface_linrob_package__action__MoveCommand_Result__Sequence__destroy(hardware_interface_linrob_package__action__MoveCommand_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hardware_interface_linrob_package__action__MoveCommand_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hardware_interface_linrob_package__action__MoveCommand_Result__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveCommand_Result__Sequence * lhs, const hardware_interface_linrob_package__action__MoveCommand_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hardware_interface_linrob_package__action__MoveCommand_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hardware_interface_linrob_package__action__MoveCommand_Result__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveCommand_Result__Sequence * input,
  hardware_interface_linrob_package__action__MoveCommand_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hardware_interface_linrob_package__action__MoveCommand_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hardware_interface_linrob_package__action__MoveCommand_Result * data =
      (hardware_interface_linrob_package__action__MoveCommand_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hardware_interface_linrob_package__action__MoveCommand_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hardware_interface_linrob_package__action__MoveCommand_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hardware_interface_linrob_package__action__MoveCommand_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
hardware_interface_linrob_package__action__MoveCommand_Feedback__init(hardware_interface_linrob_package__action__MoveCommand_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_position
  return true;
}

void
hardware_interface_linrob_package__action__MoveCommand_Feedback__fini(hardware_interface_linrob_package__action__MoveCommand_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_position
}

bool
hardware_interface_linrob_package__action__MoveCommand_Feedback__are_equal(const hardware_interface_linrob_package__action__MoveCommand_Feedback * lhs, const hardware_interface_linrob_package__action__MoveCommand_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_position
  if (lhs->current_position != rhs->current_position) {
    return false;
  }
  return true;
}

bool
hardware_interface_linrob_package__action__MoveCommand_Feedback__copy(
  const hardware_interface_linrob_package__action__MoveCommand_Feedback * input,
  hardware_interface_linrob_package__action__MoveCommand_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_position
  output->current_position = input->current_position;
  return true;
}

hardware_interface_linrob_package__action__MoveCommand_Feedback *
hardware_interface_linrob_package__action__MoveCommand_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_Feedback * msg = (hardware_interface_linrob_package__action__MoveCommand_Feedback *)allocator.allocate(sizeof(hardware_interface_linrob_package__action__MoveCommand_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hardware_interface_linrob_package__action__MoveCommand_Feedback));
  bool success = hardware_interface_linrob_package__action__MoveCommand_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hardware_interface_linrob_package__action__MoveCommand_Feedback__destroy(hardware_interface_linrob_package__action__MoveCommand_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hardware_interface_linrob_package__action__MoveCommand_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence__init(hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_Feedback * data = NULL;

  if (size) {
    data = (hardware_interface_linrob_package__action__MoveCommand_Feedback *)allocator.zero_allocate(size, sizeof(hardware_interface_linrob_package__action__MoveCommand_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hardware_interface_linrob_package__action__MoveCommand_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hardware_interface_linrob_package__action__MoveCommand_Feedback__fini(&data[i - 1]);
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
hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence__fini(hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence * array)
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
      hardware_interface_linrob_package__action__MoveCommand_Feedback__fini(&array->data[i]);
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

hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence *
hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence * array = (hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence *)allocator.allocate(sizeof(hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence__destroy(hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence * lhs, const hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hardware_interface_linrob_package__action__MoveCommand_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence * input,
  hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hardware_interface_linrob_package__action__MoveCommand_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hardware_interface_linrob_package__action__MoveCommand_Feedback * data =
      (hardware_interface_linrob_package__action__MoveCommand_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hardware_interface_linrob_package__action__MoveCommand_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hardware_interface_linrob_package__action__MoveCommand_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hardware_interface_linrob_package__action__MoveCommand_Feedback__copy(
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
// #include "hardware_interface_linrob_package/action/detail/move_command__functions.h"

bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__init(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!hardware_interface_linrob_package__action__MoveCommand_Goal__init(&msg->goal)) {
    hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__fini(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  hardware_interface_linrob_package__action__MoveCommand_Goal__fini(&msg->goal);
}

bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__are_equal(const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * lhs, const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * rhs)
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
  if (!hardware_interface_linrob_package__action__MoveCommand_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__copy(
  const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * input,
  hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * output)
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
  if (!hardware_interface_linrob_package__action__MoveCommand_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request *
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * msg = (hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request *)allocator.allocate(sizeof(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request));
  bool success = hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__destroy(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence__init(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * data = NULL;

  if (size) {
    data = (hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request *)allocator.zero_allocate(size, sizeof(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__fini(&data[i - 1]);
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
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence__fini(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence * array)
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
      hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__fini(&array->data[i]);
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

hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence *
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence * array = (hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence *)allocator.allocate(sizeof(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence__destroy(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence * lhs, const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence * input,
  hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * data =
      (hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__copy(
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
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__init(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__fini(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__are_equal(const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * lhs, const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * rhs)
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
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__copy(
  const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * input,
  hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * output)
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

hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response *
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * msg = (hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response *)allocator.allocate(sizeof(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response));
  bool success = hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__destroy(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence__init(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * data = NULL;

  if (size) {
    data = (hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response *)allocator.zero_allocate(size, sizeof(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__fini(&data[i - 1]);
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
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence__fini(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence * array)
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
      hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__fini(&array->data[i]);
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

hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence *
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence * array = (hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence *)allocator.allocate(sizeof(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence__destroy(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence * lhs, const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence * input,
  hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * data =
      (hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__copy(
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
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__init(hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__fini(hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__are_equal(const hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * lhs, const hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * rhs)
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
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__copy(
  const hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * input,
  hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * output)
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

hardware_interface_linrob_package__action__MoveCommand_GetResult_Request *
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * msg = (hardware_interface_linrob_package__action__MoveCommand_GetResult_Request *)allocator.allocate(sizeof(hardware_interface_linrob_package__action__MoveCommand_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hardware_interface_linrob_package__action__MoveCommand_GetResult_Request));
  bool success = hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__destroy(hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence__init(hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * data = NULL;

  if (size) {
    data = (hardware_interface_linrob_package__action__MoveCommand_GetResult_Request *)allocator.zero_allocate(size, sizeof(hardware_interface_linrob_package__action__MoveCommand_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__fini(&data[i - 1]);
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
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence__fini(hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence * array)
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
      hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__fini(&array->data[i]);
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

hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence *
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence * array = (hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence *)allocator.allocate(sizeof(hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence__destroy(hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence * lhs, const hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence * input,
  hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hardware_interface_linrob_package__action__MoveCommand_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * data =
      (hardware_interface_linrob_package__action__MoveCommand_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__copy(
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
// #include "hardware_interface_linrob_package/action/detail/move_command__functions.h"

bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__init(hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!hardware_interface_linrob_package__action__MoveCommand_Result__init(&msg->result)) {
    hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__fini(hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  hardware_interface_linrob_package__action__MoveCommand_Result__fini(&msg->result);
}

bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__are_equal(const hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * lhs, const hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!hardware_interface_linrob_package__action__MoveCommand_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__copy(
  const hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * input,
  hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!hardware_interface_linrob_package__action__MoveCommand_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

hardware_interface_linrob_package__action__MoveCommand_GetResult_Response *
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * msg = (hardware_interface_linrob_package__action__MoveCommand_GetResult_Response *)allocator.allocate(sizeof(hardware_interface_linrob_package__action__MoveCommand_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hardware_interface_linrob_package__action__MoveCommand_GetResult_Response));
  bool success = hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__destroy(hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence__init(hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * data = NULL;

  if (size) {
    data = (hardware_interface_linrob_package__action__MoveCommand_GetResult_Response *)allocator.zero_allocate(size, sizeof(hardware_interface_linrob_package__action__MoveCommand_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__fini(&data[i - 1]);
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
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence__fini(hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence * array)
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
      hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__fini(&array->data[i]);
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

hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence *
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence * array = (hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence *)allocator.allocate(sizeof(hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence__destroy(hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence * lhs, const hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence * input,
  hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hardware_interface_linrob_package__action__MoveCommand_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * data =
      (hardware_interface_linrob_package__action__MoveCommand_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__copy(
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
// #include "hardware_interface_linrob_package/action/detail/move_command__functions.h"

bool
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__init(hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!hardware_interface_linrob_package__action__MoveCommand_Feedback__init(&msg->feedback)) {
    hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__fini(hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  hardware_interface_linrob_package__action__MoveCommand_Feedback__fini(&msg->feedback);
}

bool
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__are_equal(const hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * lhs, const hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * rhs)
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
  if (!hardware_interface_linrob_package__action__MoveCommand_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__copy(
  const hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * input,
  hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * output)
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
  if (!hardware_interface_linrob_package__action__MoveCommand_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage *
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * msg = (hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage *)allocator.allocate(sizeof(hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage));
  bool success = hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__destroy(hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence__init(hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * data = NULL;

  if (size) {
    data = (hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage *)allocator.zero_allocate(size, sizeof(hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__fini(&data[i - 1]);
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
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence__fini(hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence * array)
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
      hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__fini(&array->data[i]);
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

hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence *
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence * array = (hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence *)allocator.allocate(sizeof(hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence__destroy(hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence * lhs, const hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence * input,
  hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * data =
      (hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
