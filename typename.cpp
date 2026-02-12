#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <Windows.h>

using namespace std;

template<typename T>
void print(T value) 
{
    cout << "Value is " << value << endl;
}

template<typename T>
void print(vector<T> vec) 
{
    cout << "Values are";

    for (const auto& elem : vec) 
        cout << " " << elem;
    
    cout << endl;
}

template<typename T>
T custom_max(T a, T b) 
{
    if (a > b)
        return a;
    else
        return b;
}

template<typename T>
T custom_max(vector<T> vec) 
{
    if (vec.empty()) 
    {
        cout << "Vector is empty" << endl;
        return T();
    }

    T max_val = vec[0];
    for (const auto& elem : vec) 
    {
        if (elem > max_val) max_val = elem; 
    }
    return max_val;
}

template<typename Container, typename Element>
int custom_count(Container container, Element target, int size)
{
    int count = 0;
    for (int i = 0; i < size; ++i)
    {
        if (container[i] == target) count++;
    }
    return count;
}

void process_print() 
{
    string type;
    cin >> type;

    if (type == "INT") 
    {
        int value;
        cin >> value;
        print(value);
    }
    else if (type == "DOUBLE") 
    {
        double value;
        cin >> value;
        print(value);
    }
    else if (type == "CHAR") 
    {
        char value;
        cin >> value;
        print(value);
    }
    else if (type == "STRING") 
    {
        string value;
        cin >> value;
        print(value);
    }
    else if (type == "VECTOR") 
    {
        int size;
        cin >> size;
        vector<int> vec(size);
        for (int i = 0; i < size; ++i) 
        {
            cin >> vec[i];
        }
        print(vec);
    }
}

void process_max_part1() 
{
    string type;
    cin >> type;

    if (type == "INT") 
    {
        int a, b;
        cin >> a >> b;
        cout << custom_max(a, b) << endl;
    }
    else if (type == "DOUBLE") 
    {
        double a, b;
        cin >> a >> b;
        cout << custom_max(a, b) << endl;
    }
    else if (type == "STRING") 
    {
        string a, b;
        cin >> a >> b;
        cout << custom_max(a, b) << endl;
    }
}

void process_max_part2() 
{
    string type;
    cin >> type;

    if (type == "INT") 
    {
        int a, b;
        cin >> a >> b;
        cout << custom_max(a, b) << endl;
    }
    else if (type == "DOUBLE") 
    {
        double a, b;
        cin >> a >> b;
        cout << custom_max(a, b) << endl;
    }
    else if (type == "STRING") 
    {
        string a, b;
        cin >> a >> b;
        cout << custom_max(a, b) << endl;
    }
    else if (type == "VECTOR") 
    {
        int size;
        cin >> size;
        vector<int> vec(size);
        for (int i = 0; i < size; ++i) 
        {
            cin >> vec[i];
        }
        cout << custom_max(vec) << endl;
    }
}

void process_count() 
{
    string type;
    cin >> type;

    if (type == "VECINT") 
    {
        int size;
        cin >> size;
        vector<int> vec(size);
        for (int i = 0; i < size; ++i) 
        {
            cin >> vec[i];
        }
        int target;
        cin >> target;
        cout << custom_count(vec, target, size) << endl;
    }
    else if (type == "VECDOUBLE") 
    {
        int size;
        cin >> size;
        vector<double> vec(size);
        for (int i = 0; i < size; ++i) 
        {
            cin >> vec[i];
        }
        double target;
        cin >> target;
        cout << custom_count(vec, target, size) << endl;
    }
    else if (type == "STRING") 
    {
        string str;
        cin >> str;
        char target;
        cin >> target;
        cout << custom_count(str, target, str.length()) << endl;
    }
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    const int size = 5;
    int arr[size]{ 1, 2, 3, 4, 5 };

    cout << custom_count(arr, 2, size) << endl;

	return 0;
}
