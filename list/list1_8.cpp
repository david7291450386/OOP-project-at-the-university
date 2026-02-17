#include <forward_list>
#include <iostream>

int main() 
{
    int n; std::cin >> n;
    int positive = 0, negative = 0;
    std::forward_list<int> nums;
    int k;

    for (int i = 0; i < n; ++i) 
    {
        std::cin >> k;
        nums.push_front(k);
    }

    int min_to_find;
    std::cin >> min_to_find;
    nums.sort();
    int count_min = 0;

    for (auto it = nums.begin(); it != nums.end(); ++it) 
    {
        if (count_min == min_to_find) 
        {
            std::cout << *it << std::endl;
            break;
        }
        ++count_min;
    }

    return 0;
}