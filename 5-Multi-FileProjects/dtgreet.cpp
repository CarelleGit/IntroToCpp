#include "dtgreet.h"
#include <iostream>
using namespace std;

void dayGreet(int day, int month, int year)
{
	cout << "hello, today is " << month << "/" << day << "/" << year << "\n";
}

void timeGreet(int hour, int min)
{
	cout << "The time is " << hour << ":" << min << "\n";
}

bool leapYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			return year % 400 == 0;
		}
		else
		{
			cout << year << "this is not a leap year\n";
			return false;
		}
	}
}



