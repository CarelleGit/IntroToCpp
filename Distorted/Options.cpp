#include "Options.h"
#include "Helper.h"
#include "Stories.h"
#include <time.h>
#include <random>
#include <cstdlib>
#include <iostream>
#include <string>
using std::cout;
using std::cin;
void repeat(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3)
{
	char user;
	bool enterStory = true;
	bool menu = false;
	cout << gender << " quickly grabbed " << gender2 << " stuff and then went farther into the woods to hide in a bush. " << gender << " watched as they put out the beautiful fire, sending the phoenix back into the depths of the flames.\n\t";
	cout << Name << " stood there looking at the place the fire once was. rage filled " << gender2 << " heart when they drowned the fire with clear liquid, they did not appreciate the flames. " << Name << " looked around\n";
	cout << "Next to the hiding spot there was a a huge tree.  " << gender << " looked at" << gender2 << "half filled container of gasoline and matches then back at the tree. " << gender << " poured the rest of the gasoline and set the tree ablaze.\n";
	cout << gender << " The fire grew, devouring the tree " << Name << " heard footsteps from behind\n";
	cout << "                       | 1: stay|---------| 2: Run|\n";
	while (enterStory == false && menu == true)
	{
		cin >> user;
		switch (user)
		{
		case '1':
			enterStory = true;
			cout << "\n";
			break;
		case '2':
			pausing();
			Clearing();
			cout << Name << " ran as soon as " << gender << " heard the sound of footsteps";
			repeat(Name, gender, gender2, gender3);
			break;
		default:
		case '3':
			cout << Name << " i'm sorry, thats invalid\n1 or 2";
			break;
		}
	}

}
void battle(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3)
{
	char user;
	struct Stats
	{
		int HP;
		int AP;
		int DP;
	};
	Stats Player = {0,0};
	Player.HP = diceRoll(3, 7);
	Player.AP = diceRoll(2, 6);
	Player.DP = diceRoll(1, 2);
	Stats Family = {0,0};
	Family.HP = diceRoll(3, 6);
	Family.AP = diceRoll(2, 6);
	Family.DP = diceRoll(1, 3);
	
	bool inProg = true;
	while (inProg)
	{
		cout << Name << "'s HP: " << Player.HP << "\n";
		cout << "family HP: " << Family.HP << "\n";
		Player.HP -= Family.AP - Player.DP;
		Family.HP -= Player.AP - Family.DP;
		pausing();
		inProg = Player.HP > 0 && Family.HP > 0;
	}

	cout << "\n";
	if (Player.HP > 0 && Family.HP <= 0)
	{
		cout << Name << " has won the fight, " << gender << " decided to go back to sleep\n";
		inProg = false;
		pausing();
		if (inProg == false)
		{
			return ThePhoenix(Name, gender, gender2, gender3);
		}
		
	
	}
	else if (Family.HP > 0 && Player.HP <= 0)
	{
		cout << Name << " has lost the fight," << gender2 << " family crowded around " << gender << "\n\t" << Name << " woke up hooked up to a heart monitor and an IV bag\n";
		pausing();
		inProg = false;
		MainMenu(Name, gender, gender2, gender3);
	}
}


