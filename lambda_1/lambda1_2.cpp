#include <iostream>

int main() 
{
    int val1 = 0;
    int val2 = 0;
    std::cin >> val1 >> val2;

    auto lambda_sum = [](int v1, int v2) { return v1 + v2; };
    std::cout << lambda_sum(val1, val2) << std::endl;

    return 0;
}