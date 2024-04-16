// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hardware_interface_linrob_package:msg/Feedback.idl
// generated code does not contain a copyright notice
#include "hardware_interface_linrob_package/msg/detail/feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `axis_name`
// Member `status`
// Member `state`
// Member `error_id_l1`
// Member `error_id_l2`
// Member `error_id_l3`
// Member `timestamp`
#include "rosidl_runtime_c/string_functions.h"

bool
hardware_interface_linrob_package__msg__Feedback__init(hardware_interface_linrob_package__msg__Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // axis_name
  if (!rosidl_runtime_c__String__init(&msg->axis_name)) {
    hardware_interface_linrob_package__msg__Feedback__fini(msg);
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    hardware_interface_linrob_package__msg__Feedback__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    hardware_interface_linrob_package__msg__Feedback__fini(msg);
    return false;
  }
  // error_id_l1
  if (!rosidl_runtime_c__String__init(&msg->error_id_l1)) {
    hardware_interface_linrob_package__msg__Feedback__fini(msg);
    return false;
  }
  // error_id_l2
  if (!rosidl_runtime_c__String__init(&msg->error_id_l2)) {
    hardware_interface_linrob_package__msg__Feedback__fini(msg);
    return false;
  }
  // error_id_l3
  if (!rosidl_runtime_c__String__init(&msg->error_id_l3)) {
    hardware_interface_linrob_package__msg__Feedback__fini(msg);
    return false;
  }
  // timestamp
  if (!rosidl_runtime_c__String__init(&msg->timestamp)) {
    hardware_interface_linrob_package__msg__Feedback__fini(msg);
    return false;
  }
  // position_reached
  // axis_referenced
  return true;
}

void
hardware_interface_linrob_package__msg__Feedback__fini(hardware_interface_linrob_package__msg__Feedback * msg)
{
  if (!msg) {
    return;
  }
  // axis_name
  rosidl_runtime_c__String__fini(&msg->axis_name);
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // error_id_l1
  rosidl_runtime_c__String__fini(&msg->error_id_l1);
  // error_id_l2
  rosidl_runtime_c__String__fini(&msg->error_id_l2);
  // error_id_l3
  rosidl_runtime_c__String__fini(&msg->error_id_l3);
  // timestamp
  rosidl_runtime_c__String__fini(&msg->timestamp);
  // position_reached
  // axis_referenced
}

bool
hardware_interface_linrob_package__msg__Feedback__are_equal(const hardware_interface_linrob_package__msg__Feedback * lhs, const hardware_interface_linrob_package__msg__Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // axis_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->axis_name), &(rhs->axis_name)))
  {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // error_id_l1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_id_l1), &(rhs->error_id_l1)))
  {
    return false;
  }
  // error_id_l2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_id_l2), &(rhs->error_id_l2)))
  {
    return false;
  }
  // error_id_l3
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_id_l3), &(rhs->error_id_l3)))
  {
    return false;
  }
  // timestamp
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // position_reached
  if (lhs->position_reached != rhs->position_reached) {
    return false;
  }
  // axis_referenced
  if (lhs->axis_referenced != rhs->axis_referenced) {
    return false;
  }
  return true;
}

bool
hardware_interface_linrob_package__msg__Feedback__copy(
  const hardware_interface_linrob_package__msg__Feedback * input,
  hardware_interface_linrob_package__msg__Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // axis_name
  if (!rosidl_runtime_c__String__copy(
      &(input->axis_name), &(output->axis_name)))
  {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // error_id_l1
  if (!rosidl_runtime_c__String__copy(
      &(input->error_id_l1), &(output->error_id_l1)))
  {
    return false;
  }
  // error_id_l2
  if (!rosidl_runtime_c__String__copy(
      &(input->error_id_l2), &(output->error_id_l2)))
  {
    return false;
  }
  // error_id_l3
  if (!rosidl_runtime_c__String__copy(
      &(input->error_id_l3), &(output->error_id_l3)))
  {
    return false;
  }
  // timestamp
  if (!rosidl_runtime_c__String__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // position_reached
  output->position_reached = input->position_reached;
  // axis_referenced
  output->axis_referenced = input->axis_referenced;
  return true;
}

hardware_interface_linrob_package__msg__Feedback *
hardware_interface_linrob_package__msg__Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__msg__Feedback * msg = (hardware_interface_linrob_package__msg__Feedback *)allocator.allocate(sizeof(hardware_interface_linrob_package__msg__Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hardware_interface_linrob_package__msg__Feedback));
  bool success = hardware_interface_linrob_package__msg__Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hardware_interface_linrob_package__msg__Feedback__destroy(hardware_interface_linrob_package__msg__Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hardware_interface_linrob_package__msg__Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hardware_interface_linrob_package__msg__Feedback__Sequence__init(hardware_interface_linrob_package__msg__Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__msg__Feedback * data = NULL;

  if (size) {
    data = (hardware_interface_linrob_package__msg__Feedback *)allocator.zero_allocate(size, sizeof(hardware_interface_linrob_package__msg__Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hardware_interface_linrob_package__msg__Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hardware_interface_linrob_package__msg__Feedback__fini(&data[i - 1]);
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
hardware_interface_linrob_package__msg__Feedback__Sequence__fini(hardware_interface_linrob_package__msg__Feedback__Sequence * array)
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
      hardware_interface_linrob_package__msg__Feedback__fini(&array->data[i]);
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

hardware_interface_linrob_package__msg__Feedback__Sequence *
hardware_interface_linrob_package__msg__Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hardware_interface_linrob_package__msg__Feedback__Sequence * array = (hardware_interface_linrob_package__msg__Feedback__Sequence *)allocator.allocate(sizeof(hardware_interface_linrob_package__msg__Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hardware_interface_linrob_package__msg__Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hardware_interface_linrob_package__msg__Feedback__Sequence__destroy(hardware_interface_linrob_package__msg__Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hardware_interface_linrob_package__msg__Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hardware_interface_linrob_package__msg__Feedback__Sequence__are_equal(const hardware_interface_linrob_package__msg__Feedback__Sequence * lhs, const hardware_interface_linrob_package__msg__Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hardware_interface_linrob_package__msg__Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hardware_interface_linrob_package__msg__Feedback__Sequence__copy(
  const hardware_interface_linrob_package__msg__Feedback__Sequence * input,
  hardware_interface_linrob_package__msg__Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hardware_interface_linrob_package__msg__Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hardware_interface_linrob_package__msg__Feedback * data =
      (hardware_interface_linrob_package__msg__Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hardware_interface_linrob_package__msg__Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hardware_interface_linrob_package__msg__Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hardware_interface_linrob_package__msg__Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
