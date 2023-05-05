cmake_minimum_required(VERSION 3.26)
project(MyProject VERSION 1.0.0)

add_subdirectory(say-hello)
add_subdirectory(hello-exe)

set(MY_STRING "This is a string")
set(MY_OTHER_STRING "This is a string")
set(my_value 4)

foreach(idx RANGE 0 99 5)
    message(STATUS "Index is: ${idx}")
endforeach()