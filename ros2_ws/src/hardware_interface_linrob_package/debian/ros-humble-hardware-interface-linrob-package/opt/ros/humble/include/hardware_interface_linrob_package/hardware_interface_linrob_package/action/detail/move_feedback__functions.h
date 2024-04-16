// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hardware_interface_linrob_package:action/MoveFeedback.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_FEEDBACK__FUNCTIONS_H_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_FEEDBACK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hardware_interface_linrob_package/msg/rosidl_generator_c__visibility_control.h"

#include "hardware_interface_linrob_package/action/detail/move_feedback__struct.h"

/// Initialize action/MoveFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hardware_interface_linrob_package__action__MoveFeedback_Goal
 * )) before or use
 * hardware_interface_linrob_package__action__MoveFeedback_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Goal__init(hardware_interface_linrob_package__action__MoveFeedback_Goal * msg);

/// Finalize action/MoveFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_Goal__fini(hardware_interface_linrob_package__action__MoveFeedback_Goal * msg);

/// Create action/MoveFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hardware_interface_linrob_package__action__MoveFeedback_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveFeedback_Goal *
hardware_interface_linrob_package__action__MoveFeedback_Goal__create();

/// Destroy action/MoveFeedback message.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_Goal__destroy(hardware_interface_linrob_package__action__MoveFeedback_Goal * msg);

/// Check for action/MoveFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Goal__are_equal(const hardware_interface_linrob_package__action__MoveFeedback_Goal * lhs, const hardware_interface_linrob_package__action__MoveFeedback_Goal * rhs);

/// Copy a action/MoveFeedback message.
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
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Goal__copy(
  const hardware_interface_linrob_package__action__MoveFeedback_Goal * input,
  hardware_interface_linrob_package__action__MoveFeedback_Goal * output);

/// Initialize array of action/MoveFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * hardware_interface_linrob_package__action__MoveFeedback_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence__init(hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence * array, size_t size);

/// Finalize array of action/MoveFeedback messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence__fini(hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence * array);

/// Create array of action/MoveFeedback messages.
/**
 * It allocates the memory for the array and calls
 * hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence *
hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence__create(size_t size);

/// Destroy array of action/MoveFeedback messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence__destroy(hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence * array);

/// Check for action/MoveFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence * lhs, const hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence * rhs);

/// Copy an array of action/MoveFeedback messages.
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
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence * input,
  hardware_interface_linrob_package__action__MoveFeedback_Goal__Sequence * output);

/// Initialize action/MoveFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hardware_interface_linrob_package__action__MoveFeedback_Result
 * )) before or use
 * hardware_interface_linrob_package__action__MoveFeedback_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Result__init(hardware_interface_linrob_package__action__MoveFeedback_Result * msg);

/// Finalize action/MoveFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_Result__fini(hardware_interface_linrob_package__action__MoveFeedback_Result * msg);

/// Create action/MoveFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hardware_interface_linrob_package__action__MoveFeedback_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveFeedback_Result *
hardware_interface_linrob_package__action__MoveFeedback_Result__create();

/// Destroy action/MoveFeedback message.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_Result__destroy(hardware_interface_linrob_package__action__MoveFeedback_Result * msg);

/// Check for action/MoveFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Result__are_equal(const hardware_interface_linrob_package__action__MoveFeedback_Result * lhs, const hardware_interface_linrob_package__action__MoveFeedback_Result * rhs);

/// Copy a action/MoveFeedback message.
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
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Result__copy(
  const hardware_interface_linrob_package__action__MoveFeedback_Result * input,
  hardware_interface_linrob_package__action__MoveFeedback_Result * output);

/// Initialize array of action/MoveFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * hardware_interface_linrob_package__action__MoveFeedback_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence__init(hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence * array, size_t size);

/// Finalize array of action/MoveFeedback messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence__fini(hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence * array);

/// Create array of action/MoveFeedback messages.
/**
 * It allocates the memory for the array and calls
 * hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence *
hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence__create(size_t size);

/// Destroy array of action/MoveFeedback messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence__destroy(hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence * array);

/// Check for action/MoveFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence * lhs, const hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence * rhs);

/// Copy an array of action/MoveFeedback messages.
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
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence * input,
  hardware_interface_linrob_package__action__MoveFeedback_Result__Sequence * output);

/// Initialize action/MoveFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hardware_interface_linrob_package__action__MoveFeedback_Feedback
 * )) before or use
 * hardware_interface_linrob_package__action__MoveFeedback_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Feedback__init(hardware_interface_linrob_package__action__MoveFeedback_Feedback * msg);

/// Finalize action/MoveFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_Feedback__fini(hardware_interface_linrob_package__action__MoveFeedback_Feedback * msg);

/// Create action/MoveFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hardware_interface_linrob_package__action__MoveFeedback_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveFeedback_Feedback *
hardware_interface_linrob_package__action__MoveFeedback_Feedback__create();

/// Destroy action/MoveFeedback message.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_Feedback__destroy(hardware_interface_linrob_package__action__MoveFeedback_Feedback * msg);

/// Check for action/MoveFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Feedback__are_equal(const hardware_interface_linrob_package__action__MoveFeedback_Feedback * lhs, const hardware_interface_linrob_package__action__MoveFeedback_Feedback * rhs);

/// Copy a action/MoveFeedback message.
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
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Feedback__copy(
  const hardware_interface_linrob_package__action__MoveFeedback_Feedback * input,
  hardware_interface_linrob_package__action__MoveFeedback_Feedback * output);

/// Initialize array of action/MoveFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * hardware_interface_linrob_package__action__MoveFeedback_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence__init(hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MoveFeedback messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence__fini(hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence * array);

/// Create array of action/MoveFeedback messages.
/**
 * It allocates the memory for the array and calls
 * hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence *
hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MoveFeedback messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence__destroy(hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence * array);

/// Check for action/MoveFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence * lhs, const hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence * rhs);

/// Copy an array of action/MoveFeedback messages.
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
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence * input,
  hardware_interface_linrob_package__action__MoveFeedback_Feedback__Sequence * output);

/// Initialize action/MoveFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request
 * )) before or use
 * hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__init(hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request * msg);

/// Finalize action/MoveFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__fini(hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request * msg);

/// Create action/MoveFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request *
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__create();

/// Destroy action/MoveFeedback message.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__destroy(hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request * msg);

/// Check for action/MoveFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__are_equal(const hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request * lhs, const hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request * rhs);

/// Copy a action/MoveFeedback message.
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
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__copy(
  const hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request * input,
  hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request * output);

/// Initialize array of action/MoveFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence__init(hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveFeedback messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence__fini(hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence * array);

/// Create array of action/MoveFeedback messages.
/**
 * It allocates the memory for the array and calls
 * hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence *
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveFeedback messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence__destroy(hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence * array);

/// Check for action/MoveFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence * lhs, const hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/MoveFeedback messages.
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
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence * input,
  hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Request__Sequence * output);

/// Initialize action/MoveFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response
 * )) before or use
 * hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__init(hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response * msg);

/// Finalize action/MoveFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__fini(hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response * msg);

/// Create action/MoveFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response *
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__create();

/// Destroy action/MoveFeedback message.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__destroy(hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response * msg);

/// Check for action/MoveFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__are_equal(const hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response * lhs, const hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response * rhs);

/// Copy a action/MoveFeedback message.
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
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__copy(
  const hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response * input,
  hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response * output);

/// Initialize array of action/MoveFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence__init(hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveFeedback messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence__fini(hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence * array);

/// Create array of action/MoveFeedback messages.
/**
 * It allocates the memory for the array and calls
 * hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence *
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveFeedback messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence__destroy(hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence * array);

/// Check for action/MoveFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence * lhs, const hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/MoveFeedback messages.
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
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence * input,
  hardware_interface_linrob_package__action__MoveFeedback_SendGoal_Response__Sequence * output);

/// Initialize action/MoveFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request
 * )) before or use
 * hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__init(hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request * msg);

/// Finalize action/MoveFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__fini(hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request * msg);

/// Create action/MoveFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request *
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__create();

/// Destroy action/MoveFeedback message.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__destroy(hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request * msg);

/// Check for action/MoveFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__are_equal(const hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request * lhs, const hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request * rhs);

/// Copy a action/MoveFeedback message.
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
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__copy(
  const hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request * input,
  hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request * output);

/// Initialize array of action/MoveFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence__init(hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveFeedback messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence__fini(hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence * array);

/// Create array of action/MoveFeedback messages.
/**
 * It allocates the memory for the array and calls
 * hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence *
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveFeedback messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence__destroy(hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence * array);

/// Check for action/MoveFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence * lhs, const hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence * rhs);

/// Copy an array of action/MoveFeedback messages.
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
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence * input,
  hardware_interface_linrob_package__action__MoveFeedback_GetResult_Request__Sequence * output);

/// Initialize action/MoveFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response
 * )) before or use
 * hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__init(hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response * msg);

/// Finalize action/MoveFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__fini(hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response * msg);

/// Create action/MoveFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response *
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__create();

/// Destroy action/MoveFeedback message.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__destroy(hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response * msg);

/// Check for action/MoveFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__are_equal(const hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response * lhs, const hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response * rhs);

/// Copy a action/MoveFeedback message.
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
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__copy(
  const hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response * input,
  hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response * output);

/// Initialize array of action/MoveFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence__init(hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveFeedback messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence__fini(hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence * array);

/// Create array of action/MoveFeedback messages.
/**
 * It allocates the memory for the array and calls
 * hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence *
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveFeedback messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence__destroy(hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence * array);

/// Check for action/MoveFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence * lhs, const hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence * rhs);

/// Copy an array of action/MoveFeedback messages.
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
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence * input,
  hardware_interface_linrob_package__action__MoveFeedback_GetResult_Response__Sequence * output);

/// Initialize action/MoveFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage
 * )) before or use
 * hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__init(hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage * msg);

/// Finalize action/MoveFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__fini(hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage * msg);

/// Create action/MoveFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage *
hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__create();

/// Destroy action/MoveFeedback message.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__destroy(hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage * msg);

/// Check for action/MoveFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__are_equal(const hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage * lhs, const hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage * rhs);

/// Copy a action/MoveFeedback message.
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
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__copy(
  const hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage * input,
  hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage * output);

/// Initialize array of action/MoveFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence__init(hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MoveFeedback messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence__fini(hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence * array);

/// Create array of action/MoveFeedback messages.
/**
 * It allocates the memory for the array and calls
 * hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence *
hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MoveFeedback messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence__destroy(hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence * array);

/// Check for action/MoveFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence * lhs, const hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/MoveFeedback messages.
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
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence * input,
  hardware_interface_linrob_package__action__MoveFeedback_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_FEEDBACK__FUNCTIONS_H_
