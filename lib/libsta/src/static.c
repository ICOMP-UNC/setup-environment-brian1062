#include "static.h"
#include <stdio.h>
#include <string.h>

/**
 * @file static.c
 * @brief Implementation file for the static library function.
 */

/**
 * @brief Function in the static library.
 *
 * This function receives a message as input, prints it to the standard output,
 * and returns the length of the message.
 *
 * @param msg The message to be processed.
 * @return The length of the message.
 */
int static_lib_function(char *msg)
{
    printf("Hi! I'm a static library that receives '%s', and return '%d' \n", msg, strlen(msg));
    return strlen(msg);
}
