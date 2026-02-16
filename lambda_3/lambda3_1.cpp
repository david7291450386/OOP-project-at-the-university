#include <iostream>
#include <vector>
#include <algorithm>

int main() 
{
    int size_of_records = 0;
    std::cin >> size_of_records;
    std::vector<int> v1(size_of_records);

    std::for_each(v1.begin(), v1.end(),
        [](int& _val) 
        {
            std::cin >> _val;
        }
    );

    int count = std::count_if(v1.begin(), v1.end(), 
        [](int _val)
        {
            return _val > 100;
        }
    );

    std::cout << count << std::endl;

    return 0;
}