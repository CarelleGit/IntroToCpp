#include <iostream>
#include "Person.h"
#include "Bank.h"
#include "Students.h"
#include "Vector.h"
#include "Zombie.h"
#include <stdlib.h>
#include <time.h>
using std::cout;
int main()
{
	piggyBank money;
	money.dime = 10;
	money.quarter = 6;
	money.dollar = 3;
	money.dollar2 = 9;
	money.dollar5 = 100;
	money.pennie = 1;
	money.nickel = 100;

	cout << "Amount of dollars: " << calcDollars(money) << "\n";
	cout << "Amount of Coins: " << calcCoins(money) << "\n";
	cout << "The total: " << calcTotal(money) << "\n";
	cout << "----------------------------------------\n";
	student s[6];

	for (int i = 0; i < 6; ++i)
	{
		s[i].scores = rand() % 100 + 1;
		s[i].ID = 1010 + i;
		s[i].courses = rand() % 2 + 1;
		cout << "ID: " << s[i].ID << " Course: " << s[i].courses << " Score: " << s[i].scores << "\n";
	}
	cout << "----------------------------------------\n";
	cout << "Aderage: " << testAdg(s, 6) << "\n";
	cout << "Median: " << testMed(s, 6) << "\n";
	cout << "Total Enrolled: " << totalEnrolled(s, 9, 1) << "\n";
	cout << "----------------------------------------\n";
	point x{ 22, 4 };
	point y{ 3,100 };
	point c = sumOfVector(x, y);
	cout << "(" << c.x << "," << c.y << ")\n";
	cout << "----------------------------------------\n";
	point b = difOfTwoSums(x, y);
	cout << "(" << b.x << "," << b.y << ")\n";
	cout << "----------------------------------------\n";
	cout << dist(x,y) << "\n";
	cout << "----------------------------------------\n";
	entity fighterA = { 20, 39, 4 };
	entity fighterB = { 20, 36, 2 };
	battle(fighterA, fighterB);
		while (true) {}
}