#include "shared.h"
#include <stdio.h>
#include <string.h>

int shared_lib_funtion(char* msg){
    printf("Hi! I'm a shared library that receives '%s', and return '%d' \n", msg, strlen(msg));
    return strlen(msg);
}