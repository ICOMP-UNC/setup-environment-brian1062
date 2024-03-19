#include "shared.h"
#include <stdio.h>
#include <string.h>

/**
 * @file shared.c
 * @brief Implementation file for the shared library functions.
 */

/**
 * @brief Function in the shared library.
 *
 * This function receives a message as input, prints it to the standard output,
 * and returns the length of the message.
 *
 * @param msg The message to be processed.
 * @return The length of the message.
 */
int shared_lib_funtion(char *msg)
{
    printf("Hi! I'm a shared library that receives '%s', and return '%d' \n", msg, strlen(msg));
    return strlen(msg);
}
