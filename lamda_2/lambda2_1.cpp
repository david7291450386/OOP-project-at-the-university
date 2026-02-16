#include <iostream>
#include <algorithm>

int main() 
{
    int test_value = 0;
    std::cin >> test_value;

    auto sum_func = [test_value]()
    {
        std::cout << "Lymbda take value: " << test_value; 
    };

    sum_func();

    return 0;
}