#include <forward_list>
#include <iostream>

int main() 
{
    int n; int k;
    std::cin >> n;
    std::forward_list<int> nums;

    for (int i = 0; i < n; ++i) 
    {
        std::cin >> k;
        nums.push_front(k);
    }
    
    for (auto it = nums.begin(); it != nums.end(); ++it)
        std::cout << *it << ' ';

    return 0;
}