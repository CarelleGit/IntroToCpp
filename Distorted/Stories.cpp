#include "Stories.h"
#include "Helper.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
void ThePhoenix()
{
	bool enterStory = false;
	char user;
	std::string Name;
	std::string gender;
	cout << "                                     Enter name then a pronoun\n";
	pausing();
	Clearing();
	cout << "                                      Enter here -";
	nameInput(Name);
	Gender(gender);
	cout << "                                    Name: " << Name << "\n";
	cout << "                                    Pronoun: " << gender << "\n";
	pausing();
	Clearing();
	cout << "                                     The Pheonix\n";
	cout << "\t" << Name << " Stood in the woods, staring at the huge maple trees and watch\nas the flames danced along the wind. The flames appeared like a phoenix has\njust risen out";
	cout << " of the depths of the inferno. They were spiraling out of control through\nthe air. Whenever " << Name << " saw flames, " << gender << " did not see destruction;" << gender << "\n";
	cout << "saw beauty, beauty like the fiery phoneix- the huge, majestic bird that glides\nacross the sky, lighting up the way of those who are lost int the dark.\n" << Name << " wanted people ";
	cout << " to understand the illuminations and " << gender << " was determined to show the\nworld.\n";
	cout << "                                   | 1: Wake up|---------| 2: sleep|\n";
	//add alerm sound;
	while (enterStory == false)
	{

		cin >> user;
		switch (user)
		{
		case '1':
			enterStory = true;
			break;
		case '2':
			MainMenu();
			break;
		default:
		case '3':
			cout << Name << " Thats invalid -.-\n";
			break;
		}
	}
	while (enterStory == true)
	{

		cout << "\tOn that morning, " << Name << " woke up with an idea from a dream " << gender << " had,\nto show the world the phoenix that possesses the\n colors of the blazing inferno that sways side from side.\n";
		cout << gender << " jumped out of bed and ran downstairs, got some toast and ran out the door, with her\nmatches, old crumbled up newspaper and a gallon of gasoline. " << gender << " went to\n";
		cout << "                                    | 1: Forest|---------| 2: Park|\n";

		switch (user)
		{
		case '2':
			enterStory = false;
			break;
		case'1':
			cout << "works\n";
			break;
		default:
		case 'd':
			cout << "invalid";
			break;
		}
		pausing();
	}
	//cout << "working?\n";
	//while (enterStory == true)
	//{
	//	cout << gender << "went to an empty park surrounded by maple trees that has leaves painted red and yellow, gently falling to the ground.\nThe ground is covered by these leaves, making it easier to set on fire\n";
	//	cout << "plus the park was quite, quite as the dead of the night which makes things peaceful.\n\t" << Name << " grabbed " << gender << "gasoline and started pouring it all around the tree, using only half of the gasoline\n";
	//	cout << "then grabbed the crumbled up old newspaper and placed near the trail of gasoline. " << gender << " quickly took out a match and lit the in on fire, watching the rise and come to life, consuming anything that gets in it's way\n";
	//	cout << gender << " stood there gazing at the bonfire in amazement watching the flames sawy side by side, sounds of the burning charcoal could be heard from the flames" << Name << " heard the sound of sirens in the distance\n";
	//	cout << "                                     | 1: hide in bush|---------| 2: Run|\n";
	//	switch (user)
	//	{
	//	case '1':
	//		enterStory = true;
	//	default:
	//		break;
	//	}
	//	pausing();
	//}
	//while (enterStory == true)
	//{
	//	cout << gender << " quickly grabbed her stuff and then went farther into the woods to hide in a bush. " << gender << " watched as they put out the beautiful fire, sending the phoenix back into the depths of the flames.\n\t";
	//	cout << Name << " stood there looking at the place the fire once was. rage filled" << gender << " heart when they drowned the fire with clear liquid, they did not even try to appreciate the flames\n" << Name << " looked around";
	//	cout << "";

	//	pausing();
	//}
}
