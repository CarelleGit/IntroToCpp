#include "person.h"
#include <iostream>
using std::cout;

void person(Person human)
{
	cout << "age: " << human.age << "\n";
}
void levelUp(Person &human)
{

	human.age = human.age + 1;

}