#include "Func.h"
#include <iostream>
#include "mathutils.h"
#include "dtgreet.h"
#include <cmath>
#include "rng.h"
using namespace std;


int main()
{
	/*cout << "hello world\n";
	cout << sum(1, 1) << "\n";*/
	cout << "Lesser: " <<lesser(3, 4) << "\n";
	cout << "Greater: " << greater(3, 4) << "\n";
	cout << "Value: " << Clamp(10, 20, 11) << "\n";
	cout << "Distance: " << dist(5, 3, 5, 21) << "\n";
	cout << "----------------\n";
	dayGreet(16, 8, 2017);
	timeGreet(11, 37);
	cout << leapYear(2017) << "\n";
	cout << "----------------\n";
	cout << rng() << "\n";
	cout << rngb() << "\n";
	seedRng(12);
	cout << rngBchance(50) << "\n";
	cout << rngRange(10, 20) << "\n";
	system("pause");
}