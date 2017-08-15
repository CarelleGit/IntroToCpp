#include <iostream>
using namespace std;
int main()
{
	//int age = 18;
	//cout << "|age|" << endl;
	//cout << age << endl;
	//age = age + 1;
	//cout << age << endl;
	//age = 12;
	//cout << age << endl;
	//cout << "---------------------------------------------" << endl;
	//int first = 70.1;
	//int second = 30.2;
	//int sum = first + second;
	//cout << first << " + " << second << " = " << sum << endl;
	//cout << "---------------------------------------------" << endl;
	//float numA = 100.4f;
	//float numB = 20.3f;
	//float numSum = numA + numB;
	//cout << numA << " + " << numB << " = " << numSum << endl;
	//cout << "---------------------------------------------" << endl;
	//int userInput = 0;
	//cin >> userInput;
	//cout << "Here is your number\n" << userInput << endl;

	int numberA = 5;
	numberA = 9;
	numberA = 11;
	numberA = 14;
	cout << "A) " << numberA << " |" << endl;
	cout << "------|\n";
	int numberB = 10;
	numberB = 9;
	int thingB = 55;
	thingB = 22;
	cout << "B) " << numberB << "  |" << endl;
	cout << "------|\n";
	int numberC = 23;
	numberC = 7;
	numberC = 1;
	int somethingC = 23;
	somethingC = 21;
	numberC = somethingC;
	cout << "c) " << numberC << " |" << endl;
	cout << "------|\n";
	int numberD = 1;
	int somethingD = 3;
	numberD = somethingD;
	cout << "D) " << somethingD << "  |" << endl;
	cout << "------|\n";
	int x = 13;
	x = x / 2;
	cout << "E) " << x << "  |" << endl;
	cout << "------|\n";
	float y = 13;
	y = y / 2;
	cout << "f) " << y << "|" << endl;
	cout << "----------------------|\n";
	cout << "                      |\n";
	//celsius to fehrenheit
	float degCelsius = 0.0f;
	float degFahrenheit = 0.0f;
	cout << "Enter Celsius\n";
	cin >> degCelsius;
	degFahrenheit = (degCelsius * 1.8) + 32;

	cout << "Celsius to Fehrenheit)|" << endl;
	cout << "Celsius: " << degCelsius << "           |" << endl;
	cout << "Fahrenheit: " << degFahrenheit << "     |" << endl;
	cout << "--------------------------------|\n";
	//Area of a rectangle
	float rectWidth = 6.0f;
	float rectHeight = 3.0f;
	float rectArea = 0.0f;

	rectArea = rectWidth * rectHeight;

	cout << "Area of a Rectangle" << "|\n";
	cout << " H: " << rectHeight << " , W: " << rectWidth << "|" << endl;
	cout << "Area: " << rectArea << "                        |" << endl;
	cout << "------------------------------------|\n";
	float a, b, c, d, e;
	float avg;
	avg = a = b = c = d = e = 0.0f;
	cout << "press a number\n";
	cin >> a;
	cout << "press another number\n";
	cin >> b;
	cout << "press another number\n";
	cin >> c;
	cout << "press another number\n";
	cin >> d;
	cout << "press another number\n";
	cin >> e;
	avg = (a + b + c + d + e) / 5;

	cout << "Avarage of Five)" << endl;
	cout << a << "," << b << "," << c << "," << d << "," << e << endl;
	cout << "avg: " << avg << endl;
	cout << "--------------------------------------|\n";
	//number swap
	int x1 = 13;
	int y2 = 24;
	int temp = x1;

	x1 = y2;
	y2 = temp;

	cout << "Number Swap\n";
	cout << "x is " << x1 << endl;
	cout << "y is " << y2 << endl;
	cout << "----------------------------------------|\n";
	int age = 0;

	cin >> age;
	
	cout << "you are age is " << age << " years old" << endl;
	cout << "that's " << age * 12 << " months" << endl;
	cout << "-----------------------------------------|\n";
	/*int age;
	int bullet_count;
	float dog_years;
	int qty;
	float shield_value;
	float defense_matrix_cooldown;
	int red_armor_value;
	float red_armor_ratio;
	int happiness;
	int gandhi_aggression;

	int num;
	char letter;
	float num2;
	double num3;*/

	system("pause");
}