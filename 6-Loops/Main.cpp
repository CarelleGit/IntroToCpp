#include <iostream>
#include "function.h"
using std::cout;
using std::cin;
int main()
{
	
	/*while
	int iter = 0;
	while (iter < 11)
	{
		cout << iter << "\n";
		iter++;
	}
	-------------------------------------
	for
	system("pause");
	for (int i = 0; i < 11; ++i)
	{
		cout << i << "\n";
	}

	system("pause");
	--------------------------------------
	do while

	int j = 0;
	do
	{
		cout << j << "\n";
		++j;
	} while (j < 11);
	--------------------------------------
	system("pause");
	simple input validation
	int userInput = -1;
	do
	{
		cout << "Give me a number between 1 and 5\n"; 4
		cin >> userInput;
	} while (userInput < 1 || userInput > 5);
	cout << "yay\n";
	---------------------------------------*/
	system("pause");

	cout << "1 - 100\n";
	cout << "\n";
	for (int i = 1; i <= 100; i++)
	{
		cout << i << "\n";
	}
	//---------------------------------------
	system("pause");

	cout << "100 - 1\n";
	for (int i = 100; i >= 1; i--)
	{
		cout << i << "\n";
	}
	//---------------------------------------
	system("pause");

	int year = 1995;
	do
	{
		cout << year << "\n";
		year++;
	} while (year <= 2017);
	//---------------------------------------
	system("pause");

	printXY(1, 3);
	system("pause");
	cout << "largest: " << Largest(4) << "\n";
	system("pause");
	evenOrOdd(1, 5);
	system("pause");
	fizzBuzz(1, 10);
	system("pause");
	gridGen(1, 3);
	system("pause");
	guessTheNumber(2, 20, 5);
	//---------------------------------------
	system("pause");


}