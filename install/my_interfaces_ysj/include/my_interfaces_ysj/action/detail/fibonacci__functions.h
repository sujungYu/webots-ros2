// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_interfaces_ysj:action\Fibonacci.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES_YSJ__ACTION__DETAIL__FIBONACCI__FUNCTIONS_H_
#define MY_INTERFACES_YSJ__ACTION__DETAIL__FIBONACCI__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_interfaces_ysj/msg/rosidl_generator_c__visibility_control.h"

#include "my_interfaces_ysj/action/detail/fibonacci__struct.h"

/// Initialize action/Fibonacci message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_interfaces_ysj__action__Fibonacci_Goal
 * )) before or use
 * my_interfaces_ysj__action__Fibonacci_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__action__Fibonacci_Goal__init(my_interfaces_ysj__action__Fibonacci_Goal * msg);

/// Finalize action/Fibonacci message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_Goal__fini(my_interfaces_ysj__action__Fibonacci_Goal * msg);

/// Create action/Fibonacci message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_interfaces_ysj__action__Fibonacci_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__action__Fibonacci_Goal *
my_interfaces_ysj__action__Fibonacci_Goal__create();

/// Destroy action/Fibonacci message.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_Goal__destroy(my_interfaces_ysj__action__Fibonacci_Goal * msg);


/// Initialize array of action/Fibonacci messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_interfaces_ysj__action__Fibonacci_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__action__Fibonacci_Goal__Sequence__init(my_interfaces_ysj__action__Fibonacci_Goal__Sequence * array, size_t size);

/// Finalize array of action/Fibonacci messages.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_Goal__Sequence__fini(my_interfaces_ysj__action__Fibonacci_Goal__Sequence * array);

/// Create array of action/Fibonacci messages.
/**
 * It allocates the memory for the array and calls
 * my_interfaces_ysj__action__Fibonacci_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__action__Fibonacci_Goal__Sequence *
my_interfaces_ysj__action__Fibonacci_Goal__Sequence__create(size_t size);

/// Destroy array of action/Fibonacci messages.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_Goal__Sequence__destroy(my_interfaces_ysj__action__Fibonacci_Goal__Sequence * array);

/// Initialize action/Fibonacci message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_interfaces_ysj__action__Fibonacci_Result
 * )) before or use
 * my_interfaces_ysj__action__Fibonacci_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__action__Fibonacci_Result__init(my_interfaces_ysj__action__Fibonacci_Result * msg);

/// Finalize action/Fibonacci message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_Result__fini(my_interfaces_ysj__action__Fibonacci_Result * msg);

/// Create action/Fibonacci message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_interfaces_ysj__action__Fibonacci_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__action__Fibonacci_Result *
my_interfaces_ysj__action__Fibonacci_Result__create();

/// Destroy action/Fibonacci message.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_Result__destroy(my_interfaces_ysj__action__Fibonacci_Result * msg);


/// Initialize array of action/Fibonacci messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_interfaces_ysj__action__Fibonacci_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__action__Fibonacci_Result__Sequence__init(my_interfaces_ysj__action__Fibonacci_Result__Sequence * array, size_t size);

/// Finalize array of action/Fibonacci messages.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_Result__Sequence__fini(my_interfaces_ysj__action__Fibonacci_Result__Sequence * array);

/// Create array of action/Fibonacci messages.
/**
 * It allocates the memory for the array and calls
 * my_interfaces_ysj__action__Fibonacci_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__action__Fibonacci_Result__Sequence *
my_interfaces_ysj__action__Fibonacci_Result__Sequence__create(size_t size);

/// Destroy array of action/Fibonacci messages.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_Result__Sequence__destroy(my_interfaces_ysj__action__Fibonacci_Result__Sequence * array);

/// Initialize action/Fibonacci message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_interfaces_ysj__action__Fibonacci_Feedback
 * )) before or use
 * my_interfaces_ysj__action__Fibonacci_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__action__Fibonacci_Feedback__init(my_interfaces_ysj__action__Fibonacci_Feedback * msg);

/// Finalize action/Fibonacci message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_Feedback__fini(my_interfaces_ysj__action__Fibonacci_Feedback * msg);

/// Create action/Fibonacci message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_interfaces_ysj__action__Fibonacci_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__action__Fibonacci_Feedback *
my_interfaces_ysj__action__Fibonacci_Feedback__create();

/// Destroy action/Fibonacci message.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_Feedback__destroy(my_interfaces_ysj__action__Fibonacci_Feedback * msg);


/// Initialize array of action/Fibonacci messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_interfaces_ysj__action__Fibonacci_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__action__Fibonacci_Feedback__Sequence__init(my_interfaces_ysj__action__Fibonacci_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Fibonacci messages.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_Feedback__Sequence__fini(my_interfaces_ysj__action__Fibonacci_Feedback__Sequence * array);

/// Create array of action/Fibonacci messages.
/**
 * It allocates the memory for the array and calls
 * my_interfaces_ysj__action__Fibonacci_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__action__Fibonacci_Feedback__Sequence *
my_interfaces_ysj__action__Fibonacci_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Fibonacci messages.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_Feedback__Sequence__destroy(my_interfaces_ysj__action__Fibonacci_Feedback__Sequence * array);

/// Initialize action/Fibonacci message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_interfaces_ysj__action__Fibonacci_SendGoal_Request
 * )) before or use
 * my_interfaces_ysj__action__Fibonacci_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__action__Fibonacci_SendGoal_Request__init(my_interfaces_ysj__action__Fibonacci_SendGoal_Request * msg);

/// Finalize action/Fibonacci message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_SendGoal_Request__fini(my_interfaces_ysj__action__Fibonacci_SendGoal_Request * msg);

/// Create action/Fibonacci message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_interfaces_ysj__action__Fibonacci_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__action__Fibonacci_SendGoal_Request *
my_interfaces_ysj__action__Fibonacci_SendGoal_Request__create();

/// Destroy action/Fibonacci message.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_SendGoal_Request__destroy(my_interfaces_ysj__action__Fibonacci_SendGoal_Request * msg);


/// Initialize array of action/Fibonacci messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_interfaces_ysj__action__Fibonacci_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__action__Fibonacci_SendGoal_Request__Sequence__init(my_interfaces_ysj__action__Fibonacci_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Fibonacci messages.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_SendGoal_Request__Sequence__fini(my_interfaces_ysj__action__Fibonacci_SendGoal_Request__Sequence * array);

/// Create array of action/Fibonacci messages.
/**
 * It allocates the memory for the array and calls
 * my_interfaces_ysj__action__Fibonacci_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__action__Fibonacci_SendGoal_Request__Sequence *
my_interfaces_ysj__action__Fibonacci_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Fibonacci messages.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_SendGoal_Request__Sequence__destroy(my_interfaces_ysj__action__Fibonacci_SendGoal_Request__Sequence * array);

/// Initialize action/Fibonacci message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_interfaces_ysj__action__Fibonacci_SendGoal_Response
 * )) before or use
 * my_interfaces_ysj__action__Fibonacci_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__action__Fibonacci_SendGoal_Response__init(my_interfaces_ysj__action__Fibonacci_SendGoal_Response * msg);

/// Finalize action/Fibonacci message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_SendGoal_Response__fini(my_interfaces_ysj__action__Fibonacci_SendGoal_Response * msg);

/// Create action/Fibonacci message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_interfaces_ysj__action__Fibonacci_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__action__Fibonacci_SendGoal_Response *
my_interfaces_ysj__action__Fibonacci_SendGoal_Response__create();

/// Destroy action/Fibonacci message.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_SendGoal_Response__destroy(my_interfaces_ysj__action__Fibonacci_SendGoal_Response * msg);


/// Initialize array of action/Fibonacci messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_interfaces_ysj__action__Fibonacci_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__action__Fibonacci_SendGoal_Response__Sequence__init(my_interfaces_ysj__action__Fibonacci_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Fibonacci messages.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_SendGoal_Response__Sequence__fini(my_interfaces_ysj__action__Fibonacci_SendGoal_Response__Sequence * array);

/// Create array of action/Fibonacci messages.
/**
 * It allocates the memory for the array and calls
 * my_interfaces_ysj__action__Fibonacci_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__action__Fibonacci_SendGoal_Response__Sequence *
my_interfaces_ysj__action__Fibonacci_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Fibonacci messages.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_SendGoal_Response__Sequence__destroy(my_interfaces_ysj__action__Fibonacci_SendGoal_Response__Sequence * array);

/// Initialize action/Fibonacci message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_interfaces_ysj__action__Fibonacci_GetResult_Request
 * )) before or use
 * my_interfaces_ysj__action__Fibonacci_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__action__Fibonacci_GetResult_Request__init(my_interfaces_ysj__action__Fibonacci_GetResult_Request * msg);

/// Finalize action/Fibonacci message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_GetResult_Request__fini(my_interfaces_ysj__action__Fibonacci_GetResult_Request * msg);

/// Create action/Fibonacci message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_interfaces_ysj__action__Fibonacci_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__action__Fibonacci_GetResult_Request *
my_interfaces_ysj__action__Fibonacci_GetResult_Request__create();

/// Destroy action/Fibonacci message.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_GetResult_Request__destroy(my_interfaces_ysj__action__Fibonacci_GetResult_Request * msg);


/// Initialize array of action/Fibonacci messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_interfaces_ysj__action__Fibonacci_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__action__Fibonacci_GetResult_Request__Sequence__init(my_interfaces_ysj__action__Fibonacci_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Fibonacci messages.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_GetResult_Request__Sequence__fini(my_interfaces_ysj__action__Fibonacci_GetResult_Request__Sequence * array);

/// Create array of action/Fibonacci messages.
/**
 * It allocates the memory for the array and calls
 * my_interfaces_ysj__action__Fibonacci_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__action__Fibonacci_GetResult_Request__Sequence *
my_interfaces_ysj__action__Fibonacci_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Fibonacci messages.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_GetResult_Request__Sequence__destroy(my_interfaces_ysj__action__Fibonacci_GetResult_Request__Sequence * array);

/// Initialize action/Fibonacci message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_interfaces_ysj__action__Fibonacci_GetResult_Response
 * )) before or use
 * my_interfaces_ysj__action__Fibonacci_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__action__Fibonacci_GetResult_Response__init(my_interfaces_ysj__action__Fibonacci_GetResult_Response * msg);

/// Finalize action/Fibonacci message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_GetResult_Response__fini(my_interfaces_ysj__action__Fibonacci_GetResult_Response * msg);

/// Create action/Fibonacci message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_interfaces_ysj__action__Fibonacci_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__action__Fibonacci_GetResult_Response *
my_interfaces_ysj__action__Fibonacci_GetResult_Response__create();

/// Destroy action/Fibonacci message.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_GetResult_Response__destroy(my_interfaces_ysj__action__Fibonacci_GetResult_Response * msg);


/// Initialize array of action/Fibonacci messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_interfaces_ysj__action__Fibonacci_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__action__Fibonacci_GetResult_Response__Sequence__init(my_interfaces_ysj__action__Fibonacci_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Fibonacci messages.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_GetResult_Response__Sequence__fini(my_interfaces_ysj__action__Fibonacci_GetResult_Response__Sequence * array);

/// Create array of action/Fibonacci messages.
/**
 * It allocates the memory for the array and calls
 * my_interfaces_ysj__action__Fibonacci_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__action__Fibonacci_GetResult_Response__Sequence *
my_interfaces_ysj__action__Fibonacci_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Fibonacci messages.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_GetResult_Response__Sequence__destroy(my_interfaces_ysj__action__Fibonacci_GetResult_Response__Sequence * array);

/// Initialize action/Fibonacci message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_interfaces_ysj__action__Fibonacci_FeedbackMessage
 * )) before or use
 * my_interfaces_ysj__action__Fibonacci_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__action__Fibonacci_FeedbackMessage__init(my_interfaces_ysj__action__Fibonacci_FeedbackMessage * msg);

/// Finalize action/Fibonacci message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_FeedbackMessage__fini(my_interfaces_ysj__action__Fibonacci_FeedbackMessage * msg);

/// Create action/Fibonacci message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_interfaces_ysj__action__Fibonacci_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__action__Fibonacci_FeedbackMessage *
my_interfaces_ysj__action__Fibonacci_FeedbackMessage__create();

/// Destroy action/Fibonacci message.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_FeedbackMessage__destroy(my_interfaces_ysj__action__Fibonacci_FeedbackMessage * msg);


/// Initialize array of action/Fibonacci messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_interfaces_ysj__action__Fibonacci_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
bool
my_interfaces_ysj__action__Fibonacci_FeedbackMessage__Sequence__init(my_interfaces_ysj__action__Fibonacci_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Fibonacci messages.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_FeedbackMessage__Sequence__fini(my_interfaces_ysj__action__Fibonacci_FeedbackMessage__Sequence * array);

/// Create array of action/Fibonacci messages.
/**
 * It allocates the memory for the array and calls
 * my_interfaces_ysj__action__Fibonacci_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
my_interfaces_ysj__action__Fibonacci_FeedbackMessage__Sequence *
my_interfaces_ysj__action__Fibonacci_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Fibonacci messages.
/**
 * It calls
 * my_interfaces_ysj__action__Fibonacci_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_interfaces_ysj
void
my_interfaces_ysj__action__Fibonacci_FeedbackMessage__Sequence__destroy(my_interfaces_ysj__action__Fibonacci_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES_YSJ__ACTION__DETAIL__FIBONACCI__FUNCTIONS_H_
