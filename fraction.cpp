#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <Windows.h>

using namespace std;

class Drobi
{
private:
    int x; // числитель
    int y; // знаменатель 
public:
    Drobi(int x = 0, int y = 1)
    {
        this->x = x;
        this->y = y;
    }

    void read(char slash)
    {
        cin >> x >> slash >> y;
    }

    void show()
    {
        cout << x << "/" << y << endl;
    }

    Drobi operator + (const Drobi& other)
    {
        int new_x = x * other.y + other.x * y;
        int new_y = y * other.y;
        return Drobi(new_x, new_y);
    }

    Drobi operator - (const Drobi& other)
    {
        int new_x = x * other.y - other.x * y;
        int new_y = y * other.y;
        return Drobi(new_x, new_y);
    }

    Drobi operator * (const Drobi& other)
    {
        int new_x = x * other.x;
        int new_y = y * other.y;
        return Drobi(new_x, new_y);
    }

    Drobi operator / (const Drobi& other)
    {
        int new_x = x * other.y;
        int new_y = y * other.x;
        return Drobi(new_x, new_y);
    }

    Drobi operator - () const
    {
        return Drobi(-x, y);
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Drobi a;
    Drobi b;
    Drobi c;
    Drobi d;
    Drobi e;
    char znak = '/';

    a.read(znak);
  
        //c = a + b;
    
        //c = a - b;
    
        //c = a * b;

    e = -a;
    
    e.show();

    return 0;
}
