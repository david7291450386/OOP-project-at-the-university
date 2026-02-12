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
	Car(): pos(0) {};

	void move(int direction) 
	{
		pos += direction;
	}

	void get_position() 
	{
		cout << pos << endl;
	}
};

class Taxi	: public Car 
{
protected:
	int cost;
	int cost_count;
	long long distance;

public:
	Taxi() : cost(0), distance(0), cost_count(0) {};
	
	long long get_total_cost() 
	{
		cost_count = cost * distance;
		cout << cost_count;
		return cost_count;
	}

	void reset(string res)
	{
		if (res == "RESET") 
			cost_count = 0;
	}

	void move(int direction)
		pos += direction;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Car car;
	int K; cin >> K;
	string command;
	int dir;
	

	for (int i = 0; i < K; i++)
	{
		cin >> command;
		if (command == "MOVE")
		{
			cin >> dir;
			car.move(dir);
		}
		else if(command == "POSITION") 
		{
			car.get_position();
		}

	}

  return 0;
}




/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


}
*/
