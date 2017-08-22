#include "function.h"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;

void printXY(int x, int y)
{
	for (int i = x; x <= y; ++x)
	{
		cout << x << "\n";
	}
}

int Largest(int qtyRequest)
{
	int large = 0;
	int input;
	for (int i = 0; i < qtyRequest; ++i)
	{
		cout << "number please\n";
		cin >> input;
		if (input > large)
		{
			large = input;
		}
	}
	return large;
}

void evenOrOdd(int start, int end)
{
	for (int i = start; i < end; ++i)
	{
		if (i % 2 == 0)
		{
			cout << "Even\n";
		}
		else
		{
			cout << "Odd\n";
		}
	}
}

void fizzBuzz(int start, int end)
{
	for (int i = start; i <= end; i++)
	{
		if (i % 3 == 0)
		{
			cout << "Fizz\n";
		}
		else if (i % 5 == 0)
		{
			cout << "Buzz\n";
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			cout << "FizzBuzz\n";
		}
		else
		{
			cout << i << "\n";
		}
		
	}




}

void gridGen(int width, int height)
{
	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < width; ++j)
		{
			cout << "X";
		}
		cout << "\n";
	}


}

void guessTheNumber(int lower, int upper, int tryCount)
{
	int secret = rand() % (upper-lower) + lower;

	bool success = false;
	for (int i = 0; i < tryCount; ++i)
	{
		int input = 0;
		cout << "input a number\n";
		
		cin >> input;
		if (input > secret)
		{
			cout << "Too high\n";
		}
		else if (input < secret)
		{
			cout << "Too low\n";
		}
		else
		{
			success = true;
			break;
		}

	}
	if (success = true)
	{
		cout << "congrats\n";
	}
	else
	{
		cout << "you lost\n";
	}


}


