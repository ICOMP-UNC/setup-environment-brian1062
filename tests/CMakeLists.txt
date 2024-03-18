cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

#include headers project
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ ../include)

#Collect tests
file(GLOB TESTS_FILES ${CMAKE_CURRENT_SOURCE_DIR}/unit/*.c)
file(GLOB SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/ ../src/logic.c)

#Link with Unity header
target_link_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/external/Unity/src)

# Coverage ahora no lo necesitamos

#Create test executable
add_executable(test_${PROJECT_NAME} ${TESTS_FILES} ${SRC_FILES})

#Link with Unity 
target_link_libraries(test_${PROJECT_NAME} unity)

#add test
add_test(NAME test_${PROJECT_NAME} COMMAND test_${PROJECT_NAME})