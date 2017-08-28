#include "Helper.h"
#include "Stories.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

void nameInput(std::string & UserInput)
{
	cin >> UserInput;
}

void Gender(std::string & Input)
{
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

void MainMenu()
{

	char user;
	bool Exit;
	std::string Name;
	Clearing();
	bool options = false;
	cout << "                     |--------------|Main Menu|-------------|\n";
	cout << "                     |                                      |\n";
	cout << "                     | 1: Play                      2: Exit |\n";
	cout << "                     |--------------------------------------|\n";
	cout << "                     |--------|Enter a number only|---------|\n";
	Exit = false;
	while (Exit == false)
	{
		cin >> user;
		Clearing();
		switch (user)
		{
		default:
		case '3':
			cout << "Invalid type 1 or 2\n";
			break;
		case '1':
			cout << "1: The Pheonix\n";
			cout << "2: Not yet added\n";
			cout << "3: Not yet added\n";
			cout << "4: Not yet added\n";
			options = true;
			Exit = true;

			break;
		case '2':
			Exit = true;
			break;
		}
	}
	while (options == true)
	{
		cin >> user;
		Clearing();
		switch (user)
		{
		default:
		case 'r':
			cout << " Invalid -.-\n";
			break;
		case '1':
			ThePhoenix();
			break;
		}
	}


}
