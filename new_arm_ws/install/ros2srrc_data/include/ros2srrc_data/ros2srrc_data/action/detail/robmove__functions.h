// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros2srrc_data:action/Robmove.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__ACTION__DETAIL__ROBMOVE__FUNCTIONS_H_
#define ROS2SRRC_DATA__ACTION__DETAIL__ROBMOVE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros2srrc_data/msg/rosidl_generator_c__visibility_control.h"

#include "ros2srrc_data/action/detail/robmove__struct.h"

/// Initialize action/Robmove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2srrc_data__action__Robmove_Goal
 * )) before or use
 * ros2srrc_data__action__Robmove_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Goal__init(ros2srrc_data__action__Robmove_Goal * msg);

/// Finalize action/Robmove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_Goal__fini(ros2srrc_data__action__Robmove_Goal * msg);

/// Create action/Robmove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2srrc_data__action__Robmove_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__action__Robmove_Goal *
ros2srrc_data__action__Robmove_Goal__create();

/// Destroy action/Robmove message.
/**
 * It calls
 * ros2srrc_data__action__Robmove_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_Goal__destroy(ros2srrc_data__action__Robmove_Goal * msg);

/// Check for action/Robmove message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Goal__are_equal(const ros2srrc_data__action__Robmove_Goal * lhs, const ros2srrc_data__action__Robmove_Goal * rhs);

/// Copy a action/Robmove message.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Goal__copy(
  const ros2srrc_data__action__Robmove_Goal * input,
  ros2srrc_data__action__Robmove_Goal * output);

/// Initialize array of action/Robmove messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2srrc_data__action__Robmove_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Goal__Sequence__init(ros2srrc_data__action__Robmove_Goal__Sequence * array, size_t size);

/// Finalize array of action/Robmove messages.
/**
 * It calls
 * ros2srrc_data__action__Robmove_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_Goal__Sequence__fini(ros2srrc_data__action__Robmove_Goal__Sequence * array);

/// Create array of action/Robmove messages.
/**
 * It allocates the memory for the array and calls
 * ros2srrc_data__action__Robmove_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__action__Robmove_Goal__Sequence *
ros2srrc_data__action__Robmove_Goal__Sequence__create(size_t size);

/// Destroy array of action/Robmove messages.
/**
 * It calls
 * ros2srrc_data__action__Robmove_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_Goal__Sequence__destroy(ros2srrc_data__action__Robmove_Goal__Sequence * array);

/// Check for action/Robmove message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Goal__Sequence__are_equal(const ros2srrc_data__action__Robmove_Goal__Sequence * lhs, const ros2srrc_data__action__Robmove_Goal__Sequence * rhs);

/// Copy an array of action/Robmove messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Goal__Sequence__copy(
  const ros2srrc_data__action__Robmove_Goal__Sequence * input,
  ros2srrc_data__action__Robmove_Goal__Sequence * output);

/// Initialize action/Robmove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2srrc_data__action__Robmove_Result
 * )) before or use
 * ros2srrc_data__action__Robmove_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Result__init(ros2srrc_data__action__Robmove_Result * msg);

/// Finalize action/Robmove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_Result__fini(ros2srrc_data__action__Robmove_Result * msg);

/// Create action/Robmove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2srrc_data__action__Robmove_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__action__Robmove_Result *
ros2srrc_data__action__Robmove_Result__create();

/// Destroy action/Robmove message.
/**
 * It calls
 * ros2srrc_data__action__Robmove_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_Result__destroy(ros2srrc_data__action__Robmove_Result * msg);

/// Check for action/Robmove message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Result__are_equal(const ros2srrc_data__action__Robmove_Result * lhs, const ros2srrc_data__action__Robmove_Result * rhs);

/// Copy a action/Robmove message.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Result__copy(
  const ros2srrc_data__action__Robmove_Result * input,
  ros2srrc_data__action__Robmove_Result * output);

/// Initialize array of action/Robmove messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2srrc_data__action__Robmove_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Result__Sequence__init(ros2srrc_data__action__Robmove_Result__Sequence * array, size_t size);

/// Finalize array of action/Robmove messages.
/**
 * It calls
 * ros2srrc_data__action__Robmove_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_Result__Sequence__fini(ros2srrc_data__action__Robmove_Result__Sequence * array);

/// Create array of action/Robmove messages.
/**
 * It allocates the memory for the array and calls
 * ros2srrc_data__action__Robmove_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__action__Robmove_Result__Sequence *
ros2srrc_data__action__Robmove_Result__Sequence__create(size_t size);

/// Destroy array of action/Robmove messages.
/**
 * It calls
 * ros2srrc_data__action__Robmove_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_Result__Sequence__destroy(ros2srrc_data__action__Robmove_Result__Sequence * array);

/// Check for action/Robmove message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Result__Sequence__are_equal(const ros2srrc_data__action__Robmove_Result__Sequence * lhs, const ros2srrc_data__action__Robmove_Result__Sequence * rhs);

/// Copy an array of action/Robmove messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Result__Sequence__copy(
  const ros2srrc_data__action__Robmove_Result__Sequence * input,
  ros2srrc_data__action__Robmove_Result__Sequence * output);

/// Initialize action/Robmove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2srrc_data__action__Robmove_Feedback
 * )) before or use
 * ros2srrc_data__action__Robmove_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Feedback__init(ros2srrc_data__action__Robmove_Feedback * msg);

/// Finalize action/Robmove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_Feedback__fini(ros2srrc_data__action__Robmove_Feedback * msg);

/// Create action/Robmove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2srrc_data__action__Robmove_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__action__Robmove_Feedback *
ros2srrc_data__action__Robmove_Feedback__create();

/// Destroy action/Robmove message.
/**
 * It calls
 * ros2srrc_data__action__Robmove_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_Feedback__destroy(ros2srrc_data__action__Robmove_Feedback * msg);

/// Check for action/Robmove message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Feedback__are_equal(const ros2srrc_data__action__Robmove_Feedback * lhs, const ros2srrc_data__action__Robmove_Feedback * rhs);

/// Copy a action/Robmove message.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Feedback__copy(
  const ros2srrc_data__action__Robmove_Feedback * input,
  ros2srrc_data__action__Robmove_Feedback * output);

/// Initialize array of action/Robmove messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2srrc_data__action__Robmove_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Feedback__Sequence__init(ros2srrc_data__action__Robmove_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Robmove messages.
/**
 * It calls
 * ros2srrc_data__action__Robmove_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_Feedback__Sequence__fini(ros2srrc_data__action__Robmove_Feedback__Sequence * array);

/// Create array of action/Robmove messages.
/**
 * It allocates the memory for the array and calls
 * ros2srrc_data__action__Robmove_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__action__Robmove_Feedback__Sequence *
ros2srrc_data__action__Robmove_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Robmove messages.
/**
 * It calls
 * ros2srrc_data__action__Robmove_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_Feedback__Sequence__destroy(ros2srrc_data__action__Robmove_Feedback__Sequence * array);

/// Check for action/Robmove message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Feedback__Sequence__are_equal(const ros2srrc_data__action__Robmove_Feedback__Sequence * lhs, const ros2srrc_data__action__Robmove_Feedback__Sequence * rhs);

/// Copy an array of action/Robmove messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_Feedback__Sequence__copy(
  const ros2srrc_data__action__Robmove_Feedback__Sequence * input,
  ros2srrc_data__action__Robmove_Feedback__Sequence * output);

/// Initialize action/Robmove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2srrc_data__action__Robmove_SendGoal_Request
 * )) before or use
 * ros2srrc_data__action__Robmove_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_SendGoal_Request__init(ros2srrc_data__action__Robmove_SendGoal_Request * msg);

/// Finalize action/Robmove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_SendGoal_Request__fini(ros2srrc_data__action__Robmove_SendGoal_Request * msg);

/// Create action/Robmove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2srrc_data__action__Robmove_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__action__Robmove_SendGoal_Request *
ros2srrc_data__action__Robmove_SendGoal_Request__create();

/// Destroy action/Robmove message.
/**
 * It calls
 * ros2srrc_data__action__Robmove_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_SendGoal_Request__destroy(ros2srrc_data__action__Robmove_SendGoal_Request * msg);

/// Check for action/Robmove message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_SendGoal_Request__are_equal(const ros2srrc_data__action__Robmove_SendGoal_Request * lhs, const ros2srrc_data__action__Robmove_SendGoal_Request * rhs);

/// Copy a action/Robmove message.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_SendGoal_Request__copy(
  const ros2srrc_data__action__Robmove_SendGoal_Request * input,
  ros2srrc_data__action__Robmove_SendGoal_Request * output);

/// Initialize array of action/Robmove messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2srrc_data__action__Robmove_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_SendGoal_Request__Sequence__init(ros2srrc_data__action__Robmove_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Robmove messages.
/**
 * It calls
 * ros2srrc_data__action__Robmove_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_SendGoal_Request__Sequence__fini(ros2srrc_data__action__Robmove_SendGoal_Request__Sequence * array);

/// Create array of action/Robmove messages.
/**
 * It allocates the memory for the array and calls
 * ros2srrc_data__action__Robmove_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__action__Robmove_SendGoal_Request__Sequence *
ros2srrc_data__action__Robmove_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Robmove messages.
/**
 * It calls
 * ros2srrc_data__action__Robmove_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_SendGoal_Request__Sequence__destroy(ros2srrc_data__action__Robmove_SendGoal_Request__Sequence * array);

/// Check for action/Robmove message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_SendGoal_Request__Sequence__are_equal(const ros2srrc_data__action__Robmove_SendGoal_Request__Sequence * lhs, const ros2srrc_data__action__Robmove_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Robmove messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_SendGoal_Request__Sequence__copy(
  const ros2srrc_data__action__Robmove_SendGoal_Request__Sequence * input,
  ros2srrc_data__action__Robmove_SendGoal_Request__Sequence * output);

/// Initialize action/Robmove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2srrc_data__action__Robmove_SendGoal_Response
 * )) before or use
 * ros2srrc_data__action__Robmove_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_SendGoal_Response__init(ros2srrc_data__action__Robmove_SendGoal_Response * msg);

/// Finalize action/Robmove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_SendGoal_Response__fini(ros2srrc_data__action__Robmove_SendGoal_Response * msg);

/// Create action/Robmove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2srrc_data__action__Robmove_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__action__Robmove_SendGoal_Response *
ros2srrc_data__action__Robmove_SendGoal_Response__create();

/// Destroy action/Robmove message.
/**
 * It calls
 * ros2srrc_data__action__Robmove_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_SendGoal_Response__destroy(ros2srrc_data__action__Robmove_SendGoal_Response * msg);

/// Check for action/Robmove message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_SendGoal_Response__are_equal(const ros2srrc_data__action__Robmove_SendGoal_Response * lhs, const ros2srrc_data__action__Robmove_SendGoal_Response * rhs);

/// Copy a action/Robmove message.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_SendGoal_Response__copy(
  const ros2srrc_data__action__Robmove_SendGoal_Response * input,
  ros2srrc_data__action__Robmove_SendGoal_Response * output);

/// Initialize array of action/Robmove messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2srrc_data__action__Robmove_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_SendGoal_Response__Sequence__init(ros2srrc_data__action__Robmove_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Robmove messages.
/**
 * It calls
 * ros2srrc_data__action__Robmove_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_SendGoal_Response__Sequence__fini(ros2srrc_data__action__Robmove_SendGoal_Response__Sequence * array);

/// Create array of action/Robmove messages.
/**
 * It allocates the memory for the array and calls
 * ros2srrc_data__action__Robmove_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__action__Robmove_SendGoal_Response__Sequence *
ros2srrc_data__action__Robmove_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Robmove messages.
/**
 * It calls
 * ros2srrc_data__action__Robmove_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_SendGoal_Response__Sequence__destroy(ros2srrc_data__action__Robmove_SendGoal_Response__Sequence * array);

/// Check for action/Robmove message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_SendGoal_Response__Sequence__are_equal(const ros2srrc_data__action__Robmove_SendGoal_Response__Sequence * lhs, const ros2srrc_data__action__Robmove_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Robmove messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_SendGoal_Response__Sequence__copy(
  const ros2srrc_data__action__Robmove_SendGoal_Response__Sequence * input,
  ros2srrc_data__action__Robmove_SendGoal_Response__Sequence * output);

/// Initialize action/Robmove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2srrc_data__action__Robmove_GetResult_Request
 * )) before or use
 * ros2srrc_data__action__Robmove_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_GetResult_Request__init(ros2srrc_data__action__Robmove_GetResult_Request * msg);

/// Finalize action/Robmove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_GetResult_Request__fini(ros2srrc_data__action__Robmove_GetResult_Request * msg);

/// Create action/Robmove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2srrc_data__action__Robmove_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__action__Robmove_GetResult_Request *
ros2srrc_data__action__Robmove_GetResult_Request__create();

/// Destroy action/Robmove message.
/**
 * It calls
 * ros2srrc_data__action__Robmove_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_GetResult_Request__destroy(ros2srrc_data__action__Robmove_GetResult_Request * msg);

/// Check for action/Robmove message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_GetResult_Request__are_equal(const ros2srrc_data__action__Robmove_GetResult_Request * lhs, const ros2srrc_data__action__Robmove_GetResult_Request * rhs);

/// Copy a action/Robmove message.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_GetResult_Request__copy(
  const ros2srrc_data__action__Robmove_GetResult_Request * input,
  ros2srrc_data__action__Robmove_GetResult_Request * output);

/// Initialize array of action/Robmove messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2srrc_data__action__Robmove_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_GetResult_Request__Sequence__init(ros2srrc_data__action__Robmove_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Robmove messages.
/**
 * It calls
 * ros2srrc_data__action__Robmove_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_GetResult_Request__Sequence__fini(ros2srrc_data__action__Robmove_GetResult_Request__Sequence * array);

/// Create array of action/Robmove messages.
/**
 * It allocates the memory for the array and calls
 * ros2srrc_data__action__Robmove_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__action__Robmove_GetResult_Request__Sequence *
ros2srrc_data__action__Robmove_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Robmove messages.
/**
 * It calls
 * ros2srrc_data__action__Robmove_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_GetResult_Request__Sequence__destroy(ros2srrc_data__action__Robmove_GetResult_Request__Sequence * array);

/// Check for action/Robmove message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_GetResult_Request__Sequence__are_equal(const ros2srrc_data__action__Robmove_GetResult_Request__Sequence * lhs, const ros2srrc_data__action__Robmove_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Robmove messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_GetResult_Request__Sequence__copy(
  const ros2srrc_data__action__Robmove_GetResult_Request__Sequence * input,
  ros2srrc_data__action__Robmove_GetResult_Request__Sequence * output);

/// Initialize action/Robmove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2srrc_data__action__Robmove_GetResult_Response
 * )) before or use
 * ros2srrc_data__action__Robmove_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_GetResult_Response__init(ros2srrc_data__action__Robmove_GetResult_Response * msg);

/// Finalize action/Robmove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_GetResult_Response__fini(ros2srrc_data__action__Robmove_GetResult_Response * msg);

/// Create action/Robmove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2srrc_data__action__Robmove_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__action__Robmove_GetResult_Response *
ros2srrc_data__action__Robmove_GetResult_Response__create();

/// Destroy action/Robmove message.
/**
 * It calls
 * ros2srrc_data__action__Robmove_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_GetResult_Response__destroy(ros2srrc_data__action__Robmove_GetResult_Response * msg);

/// Check for action/Robmove message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_GetResult_Response__are_equal(const ros2srrc_data__action__Robmove_GetResult_Response * lhs, const ros2srrc_data__action__Robmove_GetResult_Response * rhs);

/// Copy a action/Robmove message.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_GetResult_Response__copy(
  const ros2srrc_data__action__Robmove_GetResult_Response * input,
  ros2srrc_data__action__Robmove_GetResult_Response * output);

/// Initialize array of action/Robmove messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2srrc_data__action__Robmove_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_GetResult_Response__Sequence__init(ros2srrc_data__action__Robmove_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Robmove messages.
/**
 * It calls
 * ros2srrc_data__action__Robmove_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_GetResult_Response__Sequence__fini(ros2srrc_data__action__Robmove_GetResult_Response__Sequence * array);

/// Create array of action/Robmove messages.
/**
 * It allocates the memory for the array and calls
 * ros2srrc_data__action__Robmove_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__action__Robmove_GetResult_Response__Sequence *
ros2srrc_data__action__Robmove_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Robmove messages.
/**
 * It calls
 * ros2srrc_data__action__Robmove_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_GetResult_Response__Sequence__destroy(ros2srrc_data__action__Robmove_GetResult_Response__Sequence * array);

/// Check for action/Robmove message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_GetResult_Response__Sequence__are_equal(const ros2srrc_data__action__Robmove_GetResult_Response__Sequence * lhs, const ros2srrc_data__action__Robmove_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Robmove messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_GetResult_Response__Sequence__copy(
  const ros2srrc_data__action__Robmove_GetResult_Response__Sequence * input,
  ros2srrc_data__action__Robmove_GetResult_Response__Sequence * output);

/// Initialize action/Robmove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2srrc_data__action__Robmove_FeedbackMessage
 * )) before or use
 * ros2srrc_data__action__Robmove_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_FeedbackMessage__init(ros2srrc_data__action__Robmove_FeedbackMessage * msg);

/// Finalize action/Robmove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_FeedbackMessage__fini(ros2srrc_data__action__Robmove_FeedbackMessage * msg);

/// Create action/Robmove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2srrc_data__action__Robmove_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__action__Robmove_FeedbackMessage *
ros2srrc_data__action__Robmove_FeedbackMessage__create();

/// Destroy action/Robmove message.
/**
 * It calls
 * ros2srrc_data__action__Robmove_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_FeedbackMessage__destroy(ros2srrc_data__action__Robmove_FeedbackMessage * msg);

/// Check for action/Robmove message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_FeedbackMessage__are_equal(const ros2srrc_data__action__Robmove_FeedbackMessage * lhs, const ros2srrc_data__action__Robmove_FeedbackMessage * rhs);

/// Copy a action/Robmove message.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_FeedbackMessage__copy(
  const ros2srrc_data__action__Robmove_FeedbackMessage * input,
  ros2srrc_data__action__Robmove_FeedbackMessage * output);

/// Initialize array of action/Robmove messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2srrc_data__action__Robmove_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_FeedbackMessage__Sequence__init(ros2srrc_data__action__Robmove_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Robmove messages.
/**
 * It calls
 * ros2srrc_data__action__Robmove_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_FeedbackMessage__Sequence__fini(ros2srrc_data__action__Robmove_FeedbackMessage__Sequence * array);

/// Create array of action/Robmove messages.
/**
 * It allocates the memory for the array and calls
 * ros2srrc_data__action__Robmove_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__action__Robmove_FeedbackMessage__Sequence *
ros2srrc_data__action__Robmove_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Robmove messages.
/**
 * It calls
 * ros2srrc_data__action__Robmove_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__action__Robmove_FeedbackMessage__Sequence__destroy(ros2srrc_data__action__Robmove_FeedbackMessage__Sequence * array);

/// Check for action/Robmove message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_FeedbackMessage__Sequence__are_equal(const ros2srrc_data__action__Robmove_FeedbackMessage__Sequence * lhs, const ros2srrc_data__action__Robmove_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Robmove messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__action__Robmove_FeedbackMessage__Sequence__copy(
  const ros2srrc_data__action__Robmove_FeedbackMessage__Sequence * input,
  ros2srrc_data__action__Robmove_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROS2SRRC_DATA__ACTION__DETAIL__ROBMOVE__FUNCTIONS_H_