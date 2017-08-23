#include <iostream>
#include <string>
#include "Helper.h"
#include "Stories.h"
#include "Main.h"
using std::cout;
using std::cin;
using std::string;
int main()
{
	char user;
	bool Exit;
	std::string Name;
	
	bool options = false;
	cout << "                  |               Main Menu              |\n";
	cout << "                  |                                      |\n";
	cout << "                  | 1: Play                      2: Exit |\n";
	cout << "                  |--------------------------------------|\n";
	cout << "                            Enter a number only\n";
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
			cout << "Enter name";
			nameInput(Name);
			cout << "Name: " << Name << "\n";
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