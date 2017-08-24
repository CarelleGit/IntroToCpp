#include "Helper.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

void nameInput(std::string & UserInput)
{
	cout << "\n";
	cin >> UserInput;
}

void Gender(std::string & Input)
{
	cout << "\n";
	cin >> Input;
}

void Clearing()
{
	for (int i = 0; i < 100; i++)
	{
		cout << "\n";
	}

}

void pausing()
{
	char Enter;
	bool Pause = true;
	cout << "Press any key to continue\n";
	cin >> Enter;
	while (Pause == true)
	{
		switch (Enter)
		{
		default:
		case '1':
			Pause = false;
			break;
		}
	}

}
