#include <forward_list>
#include <iostream>

int main() 
{
    int n; std::cin >> n;
    int k;
    std::forward_list<int> nums;
    
    for (int i = 0; i < n; ++i) 
    {
        std::cin >> k;
        nums.push_front(k);
    }

    nums.reverse();
    int k1, k2;
    std::cin >> k1 >> k2;
    auto it1 = nums.begin();
    auto it2 = nums.begin();

    for (int i = 1; i < k1; ++i) ++it1;
    for (int i = 1; i < k2; ++i) ++it2;

    std::swap(*it1, *it2);
    for (auto it = nums.begin(); it != nums.end(); ++it)
        std::cout << *it << ' ';
    
    return 0;
}