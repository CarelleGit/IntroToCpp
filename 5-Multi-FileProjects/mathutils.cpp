#include "mathutils.h"
#include <cmath>

int lesser(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int greater(int a, int b)
{
	if (b > a)
	{
		return b;
	}
	else
	{
		return a;
	}
}

int Clamp(int lower, int upper, int value)
{
	if (value < lower)
	{
		value = lower;
	}
	else if (value > upper)
	{
		value = upper;
	}
	else
	{
		value = value;
	}
		return value;
}

int dist(int x1, int y1, int x2, int y2)
{
	int answer;
	answer = sqrtf(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));
	return answer;
}


