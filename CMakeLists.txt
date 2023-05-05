cmake_minimum_required(VERSION 3.26)
project(MyProject VERSION 1.0.0)

add_subdirectory(say-hello)
add_subdirectory(hello-exe)

set(MY_VARIABLE "I am a Variable")
message(STATUS "The variable value is: ${PROJECT_VERSION}")