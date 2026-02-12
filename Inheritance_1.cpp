#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <Windows.h>

using namespace std;

class Car
{
protected:
    int pos;

public:
    Car() : pos(0) {};

    void move(int direction)
    {
        pos += direction;
    }

    int get_position()
    {
        return pos;
    }
};

class Bus : public Car
{
protected:
    int capacity;
    long long passenger_count;
    vector<int> passengers;

public:
    Bus(int cap) : capacity(cap), passenger_count(0), Car() {};

    bool add_passenger(int destination)
    {
        if (passenger_count >= capacity)
        {
            cout << "Автобус полный, нельзя добавить пассажира" << endl;
            return false;
        }
        
        passengers.push_back(destination);
        passenger_count++;
        cout << "Пассажир добавлен, этаж назначения: " << destination << endl;
        return true;
    }
    
    bool remove_passenger(int destination)
    {
        auto it = find(passengers.begin(), passengers.end(), destination);
        if (it != passengers.end())
        {
            passengers.erase(it);
            passenger_count--;
            cout << "Пассажир вышел на этаже " << destination << endl;
            return true;
        }
        return false;
    }
    
    void remove_all_at_current_position()
    {
        int count = 0;
        auto it = passengers.begin();
        while (it != passengers.end())
        {
            if (*it == pos)
            {
                it = passengers.erase(it);
                passenger_count--;
                count++;
            }
            else
            {
                ++it;
            }
        }
        
        if (count > 0)
        {
            cout << "Высажено пассажиров на этаже " << pos << ": " << count << endl;
        }
    }
    
    void move_to_floor(int floor)
    {
        int direction = (floor > pos) ? 1 : -1;
        while (pos != floor)
        {
            move(direction);
            cout << "Автобус на этаже: " << pos << endl;
            remove_all_at_current_position();
        }
    }
    
    int get_passenger_count()
    {
        return passenger_count;
    }
    
    int get_capacity()
    {
        return capacity;
    }
    
    void display_info()
    {
        cout << "\nИнформация об автобусе" << endl;
        cout << "Текущий этаж: " << pos << endl;
        cout << "Вместимость: " << capacity << endl;
        cout << "Пассажиров: " << passenger_count << endl;
        cout << "Пассажиры: ";
        if (passengers.empty())
        {
            cout << "нет пассажиров";
        }
        else
        {
            for (int dest : passengers)
            {
                cout << dest << " ";
            }
        }
        cout << "\n----------------------------\n" << endl;
    }
    
    vector<int> get_passengers()
    {
        return passengers;
    }
};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    
}
