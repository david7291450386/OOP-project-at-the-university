#include <forward_list>
#include <iostream>

int main() 
{
    int m;
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

    nums.reverse();
    int x, p;
    std::cin >> x >> p;

    if (p == 0)
    {
        nums.push_front(x);
    }
    else 
    {
        auto it = nums.before_begin();
        for (int i = 0; i < p; ++i)
            ++it;
        nums.insert_after(it, x);
    }
    for (auto it = nums.begin(); it != nums.end(); ++it)
        std::cout << *it << ' ';

    return 0;
}