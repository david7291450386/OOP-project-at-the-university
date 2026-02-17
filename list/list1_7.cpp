#include <forward_list>
#include <iostream>

int main() 
{
    int n;
    std::cin >> n;
    std::forward_list<int> nums;
    int _val;
    for (int i = 0; i < n; ++i) 
    {
        std::cin >> _val;
        nums.push_front(_val);
    }

    nums.reverse();
    int k, m;
    std::cin >> k >> m;
    auto before = nums.before_begin();

    for (int i = 0; i < k; ++i)
        ++before;
    auto after = before;

    for (int i = 0; i <= m - k + 1; ++i)
        ++after;

    nums.erase_after(before, after);

    for (auto it = nums.begin(); it != nums.end(); ++it)
        std::cout << *it << ' ';

    return 0;
}