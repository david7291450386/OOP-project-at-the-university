#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <Windows.h>
#include <iomanip>
#include <numeric>

bool endswith(std::string s, char c)
{
    if (s[s.size() - 1] == c)
        return true;
    else
        return false;
}

/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    std::string anagram;
    std::getline(std::cin, anagram);
    int left = 0;
    int right = anagram.size() - 1;
    if (anagram[left] == anagram[right])
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string s;
    std::getline(std::cin, s);
    for (int i = 0; i < s.size(); ++i) 
    {
        if (s[i] == 'e')
            s[i] = 'i';
    }
    std::cout << s;
    return 0;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string s;
    char c;
    getline(std::cin, s);
    cin >> c;
    if (endswith(s, c))
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string s;
    int n;
    float count = 0;
    char c;
    std::cin >> n >> c;
    std::cin >> s;

    for (int i = 0; i < n; ++i) 
    {
        if (s[i] == c)
            count++;
    }

    float result = count / n;
    std::cout << result;

    return 0;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string password;
    std::cin >> password;

    bool upper = false, lower = false, digit = false;

    for (int i = 0; i < password.size(); ++i) 
    {
        if (isupper(password[i]))
            upper = true;
        else if (islower(password[i]))
            lower = true;
        else if (isdigit(password[i]))
            digit = true;
    }
    if (password.size() < 8)
        std::cout << "NO" << std::endl;
    if (upper && lower && digit)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string sentence, syllable;
    std::getline(std::cin, sentence);
    std::cin >> syllable;

    sentence += '_';

    std::string word = "";

    for (int i = 0; i < sentence.size(); ++i) 
    {

        if (sentence[i] != '_') 
        {
            word += sentence[i];
        }
        else 
        {
            if (word.size() >= 2)
            {
                std::string start = word.substr(0, 2);
                for (int j = 0; j < 2; ++j) 
                {
                    start[j] = tolower(start[j]);
                }
                if (start == syllable) 
                {
                    std::cout << word << std::endl;
                }
            }
            word = "";
        }
    }

    return 0;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    std::cin >> n;
    std::vector<float> positive, negative;

    for (int i = 0; i < n; ++i) 
    {
        float temp;
        std::cin >> temp;
        if (temp > 0)
            positive.push_back(temp);
        else
            negative.push_back(temp);
    }

    for (int i = 0; i < positive.size(); ++i)
        std::cout << positive[i] << ' ';
    std::cout << std::endl;
    for (int i = 0; i < negative.size(); ++i)
        std::cout << negative[i] << ' ';

    return 0;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    double aver_stars = 0.0;
    std::cin >> n;
    std::vector <double> stars(n);

    for (int i = 0; i < n; ++i) 
    {
        std::cin >> stars[i];
        aver_stars += stars[i];
    }

    aver_stars /= n;

    for (int i = 0; i < n; ++i)
    {
        if (stars[i] > aver_stars)
            std::cout << std::fixed << std::setprecision(2) << stars[i] << ' ';
    }

    return 0;
}
*/

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::vector<int> sums;
    int sum;

    while (true) 
    {
        std::cin >> sum;
        if (sum == 0) break;
        sums.push_back(sum);
    }

    int enough;
    std::cin >> enough;

    int total = std::accumulate(sums.begin(), sums.end(), 0);

    if (total >= enough)
        std::cout << "Enough!" << std::endl;
    else
        std::cout << enough - total << std::endl;

    return 0;
}
