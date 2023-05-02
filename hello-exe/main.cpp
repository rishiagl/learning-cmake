#include <iostream>
#include <say-hello/hello.hpp>

int main()
{
    hello::say_hello();
    std::cout << "Say Hello from MAIN from version = " << SAY_HELLO_VERSION << "\n";
}