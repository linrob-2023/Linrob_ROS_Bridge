// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hardware_interface_linrob_package:srv/Power.idl
// generated code does not contain a copyright notice
#include "hardware_interface_linrob_package/srv/detail/power__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
hardware_interface_linrob_package__srv__Power_Request__init(hardware_interface_linrob_package__srv__Power_Request * msg)
{
  if (!msg) {
    return false;
  }
  // activate
  return true;
}

void
hardware_interface_linrob_package__srv__Power_Request__fini(hardware_interface_linrob_package__srv__Power_Request * msg)
{
  if (!msg) {
    return;
  }
  // activate
}

bool
hardware_interface_linrob_package__srv__Power_Request__are_equal(const hardware_interface_linrob_package__srv__Power_Request * lhs, const hardware_interface_linrob_package__srv__Power_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // activate
  if (lhs->activate != rhs->activate) {
    return false;
  }
  return true;
}

bool
hardware_interface_linrob_package__srv__Power_Request__copy(
  const hardware_interface_linrob_package__srv__Power_Request * input,
  hardware_interface_linrob_package__srv__Power_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // activate
  output->activate = input->activate;
  return true;
}

hardware_interface_linrob_package__srv__Power_Request *
hardware_interface_linrob_package__srv__Power_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__srv__Power_Request * msg = (hardware_interface_linrob_package__srv__Power_Request *)allocator.allocate(sizeof(hardware_interface_linrob_package__srv__Power_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hardware_interface_linrob_package__srv__Power_Request));
  bool success = hardware_interface_linrob_package__srv__Power_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hardware_interface_linrob_package__srv__Power_Request__destroy(hardware_interface_linrob_package__srv__Power_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hardware_interface_linrob_package__srv__Power_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hardware_interface_linrob_package__srv__Power_Request__Sequence__init(hardware_interface_linrob_package__srv__Power_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__srv__Power_Request * data = NULL;

  if (size) {
    data = (hardware_interface_linrob_package__srv__Power_Request *)allocator.zero_allocate(size, sizeof(hardware_interface_linrob_package__srv__Power_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hardware_interface_linrob_package__srv__Power_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hardware_interface_linrob_package__srv__Power_Request__fini(&data[i - 1]);
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
hardware_interface_linrob_package__srv__Power_Request__Sequence__fini(hardware_interface_linrob_package__srv__Power_Request__Sequence * array)
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
      hardware_interface_linrob_package__srv__Power_Request__fini(&array->data[i]);
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

hardware_interface_linrob_package__srv__Power_Request__Sequence *
hardware_interface_linrob_package__srv__Power_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__srv__Power_Request__Sequence * array = (hardware_interface_linrob_package__srv__Power_Request__Sequence *)allocator.allocate(sizeof(hardware_interface_linrob_package__srv__Power_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hardware_interface_linrob_package__srv__Power_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hardware_interface_linrob_package__srv__Power_Request__Sequence__destroy(hardware_interface_linrob_package__srv__Power_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hardware_interface_linrob_package__srv__Power_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hardware_interface_linrob_package__srv__Power_Request__Sequence__are_equal(const hardware_interface_linrob_package__srv__Power_Request__Sequence * lhs, const hardware_interface_linrob_package__srv__Power_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hardware_interface_linrob_package__srv__Power_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hardware_interface_linrob_package__srv__Power_Request__Sequence__copy(
  const hardware_interface_linrob_package__srv__Power_Request__Sequence * input,
  hardware_interface_linrob_package__srv__Power_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hardware_interface_linrob_package__srv__Power_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hardware_interface_linrob_package__srv__Power_Request * data =
      (hardware_interface_linrob_package__srv__Power_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hardware_interface_linrob_package__srv__Power_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hardware_interface_linrob_package__srv__Power_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hardware_interface_linrob_package__srv__Power_Request__copy(
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
hardware_interface_linrob_package__srv__Power_Response__init(hardware_interface_linrob_package__srv__Power_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    hardware_interface_linrob_package__srv__Power_Response__fini(msg);
    return false;
  }
  return true;
}

void
hardware_interface_linrob_package__srv__Power_Response__fini(hardware_interface_linrob_package__srv__Power_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
hardware_interface_linrob_package__srv__Power_Response__are_equal(const hardware_interface_linrob_package__srv__Power_Response * lhs, const hardware_interface_linrob_package__srv__Power_Response * rhs)
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
hardware_interface_linrob_package__srv__Power_Response__copy(
  const hardware_interface_linrob_package__srv__Power_Response * input,
  hardware_interface_linrob_package__srv__Power_Response * output)
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

hardware_interface_linrob_package__srv__Power_Response *
hardware_interface_linrob_package__srv__Power_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__srv__Power_Response * msg = (hardware_interface_linrob_package__srv__Power_Response *)allocator.allocate(sizeof(hardware_interface_linrob_package__srv__Power_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hardware_interface_linrob_package__srv__Power_Response));
  bool success = hardware_interface_linrob_package__srv__Power_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hardware_interface_linrob_package__srv__Power_Response__destroy(hardware_interface_linrob_package__srv__Power_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hardware_interface_linrob_package__srv__Power_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hardware_interface_linrob_package__srv__Power_Response__Sequence__init(hardware_interface_linrob_package__srv__Power_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__srv__Power_Response * data = NULL;

  if (size) {
    data = (hardware_interface_linrob_package__srv__Power_Response *)allocator.zero_allocate(size, sizeof(hardware_interface_linrob_package__srv__Power_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hardware_interface_linrob_package__srv__Power_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hardware_interface_linrob_package__srv__Power_Response__fini(&data[i - 1]);
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
hardware_interface_linrob_package__srv__Power_Response__Sequence__fini(hardware_interface_linrob_package__srv__Power_Response__Sequence * array)
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
      hardware_interface_linrob_package__srv__Power_Response__fini(&array->data[i]);
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

hardware_interface_linrob_package__srv__Power_Response__Sequence *
hardware_interface_linrob_package__srv__Power_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__srv__Power_Response__Sequence * array = (hardware_interface_linrob_package__srv__Power_Response__Sequence *)allocator.allocate(sizeof(hardware_interface_linrob_package__srv__Power_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hardware_interface_linrob_package__srv__Power_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hardware_interface_linrob_package__srv__Power_Response__Sequence__destroy(hardware_interface_linrob_package__srv__Power_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hardware_interface_linrob_package__srv__Power_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hardware_interface_linrob_package__srv__Power_Response__Sequence__are_equal(const hardware_interface_linrob_package__srv__Power_Response__Sequence * lhs, const hardware_interface_linrob_package__srv__Power_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hardware_interface_linrob_package__srv__Power_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hardware_interface_linrob_package__srv__Power_Response__Sequence__copy(
  const hardware_interface_linrob_package__srv__Power_Response__Sequence * input,
  hardware_interface_linrob_package__srv__Power_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hardware_interface_linrob_package__srv__Power_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hardware_interface_linrob_package__srv__Power_Response * data =
      (hardware_interface_linrob_package__srv__Power_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hardware_interface_linrob_package__srv__Power_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hardware_interface_linrob_package__srv__Power_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hardware_interface_linrob_package__srv__Power_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
