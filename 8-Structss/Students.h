#pragma once


struct student
{
	int ID;
	int courses;
	int scores;
};
float testAdg(student s[], int size);
int testMed(student s[], int size);
int totalEnrolled(student s[], int size, int num);


