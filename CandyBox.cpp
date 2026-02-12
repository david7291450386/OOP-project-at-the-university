#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <Windows.h>

using namespace std;

class CandyBox
{
private:
	int cnt;

	int* candies;

public:
	CandyBox() : cnt(0), candies(NULL) {};

	CandyBox(int count) : cnt(count)
	{
		candies = new int[cnt];
	}

	CandyBox(const CandyBox& other) : cnt(other.cnt)
	{
		cout << "вызвался";
		candies = new int[other.cnt];
		for (int i = 0; i < cnt; i++)
		{
			candies[i] = other.candies[i];
		}
	}

	void read()
	{
		for (int i = 0; i < cnt; i++)
			cin >> candies[i];
	}

	void print()
	{
		for (int i = 0; i < cnt; i++)
			cout << candies[i] << "  ";
	}

	int varieties()
	{
		if (cnt == 0) return 0;

		int* c = new int[cnt];

		for (int i = 0; i < cnt; i++)
		{
			c[i] = candies[i];
		}
		
		int unique_count{ 1 }; // индекс с 1, потому что первый элемент автоматически уникальный  :)
		for (int i = 1; i < cnt; i++)
		{
			if (c[i] != c[i - 1]) unique_count++;
		}

		delete[] c;
		return unique_count; // возврат накопленного результата
	}

	int size()
	{
		return cnt;
	}

	int &at(int index)
	{
		return candies[index];
	}
		
	~CandyBox()
	{
		delete[] candies;
	}
};

CandyBox Alice_process(CandyBox b)
{
	int size = b.size();
	int half = size / 2;

	vector<int> remaining;
	for (int i = half; i < size; i++) 
		remaining.push_back(b.at(i));


	for (int i = 0; i < size; i++)
		b.at(i) = 0;


	int write_index = 0;
	for (int i = 0; i < remaining.size(); i++) 
	{
		if (write_index < size) 
		{
			b.at(write_index) = remaining[i];
			write_index += 2;
		}
	}
	return b;
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int M; cin >> M;

	CandyBox a(M);
	a.read();

	CandyBox result = Alice_process(a);



	result.print();

	return 0;
}
