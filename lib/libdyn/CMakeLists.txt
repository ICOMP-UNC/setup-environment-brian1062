
cmake_minimum_required(VERSION 3.25 FATAL_ERROR)


project(
    "DynamiCLib"
    VERSION 1.0.0
    DESCRIPTION "Dinamic Library for C"
    LANGUAGES C
)

set(CMAKE_C_STANDARD 17)

include_directories(include)

# define source code
file(GLOB_RECURSE SOURCES "src/*.c")

add_library(${PROJECT_NAME} SHARED ${SOURCES})
