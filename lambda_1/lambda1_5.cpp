#include <iostream>
#include <vector>
#include <algorithm>


int main() 
{
    int n;
    bool problem;
    int count = 0;
    std::cin >> n;
    std::vector <int> cities(n);

    std::for_each(cities.begin(), cities.end(), 
        [&problem, &count](int& _val){
            std::cin >> _val;
            if (_val < 75) {
                problem = true;
                ++count;
            }
        }
    );

    if (problem) 
    {
        std::cout << "SOME PLACES HAVE PROBLEMS" << std::endl;
        std::cout << count << std::endl;
    }
    else
    {
        std::cout << "PEARL OF COUNTRY" << std::endl;
    }

    return 0;
}