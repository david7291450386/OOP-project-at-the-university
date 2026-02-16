#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() 
{
    int volume_of_mixture = 0;
    std::cin >> volume_of_mixture;
    int volume_of_need = 0;

    auto how_much_volume_need([&volume_of_need, volume_of_mixture]()
    {
        if (volume_of_mixture == 1000) 
        {
            volume_of_need = 0;
            return volume_of_need;
        }
        else if (volume_of_mixture > 1000) 
        {
            volume_of_need = volume_of_mixture - 1000;
            return volume_of_need;
        }
        else 
        {
            volume_of_need = 1000 - volume_of_mixture;
            return volume_of_need;
        }
    });

    how_much_volume_need();
    std::cout << volume_of_need << std::endl;

    return 0;
}