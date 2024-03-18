#include "greetings.h"
#include <stdio.h>

#include "shared.h"
#include "static.h"

int main(int argc, char **argv)
{
    printf("Hello, world!. Primer Proyecto con CMake\n");
    greetings();
    printf("Calling shared library function from main program.; '%d'\n", shared_lib_funtion("Hello from main"));
    printf("Calling static library function from main program.; '%d'\n", static_lib_function("bye from main"));
    return 0;
}
