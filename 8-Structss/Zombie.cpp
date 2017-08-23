#include "Zombie.h"
#include <iostream>
using std::cout;

void printEntity(entity target)
{
	cout << target.HP << "\n";
	cout << target.AP << "\n";
	cout << target.DP << "\n";
}

void battle(entity combatA, entity combatB)
{
	bool inProg = true;
	while (inProg)
	{
		cout << "Player Stats\n";
		printEntity(combatA);

		cout << "Zambie Stats\n";
		printEntity(combatB);

		combatA.HP -= combatB.AP - combatA.DP;
		combatB.HP -= combatA.AP - combatB.DP;

		inProg = combatA.HP > 0 && combatB.HP > 0;
	}

	cout << "The battle hasbeen fought\n";
	if (combatA.HP > 0)
	{
		cout << "The player has risen to victory\n;";
	}
	else if (combatB.HP > 0)
	{
		cout << "Zambie has risen to victory\n";
	}
	else
	{
		cout << "No one has risen\n";
	}
}
