#include <forward_list>
#include <iostream>
#include <vector>

int main() 
{
    std::forward_list<int> nums;
    int sum = 0, count = 0, x;
    while (std::cin >> x && x != 0) 
   {
        nums.push_front(x);
        sum += x;
        ++count;
    }

    nums.reverse();
    double average = static_cast<double>(sum) / count;
    std::vector<int> result;

    for (int v : nums) 
    {
        if (v > average)
            result.push_back(v);
    }
    std::cout << result.size() << std::endl;

    for (int v : result)
        std::cout << v << " ";

    std::cout << std::endl;

    return 0;
}