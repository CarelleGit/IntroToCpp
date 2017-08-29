#include <iostream>
#include <cstring>
#include "Functions.h"
using std::cin;
using std::cout;
struct  Player
{
	char name[80];
};

void addStrings(char dst[], int size, char src[], char src2[])
{
	//copies data from src into dst buffer
	strcpy_s(dst, size, src);
	//concatenates data from src2 into dst buffer
	strcat_s(dst, size, src2);

	//result should be scr+scr2
}


void main()
{
	//definition
	char buffer[80];

	// instatiation
	char cstring[] = "blarg largal";
	char buffer2[80] = { 0 };

	//assignment
	strcpy_s(buffer, "String");

	//length
//	int length = strlen(buffer);

	//concatenation
	strcat_s(buffer, cstring);

	//Returns -1, 0, 1
	int result = strcmp(buffer, cstring);

//	doSomething(result);

	//Greeting

	char name[80] = {};
	cout << "Name?\n";
	cin >> name;
	cout << "Hello " << name << "\n";
	cout << "--------------------------\n";
	char color[80] = {};
	cout << "Favotrite color?\n";
	cin >> color;
	if (strcmp("Yellow", color) == 0)
	{
		cout << "The sun is mostly red, not mostly yellow\n";
	}
	else if (strcmp("Red", color) == 0)
	{
		cout << "The color red can make people hungry\n";
	}
	else if (strcmp("Blue", color) == 0)
	{
		cout << "Blue is a soft and creative color\n";
	}
	cout << "--------------------------\n";
	cout << "type a sentance\n";
	cin.ignore(80, '\n');
	char Input[80] = { 0 };
	cin.getline(Input, 80);
	char buffer3[80] = { 0 };
	int j = 0;
	for (int i = 0; i < strlen(Input)+1; i++)
	{
		if (Input[i] != ' ' && Input[i] != '\t' && Input[i] != '\n');
			buffer3[j++] = color[i];
	}
	cout << buffer3 << "\n";

	while (true){}
}
void doSomething(int &x)
{
	x += 10;
}