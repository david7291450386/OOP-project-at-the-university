#include <iostream>


int main() 
{
    auto hello_world = []() { std::cout << "Hello lambda!"; };
    hello_world();
    return 0;
}