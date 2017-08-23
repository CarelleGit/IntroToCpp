#include "Students.h"
#include <iostream>
using std::cout;

float testAdg(student s[], int size)
{
	float sumOfScores = 0;
	for (int i = 0; i < size; ++i)
	{
		sumOfScores += s[i].scores;
	}

	return (sumOfScores / size);
}

int testMed(student s[], int size)
{
	if (size % 2 == 0)
	{
		return (s[size / 2].scores + s[1 + (size / 2)].scores) / 2;
	}
	else
	{
		return (s[1/2 +(size /2)].scores);
	}



}

int totalEnrolled(student s[], int size, int num)
{
	int a = 0;
	for (int i = 0; i < size; ++i)
	{
		if (s[i].courses == num)
		{
			a++;
		}
	}
   return a;
}
