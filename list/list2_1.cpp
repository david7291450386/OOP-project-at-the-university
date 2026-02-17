#include <iostream>
#include <forward_list>

int main() 
{
    int n; std::cin >> n;
    int x;
    std::forward_list<int> nums;

    for (int i = 0; i < n; ++i) 
    {
        std::cin >> x;
        nums.push_front(x);
    }

    nums.reverse(); 
    int min_val = *nums.begin(), max_val = *nums.begin();

    for (int val : nums) 
    {
        if (val < min_val) min_val = val;
        if (val > max_val) max_val = val;
    }

    auto before = nums.before_begin();
    auto it = nums.begin();

    while (it != nums.end()) 
    {
        auto curr = it;
        ++it;
        if (*curr == min_val && (it == nums.end() || *it != max_val)) 
        {
            nums.insert_after(curr, max_val);
            ++it;
        }
    }

    for (int val : nums) 
        std::cout << val << ' ';

    return 0;
}