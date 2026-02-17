#include <forward_list>
#include <vector>
#include <iostream>

int main() 
{
    int n; std::cin >> n;
    int t;
    std::forward_list<int> nums;
    
    for (int i = 0; i < n; ++i) 
    {
        std::cin >> t;
        nums.push_front(t);
    }

    nums.reverse();
    int k;
    std::cin >> k;

    for (int i = 0; i < k; ++i) 
    {
        std::vector<int> even, odd;
        int idx = 0;
        for (auto it = nums.begin(); it != nums.end(); ++it) 
        {
            if (idx % 2 == 0)
                even.push_back(*it);
            else
                odd.push_back(*it);
            ++idx;
        }

        std::forward_list<int> new_nums;
        auto before = new_nums.before_begin();

        for (int v : even)
            before = new_nums.insert_after(before, v);
        for (int v : odd)
            before = new_nums.insert_after(before, v);
        nums = new_nums;
        for (auto it = nums.begin(); it != nums.end(); ++it)
            std::cout << *it << ' ';

        std::cout << std::endl;
    }

    return 0;
}