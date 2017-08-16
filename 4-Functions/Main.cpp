#include <iostream>

 
void greet()
{
	std::cout << "hello functions\n";
}
void square()
{
	int number = 0;
	std::cin >> number;
	number = number*number;
	std::cout << number << "\n";
	std::cout << "\n";
}
void decimal()
{
	int numerator = 0;
	int denominator = 0;
	float answer = 0;
	std::cin >> numerator;
	std::cin >> denominator;
	answer = (float)numerator / (float)denominator;
	std::cout << answer << "\n";
}
//void largestDifference()
//{
//	float one = 0;
//	float two = 0;
//	float three = 0;
//	float answer = 0;
//	std::cout << "enter three numbers\n";
//	std::cin >> one;
//	std::cin >> two;
//	std::cin >> three;
//	answer = one - two - three;
//	std::cout << "the laregest difference is ";
//	std::cout << answer << "\n";
//}
void functionDefinions()
{
	int a = 0;
	int b = 0;
	std::cin >> a;
	std::cin >> b;
	std::cout << a << ", " << b << "\n";
}
int Sum()
{
	int number1 = 0;
	int number2 = 0;
	int number3 = 0;
	std::cin >> number1;
	std::cin >> number2;
	std::cin >> number3;
	int answer = number1 + number2 + number3;
	return answer;
}
void Min()
{
	int num1 = 0;
	int num2 = 0;
	int lowest = 0;
	std::cin >> num1;
	std::cin >> num1;
}
int main()
{
	
	std::cout << "greet\n";
	greet();
	system("pause");
	std::cout << "square\n";
	square();
	system("pause");
	std::cout << "fraction to decimal\n";
	decimal();
	system("pause");
	/*largestDifference();*/
	system("pause");
	functionDefinions();
	system("pause");
	std::cout << Sum() << "\n";
	system("pause");
}