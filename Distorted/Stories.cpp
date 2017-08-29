#include "Stories.h"
#include "Helper.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
void ThePhoenix()
{
	bool enterStory = true;
	char user;
	std::string Name;
	std::string gender;
	std::string gender2;
	std::string gender3;
	cout << "                                      Enter here name - ";
	nameInput(Name);
	cout << "                                      Enter pronoun   - ";
	Gender(gender, gender2, gender3);
	Clearing();
	cout << "                                    Name: " << Name << "\n";
	cout << "                                    Pronoun: " << gender << ", " << gender2 << ", " << gender3 << "\n";
	pausing();
	Clearing();
	cout << "                                     The Pheonix\n";
	cout << "\t" << Name << " Stood in the woods, staring at the huge maple trees and watch as the flames danced along the wind. The flames appeared like a phoenix has just risen out";
	cout << " of the depths of the inferno. They were spiraling out of control through the air. Whenever " << Name << " saw flames, " << gender << " did not see destruction; " << gender;
	cout << " saw beauty, beauty like the fiery phoneix- the huge, majestic bird that glides across the sky, lighting up the way of those who are lost in the dark. " << Name << " wanted people ";
	cout << "to understand the illuminations and " << gender << " was determined to show the world.\n";
	cout << "                       | 1: Wake up|---------| 2: sleep|\n";
	while (enterStory == true)
	{
		cin >> user;
		switch (user)
		{
		case '1':
			enterStory = false;
			cout << "\n";
			break;
		default:
		case '2':
			MainMenu();
			break;
		}

	}
	//add alerm sound;
	
	cout << "\tOn that May morning, " << Name << " woke up with an idea from a dream " << gender << " had, to show the world the phoenix that possesses the colors of the blazing inferno that sways side from side. ";
	cout << gender << " jumped out of bed and ran downstairs, got some toast and ran out the door, with " << gender2 << " matches, old crumbled up newspaper and a gallon of gasoline. " << gender << " went to\n";
	cout << "                       | 1: Park|---------| 2: Forest|\n";
	while (enterStory == false)
	{
		cin >> user;
		switch (user)
		{
		case '1':
			enterStory = true;
			cout << "\n";
			break;
		default:
		case '2':
			MainMenu();
			break;
		}
	}

	cout << gender << " went to an empty park surrounded by maple trees that has leaves painted red and yellow, gently falling to the ground. The ground is covered by these leaves, making it easier to set on fire ";
	cout << "plus the park was quite, quite as the dead of the night which makes things peaceful.\n\t" << Name << " grabbed " << gender2 << " gasoline and started pouring it all around the tree, using only half of the gasoline ";
	cout << "then grabbed the crumbled up old newspaper and placed near the trail of gasoline. " << gender << " quickly took out a match and lit it in on fire, watching the rise and come to life, consuming anything that gets in it's way ";
	cout << gender << " stood there gazing at the bonfire in amazement watching the flames sawy side by side, sounds of the burning charcoal could be heard from the flames. " << Name << " heard the sound of sirens in the distance\n";
	cout << "                       | 1: hide in bush|---------| 2: Run|\n";
	while (enterStory == true)
	{
		cin >> user;
		switch (user)
		{
		case '1':
			enterStory = false;
			cout << "\n";
			break;
		default:
		case '2':
			MainMenu();
			break;
		}
	}

	cout << gender << " quickly grabbed " << gender2 << " stuff and then went farther into the woods to hide in a bush. " << gender << " watched as they put out the beautiful fire, sending the phoenix back into the depths of the flames.\n\t";
	cout << Name << " stood there looking at the place the fire once was. rage filled " << gender2 << " heart when they drowned the fire with clear liquid, they did not appreciate the flames. " << Name << " looked around\n";
	cout << "Next to the hiding spot there was a a huge tree.  " << gender << " looked at her half filled container of gasoline and matches then back at the tree. " << gender << " poured the rest of the gasoline and set the tree ablaze\n";
	cout << gender << " set the tree ablaze. The fire grew, devouring the tree " << Name << " heard footsteps from behind\n";
	cout << "                       | 1: stay|---------| 2: Run|\n";
	while (enterStory == false)
	{
		cin >> user;
		switch (user)
		{
		case '1':
			enterStory = true;
			cout << "\n";
			break;
		case '2':
			MainMenu();
			break;
		default:
			break;
		}
	}
	cout << Name << " turned around, to see the locals approching the buring tree. Their eyes widen with amazment of the fire eating the tree away, until it was no longer.\n\t" << Name << " saw the people just standing there, looking at the pile of ashes";
	cout << " in silance. After a few minutes, someone had started another fire, then another, and another. soon everyone had to move to the edge of the forest and they watched the entire forest burn. When the flames was at it hottest a huge bird with flames erupted out of the fire";
	cout << " lighing up the night sky. Everyone cheered as they saw phoenix rise out of the flames " << Name << " noticed that time was slowing down and everything started melting away, leaving" << Name << " in a black abyss. confusion started to build, then soon was replaced by fear. ";
	cout << Name << " tried to look of any signs of another person or a way out, but nothing can be seen, nothing but a warm light and soon someone yelling in the distance.\n";
	cout << "                       | 1: head towards the light|---------| 2: head towards the yelling|\n";
	while (enterStory == true)
	{
		cin >> user;
		switch (user)
		{
		case '1':
			enterStory = false;
			cout << "\n";
			break;
		case '2':
			MainMenu();
			break;
		default:
			break;
		}
	}
	cout << Name << " started running towards the light in the distance. When " << gender << " reached the bright light " << Name << " saw a bird made of fire. " << gender2 << " heart skipped with joy at the sight of the magnificent bird. The phoenix motions her to climb on, so " << gender;
	cout << " does. Once " << Name << " is settled on the back of the phoenix, the bird spreads it's wings and then takes off like bullet. Once they reach a high point in the abyss the flaming bird starts to glide. after a few hours " << gender2 << "vision went black\n\t";
	cout << "On that May morning, " << Name << " woke up with an idea from a dream she had\n";
	cout << "                       | 1: back to main menu|";
	cin >> user;
	switch (user)
	{
	default:
	case '1':
		MainMenu();
		break;
	}

}

