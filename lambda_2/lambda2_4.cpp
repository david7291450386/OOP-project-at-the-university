#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() 
{
    int size_of_records = 0;
    int left, right;
    std::cin >> size_of_records;
    std::vector<int> num_record(size_of_records);

    std::for_each(num_record.begin(), num_record.end(),
        [](int& _val) 
        {
            std::cin >> _val;
        }
    );
    std::cin >> left >> right;
    std::for_each(num_record.begin(), num_record.end(),
        [left, right](int _val)
        {
            if (_val > left && _val < right)
                std::cout << _val << ' ';
        }
    );

    return 0;
}