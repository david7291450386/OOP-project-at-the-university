#include <iostream>
#include <forward_list>

int main() 
{
    int n;
    std::cin >> n;
    std::forward_list<int> nums;

    for (int i = 0; i < n; ++i) 
    {
        int t;
        std::cin >> t;
        nums.push_front(t);
    }

    nums.sort(std::greater<int>());
    int multiplier = 1;
    int total_time = 0;

    for (auto it = nums.begin(); it != nums.end(); ++it) 
    {
        total_time += *it * multiplier;
        ++multiplier;
    }

    std::cout << total_time << ' ';

    return 0;
}