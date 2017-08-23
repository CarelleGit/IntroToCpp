#include "Vector.h"
#include <iostream>
#include <cmath>
using std::cout;
point sumOfVector(point vecX, point vecY)
{
	float x = vecX.x + vecY.x;
	float y = vecX.y + vecY.y;
	return{ x, y };
}

point difOfTwoSums(point vecX, point vecY)
{
	float x = vecX.x - vecY.x;
	float y = vecX.y - vecY.y;
	return{ x, y };
}

float dist(point x, point y)
{
	return sqrtf(((y.y - x.y)*(y.y - x.y)) - ((y.x - x.x)*(y.x - x.x)));
}

