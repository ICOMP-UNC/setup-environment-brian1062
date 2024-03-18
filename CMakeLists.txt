
cmake_minimum_required(VERSION 3.25 FATAL_ERROR)


project(
    "FirstProyectInCMake"
    VERSION 1.1.0
    DESCRIPTION "C Project template for os2"
    LANGUAGES C
)

#Enable testing and add the test
include(CTest)

set(CMAKE_C_STANDARD 17)

include_directories(include)

#To automatic download the external deps, we use FetchContent
include(FetchContent)

#Usamos Unity para descargar los test para nuestros programas
set(UNITY_GIT_URL "https://github.com/ThrowTheSwitch/Unity.git")

#Enable debug
set(FETCHCONTENT_QUIET OFF)

FetchContent_Declare(
    Unity
    GIT_REPOSITORY ${UNITY_GIT_URL}
    SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/external/Unity
    UPDATE_COMMAND "" # DISABLE THE UPDATE COMMAND
)

FetchContent_MakeAvailable(Unity)

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


if(RUN_TESTS EQUAL 1 OR RUN_COVERAGE EQUAL 1)
    add_subdirectory(tests)
endif()
