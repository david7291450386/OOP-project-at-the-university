#include <forward_list>
#include <vector>
#include <iostream>

int main() 
{
    int m;
    int n;
    int k;
    std::vector<int> nums_bigger_than_n;
    std::cin >> m;
    std::forward_list<int> nums;

    for (int i = 0; i < m; ++i) 
    {
        std::cin >> k;
        nums.push_front(k);
    }

    nums.reverse();
    std::cin >> n;
    auto it = nums.begin();
    int idx = 1;
    while (it != nums.end() && idx < n) 
    {
        ++idx;
        ++it;
    }

    int value_n = *it;

    std::for_each(nums.begin(), nums.end(), [value_n, &nums_bigger_than_n](int _val)
    {
        if (_val > value_n)
            nums_bigger_than_n.push_back(_val);
    });
    for (int i = 0; i < nums_bigger_than_n.size(); ++i)
        std::cout << nums_bigger_than_n[i] << std::endl;

    return 0;
}