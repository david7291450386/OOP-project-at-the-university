#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


int main() 
{
    int value1 = 0;
    int value2 = 0;
    std::cin >> value1 >> value2;
    auto sum_func = [value1, value2]()
    {
        return value1 + value2;
    };

    std::cout << sum_func() << std::endl;

    return 0;
}