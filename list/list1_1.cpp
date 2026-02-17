#include <forward_list>
#include <iostream>

int main() 
{
    int n;
    int k;
    int positive = 0, negative = 0;
    std::cin >> n;
    std::forward_list<int> nums;
    
    for (int i = 0; i < n; ++i) 
    {
        std::cin >> k;
        nums.push_front(k);
    }

    std::for_each(nums.begin(), nums.end(), [&positive, &negative](int _val)
    {
        if (_val < 0)
            ++negative;
        else if (_val >= 0)
            ++positive;
    });

    if (positive == negative)
        std::cout << "одинаково" << std::endl;
    else if (positive > negative)
        std::cout << "положительных" << std::endl;
    else
        std::cout << "отрицательных" << std::endl;

    return 0;
}