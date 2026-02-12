#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>

using namespace std;

class Figure
{
public:
    Figure() {};

    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual void draw() = 0;

    virtual ~Figure() {};
};

class Rectangle : public Figure
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {};

    double area() override
    {
        return height * width;
    }

    double perimeter() override
    {
        return 2 * (width + height);
    }

    void draw() override
    {
        for (int i = 0; i < (int)height; i++) 
        {
            for (int j = 0; j < (int)width; j++) 
            {
                cout << "#";
            }
            cout << endl;
        }
    }
};

class Circle : public Figure
{
private:
    double radius;
    const double pi = 3.1415;

public:
    Circle(double r) : radius(r) {};

    double area() override
    {
        return pi * radius * radius;
    }

    double perimeter() override
    {
        return 2 * pi * radius;
    }

    void draw() override
    {
        int r = (int)radius;
        int size = 2 * r + 1;

        for (int y = 0; y < size; y++)
        {
            for (int x = 0; x < size; x++)
            {
                int dx = x - r;
                int dy = y - r;
                if (dx * dx + dy * dy <= r * r)
                    cout << "#";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }
};

double array_area(Figure** array, int n)
{
    double total_area = 0;
    for (int i = 0; i < n; i++)
    {
        total_area += array[i]->area();
    }
    return total_area;
}

double array_perimeter(Figure** array, int n)
{
    double total_perimeter = 0;
    for (int i = 0; i < n; i++)
    {
        total_perimeter += array[i]->perimeter();
    }
    return total_perimeter;
}

void draw_array(Figure** array, int n)
{
    for (int i = 0; i < n; i++) 
    {
        array[i]->draw();
        cout << endl;
    }
}

int main()
{
    int N; cin >> N;

    Figure** figures = new Figure*[N];

    for (int i = 0; i < N; i++)
    {
        string command; cin >> command;

        if (command == "Rectangle") 
        {
            double w, h;
            cin >> w >> h;

            figures[i] = new Rectangle(w, h);
        }
        else if (command == "Circle")
        {
            double r; cin >> r;

            figures[i] = new Circle(r);
        }
        else 
        {
            cout << "be: " << command << endl;
            figures[i] = nullptr;
        }
    }

    // cout << fixed << setprecision(4) << array_area(figures, N) << " " << array_perimeter(figures, N) << endl;

    draw_array(figures, N);

    for (int i = 0; i < N; i++) 
    {
        delete figures[i];
    }
    delete[] figures;

    return 0;
}
