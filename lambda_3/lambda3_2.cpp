#include <iostream>
#include <vector>
#include <algorithm>

int main() 
{
    int n;
    int positive = 0, negative = 0;
    std::cin >> n;
    std::vector <int> dataset(n);

    std::for_each(dataset.begin(), dataset.end(), 
        [&positive, &negative](int& _val)
        {
            std::cin >> _val;
            if (_val < 0)
                ++negative;
            else
                ++positive;
        }
    );

    if (negative == 0) 
    {
	std::cout << "CLEAR DATASET" << std::endl;
    }
    else if (negative > dataset.size() / 2)
    {
        std::cout << "DATASET CORRUPT!" << std::endl;
    }
    else 
    {
        std::cout << "REPAIR" << std::endl;

        auto result = std::for_each(dataset.begin(), dataset.end(), 
            [](int _val) 
            {
                std::cout << std::abs(_val) << ' ';
            }
        );
    }

    return 0;
}