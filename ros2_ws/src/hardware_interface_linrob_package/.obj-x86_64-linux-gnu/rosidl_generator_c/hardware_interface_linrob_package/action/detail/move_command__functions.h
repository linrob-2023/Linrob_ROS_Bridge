// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hardware_interface_linrob_package:action/MoveCommand.idl
// generated code does not contain a copyright notice

#ifndef HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_COMMAND__FUNCTIONS_H_
#define HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hardware_interface_linrob_package/msg/rosidl_generator_c__visibility_control.h"

#include "hardware_interface_linrob_package/action/detail/move_command__struct.h"

/// Initialize action/MoveCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hardware_interface_linrob_package__action__MoveCommand_Goal
 * )) before or use
 * hardware_interface_linrob_package__action__MoveCommand_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_Goal__init(hardware_interface_linrob_package__action__MoveCommand_Goal * msg);

/// Finalize action/MoveCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_Goal__fini(hardware_interface_linrob_package__action__MoveCommand_Goal * msg);

/// Create action/MoveCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hardware_interface_linrob_package__action__MoveCommand_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveCommand_Goal *
hardware_interface_linrob_package__action__MoveCommand_Goal__create();

/// Destroy action/MoveCommand message.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_Goal__destroy(hardware_interface_linrob_package__action__MoveCommand_Goal * msg);

/// Check for action/MoveCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_Goal__are_equal(const hardware_interface_linrob_package__action__MoveCommand_Goal * lhs, const hardware_interface_linrob_package__action__MoveCommand_Goal * rhs);

/// Copy a action/MoveCommand message.
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
hardware_interface_linrob_package__action__MoveCommand_Goal__copy(
  const hardware_interface_linrob_package__action__MoveCommand_Goal * input,
  hardware_interface_linrob_package__action__MoveCommand_Goal * output);

/// Initialize array of action/MoveCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * hardware_interface_linrob_package__action__MoveCommand_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence__init(hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence * array, size_t size);

/// Finalize array of action/MoveCommand messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence__fini(hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence * array);

/// Create array of action/MoveCommand messages.
/**
 * It allocates the memory for the array and calls
 * hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence *
hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence__create(size_t size);

/// Destroy array of action/MoveCommand messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence__destroy(hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence * array);

/// Check for action/MoveCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence * lhs, const hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence * rhs);

/// Copy an array of action/MoveCommand messages.
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
hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence * input,
  hardware_interface_linrob_package__action__MoveCommand_Goal__Sequence * output);

/// Initialize action/MoveCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hardware_interface_linrob_package__action__MoveCommand_Result
 * )) before or use
 * hardware_interface_linrob_package__action__MoveCommand_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_Result__init(hardware_interface_linrob_package__action__MoveCommand_Result * msg);

/// Finalize action/MoveCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_Result__fini(hardware_interface_linrob_package__action__MoveCommand_Result * msg);

/// Create action/MoveCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hardware_interface_linrob_package__action__MoveCommand_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveCommand_Result *
hardware_interface_linrob_package__action__MoveCommand_Result__create();

/// Destroy action/MoveCommand message.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_Result__destroy(hardware_interface_linrob_package__action__MoveCommand_Result * msg);

/// Check for action/MoveCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_Result__are_equal(const hardware_interface_linrob_package__action__MoveCommand_Result * lhs, const hardware_interface_linrob_package__action__MoveCommand_Result * rhs);

/// Copy a action/MoveCommand message.
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
hardware_interface_linrob_package__action__MoveCommand_Result__copy(
  const hardware_interface_linrob_package__action__MoveCommand_Result * input,
  hardware_interface_linrob_package__action__MoveCommand_Result * output);

/// Initialize array of action/MoveCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * hardware_interface_linrob_package__action__MoveCommand_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_Result__Sequence__init(hardware_interface_linrob_package__action__MoveCommand_Result__Sequence * array, size_t size);

/// Finalize array of action/MoveCommand messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_Result__Sequence__fini(hardware_interface_linrob_package__action__MoveCommand_Result__Sequence * array);

/// Create array of action/MoveCommand messages.
/**
 * It allocates the memory for the array and calls
 * hardware_interface_linrob_package__action__MoveCommand_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveCommand_Result__Sequence *
hardware_interface_linrob_package__action__MoveCommand_Result__Sequence__create(size_t size);

/// Destroy array of action/MoveCommand messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_Result__Sequence__destroy(hardware_interface_linrob_package__action__MoveCommand_Result__Sequence * array);

/// Check for action/MoveCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_Result__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveCommand_Result__Sequence * lhs, const hardware_interface_linrob_package__action__MoveCommand_Result__Sequence * rhs);

/// Copy an array of action/MoveCommand messages.
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
hardware_interface_linrob_package__action__MoveCommand_Result__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveCommand_Result__Sequence * input,
  hardware_interface_linrob_package__action__MoveCommand_Result__Sequence * output);

/// Initialize action/MoveCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hardware_interface_linrob_package__action__MoveCommand_Feedback
 * )) before or use
 * hardware_interface_linrob_package__action__MoveCommand_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_Feedback__init(hardware_interface_linrob_package__action__MoveCommand_Feedback * msg);

/// Finalize action/MoveCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_Feedback__fini(hardware_interface_linrob_package__action__MoveCommand_Feedback * msg);

/// Create action/MoveCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hardware_interface_linrob_package__action__MoveCommand_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveCommand_Feedback *
hardware_interface_linrob_package__action__MoveCommand_Feedback__create();

/// Destroy action/MoveCommand message.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_Feedback__destroy(hardware_interface_linrob_package__action__MoveCommand_Feedback * msg);

/// Check for action/MoveCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_Feedback__are_equal(const hardware_interface_linrob_package__action__MoveCommand_Feedback * lhs, const hardware_interface_linrob_package__action__MoveCommand_Feedback * rhs);

/// Copy a action/MoveCommand message.
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
hardware_interface_linrob_package__action__MoveCommand_Feedback__copy(
  const hardware_interface_linrob_package__action__MoveCommand_Feedback * input,
  hardware_interface_linrob_package__action__MoveCommand_Feedback * output);

/// Initialize array of action/MoveCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * hardware_interface_linrob_package__action__MoveCommand_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence__init(hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MoveCommand messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence__fini(hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence * array);

/// Create array of action/MoveCommand messages.
/**
 * It allocates the memory for the array and calls
 * hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence *
hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MoveCommand messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence__destroy(hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence * array);

/// Check for action/MoveCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence * lhs, const hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence * rhs);

/// Copy an array of action/MoveCommand messages.
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
hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence * input,
  hardware_interface_linrob_package__action__MoveCommand_Feedback__Sequence * output);

/// Initialize action/MoveCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request
 * )) before or use
 * hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__init(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * msg);

/// Finalize action/MoveCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__fini(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * msg);

/// Create action/MoveCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request *
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__create();

/// Destroy action/MoveCommand message.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__destroy(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * msg);

/// Check for action/MoveCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__are_equal(const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * lhs, const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * rhs);

/// Copy a action/MoveCommand message.
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
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__copy(
  const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * input,
  hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request * output);

/// Initialize array of action/MoveCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence__init(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveCommand messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence__fini(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence * array);

/// Create array of action/MoveCommand messages.
/**
 * It allocates the memory for the array and calls
 * hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence *
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveCommand messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence__destroy(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence * array);

/// Check for action/MoveCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence * lhs, const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/MoveCommand messages.
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
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence * input,
  hardware_interface_linrob_package__action__MoveCommand_SendGoal_Request__Sequence * output);

/// Initialize action/MoveCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response
 * )) before or use
 * hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__init(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * msg);

/// Finalize action/MoveCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__fini(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * msg);

/// Create action/MoveCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response *
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__create();

/// Destroy action/MoveCommand message.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__destroy(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * msg);

/// Check for action/MoveCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__are_equal(const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * lhs, const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * rhs);

/// Copy a action/MoveCommand message.
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
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__copy(
  const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * input,
  hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response * output);

/// Initialize array of action/MoveCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence__init(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveCommand messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence__fini(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence * array);

/// Create array of action/MoveCommand messages.
/**
 * It allocates the memory for the array and calls
 * hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence *
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveCommand messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence__destroy(hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence * array);

/// Check for action/MoveCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence * lhs, const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/MoveCommand messages.
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
hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence * input,
  hardware_interface_linrob_package__action__MoveCommand_SendGoal_Response__Sequence * output);

/// Initialize action/MoveCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hardware_interface_linrob_package__action__MoveCommand_GetResult_Request
 * )) before or use
 * hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__init(hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * msg);

/// Finalize action/MoveCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__fini(hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * msg);

/// Create action/MoveCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request *
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__create();

/// Destroy action/MoveCommand message.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__destroy(hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * msg);

/// Check for action/MoveCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__are_equal(const hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * lhs, const hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * rhs);

/// Copy a action/MoveCommand message.
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
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__copy(
  const hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * input,
  hardware_interface_linrob_package__action__MoveCommand_GetResult_Request * output);

/// Initialize array of action/MoveCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence__init(hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveCommand messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence__fini(hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence * array);

/// Create array of action/MoveCommand messages.
/**
 * It allocates the memory for the array and calls
 * hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence *
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveCommand messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence__destroy(hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence * array);

/// Check for action/MoveCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence * lhs, const hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence * rhs);

/// Copy an array of action/MoveCommand messages.
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
hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence * input,
  hardware_interface_linrob_package__action__MoveCommand_GetResult_Request__Sequence * output);

/// Initialize action/MoveCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hardware_interface_linrob_package__action__MoveCommand_GetResult_Response
 * )) before or use
 * hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__init(hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * msg);

/// Finalize action/MoveCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__fini(hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * msg);

/// Create action/MoveCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response *
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__create();

/// Destroy action/MoveCommand message.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__destroy(hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * msg);

/// Check for action/MoveCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__are_equal(const hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * lhs, const hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * rhs);

/// Copy a action/MoveCommand message.
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
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__copy(
  const hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * input,
  hardware_interface_linrob_package__action__MoveCommand_GetResult_Response * output);

/// Initialize array of action/MoveCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence__init(hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveCommand messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence__fini(hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence * array);

/// Create array of action/MoveCommand messages.
/**
 * It allocates the memory for the array and calls
 * hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence *
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveCommand messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence__destroy(hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence * array);

/// Check for action/MoveCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence * lhs, const hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence * rhs);

/// Copy an array of action/MoveCommand messages.
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
hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence * input,
  hardware_interface_linrob_package__action__MoveCommand_GetResult_Response__Sequence * output);

/// Initialize action/MoveCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage
 * )) before or use
 * hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__init(hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * msg);

/// Finalize action/MoveCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__fini(hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * msg);

/// Create action/MoveCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage *
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__create();

/// Destroy action/MoveCommand message.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__destroy(hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * msg);

/// Check for action/MoveCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__are_equal(const hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * lhs, const hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * rhs);

/// Copy a action/MoveCommand message.
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
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__copy(
  const hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * input,
  hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage * output);

/// Initialize array of action/MoveCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence__init(hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MoveCommand messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence__fini(hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence * array);

/// Create array of action/MoveCommand messages.
/**
 * It allocates the memory for the array and calls
 * hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence *
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MoveCommand messages.
/**
 * It calls
 * hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
void
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence__destroy(hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence * array);

/// Check for action/MoveCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hardware_interface_linrob_package
bool
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence__are_equal(const hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence * lhs, const hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/MoveCommand messages.
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
hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence__copy(
  const hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence * input,
  hardware_interface_linrob_package__action__MoveCommand_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HARDWARE_INTERFACE_LINROB_PACKAGE__ACTION__DETAIL__MOVE_COMMAND__FUNCTIONS_H_
