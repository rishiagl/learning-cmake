cmake_minimum_required(VERSION 3.26)
project(MyProject VERSION 1.0.0)

add_subdirectory(say-hello)
add_subdirectory(hello-exe)

set(MY_STRING "This is a string")
set(MY_OTHER_STRING "This is a string")
set(my_value 4)

if((MY_STRING STREQUAL MY_OTHER_STRING) AND ("1" EQUAL my_value))
    message(STATUS "Condition was met")
elseif(MY_OTHER_STRING MATCHES "string$")
    message(STATUS "Variable ends with the word 'string'")
else()
    message(STATUS "Condition failed")
endif()