#include "Stories.h"
#include "Helper.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
void ThePhoenix()
{
	std::string Name;
	std::string gender;
	cout << "                                     Enter name then a pronoun";
	nameInput(Name);
	Gender(gender);
	cout << "                                 Name: " << Name << "\n";
	cout << "                                 Pronoun: " << gender << "\n";
	pausing();
	Clearing();
	cout << "                                     The Pheonix\n";
	cout << "\t" << Name << " Stood in the woods, staring at the huge maple trees and watch\nas the flames danced along the wind. The flames appeared like a phoenix has\njust risen out";
	cout << " of the depths of the inferno. They were spiraling out of control through the air Whenever " << Name << " saw flames, " << gender << " did not see destruction;" << gender << "\n";
	cout << "saw beauty";


}
