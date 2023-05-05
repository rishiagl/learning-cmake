cmake_minimum_required(VERSION 3.26)
project(MyProject VERSION 1.0.0)

add_subdirectory(say-hello)
add_subdirectory(hello-exe)

set(MY_STRING "This is a string")
set(MY_OTHER_STRING "This is a string")
set(my_value 4)

while(my_value LESS 50)
    message(STATUS "Value is ${my_value}")
    math(EXPR my_value "${my_value} + 1")
endwhile()