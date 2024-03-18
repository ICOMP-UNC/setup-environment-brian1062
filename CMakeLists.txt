
cmake_minimum_required(VERSION 3.25 FATAL_ERROR)


project(
    "FirstProyectInCMake"
    VERSION 1.0.0
    DESCRIPTION "C Project template for os2"
    LANGUAGES C
)

set(CMAKE_C_STANDARD 17)

include_directories(include)

#definimos codigo fuente
file(GLOB_RECURSE SOURCES "src/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})

#Compile the libraries
add_subdirectory(lib/libdyn)
add_subdirectory(lib/libsta)

#include headers in lib
target_include_directories(${PROJECT_NAME} PUBLIC lib/libdyn/include)
target_include_directories(${PROJECT_NAME} PUBLIC lib/libsta/include)

target_link_libraries(${PROJECT_NAME} StatiCLib DynamiCLib)