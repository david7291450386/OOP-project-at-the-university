#include <forward_list>
#include <iostream>

int main() 
{
    int m;
    int n;
    int k;
    int positive = 0;
    int negative = 0;
    std::cin >> n;
    std::forward_list<int> nums;
    
    for (int i = 0; i < n; ++i) 
    {
        std::cin >> k;
        nums.push_front(k);
    }

    std::cin >> m;

    for (auto it = nums.begin(); it != nums.end(); ++it) 
    {
        if (*it % m == 0)
            std::cout << *it << ' ';
    }

    return 0;
}