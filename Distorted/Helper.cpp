#include "Helper.h"
#include "Stories.h"
#include <iostream>
#include <string>
#include <time.h>
#include <random>
#include <cstdlib>
using std::cout;
using std::cin;
using std::string;

void nameInput(std::string & UserInput)
{
	cin >> UserInput;
}

void Gender(std::string & Input1, std::string & Input2, std::string & Input3)
{
	cin >> Input1;
	cin >> Input2;
	cin >> Input3;
}

void askInput(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3)
{
	cout << "                                 Enter name and then pronouns\n";
	cout << "                                |++++++++++++++++++++++++++++|\n";
	cout << "                                |Examples: she, her, herself |\n";
	cout << "                                |           he, his, himself |\n";
	cout << "                                |       they, their, themself|\n";
	cout << "                                |++++++++++++++++++++++++++++|\n";
	nameInput(Name);
	Gender(gender, gender2, gender3);
	cout << "\n";
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

void MainMenu(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3)
{
	char user;
	bool Exit;
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

		switch (user)
		{
		default:
		case '3':
			cout << " Invalid type 1 or 2\n";
			break;
		case '1':
			Clearing();
			cout << "1: The Pheonix\n";
			cout << "2: Not yet added\n";
			cout << "3: Not yet added\n";
			cout << "4: Not yet added\n";
			pausing();
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
			askInput(Name, gender, gender2, gender3);
			Clearing();
			cout << "                                    Name: " << Name << "\n";
			cout << "                                    Pronoun: " << gender << ", " << gender2 << ", " << gender3 << "\n";
			pausing();
			ThePhoenix(Name, gender, gender2, gender3);
			options = false;
			break;
		}
	}

	
}

int diceRoll(int dice, int side)
{
	int Return = 0;
	for (int i = 0; i < dice; ++i)
	{
		srand(time(NULL));
		Return += rand() % side + 1;
	}


	return Return;
}

