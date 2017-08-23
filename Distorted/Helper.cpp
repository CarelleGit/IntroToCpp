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

void Clearing()
{
	for (int i = 0; i < 100; i++)
	{
		cout << "\n";
	}

}
