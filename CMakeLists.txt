cmake_minimum_required(VERSION 3.26)
project(MyProject VERSION 1.0.0)

add_subdirectory(say-hello)
add_subdirectory(hello-exe)

function(do_cmake_good first second third)
    #for all arguments which are not bound to any variable
    foreach(arg IN LISTS ARGN)
        message(STATUS "Got ARGN argument: ${arg}")
    endforeach()
    #for all arguments whether they are bound to a variable or nothing
    foreach(arg IN LISTS ARGV)
        message(STATUS "Got ARGV argument: ${arg}")
    endforeach()
endfunction()

do_cmake_good(1 2 3 4 5 6 7 8)

#Scope in CMake

function(increment var)
    math(EXPR new_value "${${var}} + 1")
    set("${var}" "${new_value}" PARENT_SCOPE)
endfunction()

set(value 14)
increment(value)
increment(value)
message(STATUS "(increment)Final value is ${value}")

function(sum out a b)
    math(EXPR ret "${a} + ${b}")
    set("${out}" "${ret}" PARENT_SCOPE)
endfunction()

sum(value 3 5)
message(STATUS "(sum)Final value is ${value}")

