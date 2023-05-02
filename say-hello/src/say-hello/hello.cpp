#include <iostream>
#include "hello.hpp"

void hello::say_hello()
{
    // say hello
    std::cout << "Hello, world!\n";
    std::cout << "Say Hello from version = " << SAY_HELLO_VERSION << "\n";
}