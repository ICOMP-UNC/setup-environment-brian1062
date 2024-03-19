#include "greetings.h"
#include <stdio.h>

#include "shared.h"
#include "static.h"

/**
 * @file main.c
 * @brief Main source file of the project.
 */

/**
 * @brief Main function of the program.
 *
 * This is the entry point of the program. It prints a greeting message,
 * calls the greetings function from another source file, and also calls
 * functions from shared and static libraries.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of strings containing the command-line arguments.
 * @return 0 if the program exits successfully, non-zero otherwise.
 */
int main(int argc, char **argv)
{
    printf("Hello, world!. Primer Proyecto con CMake\n");
    greetings();
    printf("Calling shared library function from main program.; '%d'\n", shared_lib_funtion("Hello from main"));
    printf("Calling static library function from main program.; '%d'\n", static_lib_function("bye from main"));
    return 0;
}
