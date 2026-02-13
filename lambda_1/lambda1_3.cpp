#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>


int main() 
{
    int size_of_records = 0;
    std::cin >> size_of_records;
    std::vector<int> num_record(size_of_records);

    for_each(num_record.begin(), num_record.end(),
        [](int& _val) { std::cin >> _val; }
    );

    for_each(num_record.begin(), num_record.end(),
        [](int &_val) 
	{
            _val = abs(_val);
            std::cout << std::abs(_val) << " ";
        }
    );

    return 0;
}