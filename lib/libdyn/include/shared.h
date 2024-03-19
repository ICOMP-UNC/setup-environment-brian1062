#pragma once

/**
 * @file shared.h
 * @brief Header file for the shared library function.
 */

/**
 * @brief Function declaration for the shared library.
 *
 * This function receives a message as input, processes it, and returns an integer.
 *
 * @param msg The message to be processed.
 * @return The result of processing the message.
 */
int shared_lib_funtion(char *msg);
