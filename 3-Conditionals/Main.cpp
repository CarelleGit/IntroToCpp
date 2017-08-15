#include <iostream>

int main()
{
	/*bool isHappy = true;

	if (isHappy)
	{
		std::cout << "Good\n";
	}
	else
	{
		std::cout << "Thats not good\n";
	}
	int happiness = 0;
	std::cout << "how happy are you\n";
	std::cin >> happiness;
	if (happiness > 75)
	{
		std::cout << "c:\n";
	}
	else if (happiness > 30)
	{
		std::cout << ":)\n";
	}
	else if (happiness > 0)
	{
		std::cout << ":/\n";
	}
	else
	{
		std::cout << ":c\n";
	}
	*/
	int numberA = 15;
	if (numberA > 10)
	{
		numberA = numberA * 2;
	}
	std::cout << "A) " << numberA << "\n";
	std::cout << "\n";

	int numberB = 15;
	if (numberB < 15)
	{
		numberB = numberB * 3;
	}
	std::cout << "B) " << numberB << "\n";
	std::cout << "\n";

	int numberC = 12;
	if (numberC == 12)
	{
		numberC = numberC * 2;
	}

	std::cout << "C) " << numberC << "\n";
	std::cout << "\n";

	int numberD = 12;
	if (numberD <= 12)
	{
		numberD = numberD * 0;
	}
	std::cout << "D) " << numberD << "\n";
	std::cout << "\n";

	int numberE = 14;
	if (numberE >= 12)
	{
		numberE *= 4;
	}

	std::cout << "E) " << numberE << "\n";
	std::cout << "\n";

	int numberF = 6;
	if (numberF == 0)
	{
		numberF = 0;
	}
	else if (numberF > 10)
	{
		numberF = 1;
	}

	std::cout << "F) " << numberF << "\n";
	std::cout << "\n";

	int numberG = 6;
	if (numberG < 0)
	{
		numberG = 0;
	}
	else if (numberG < 2)
	{
		numberG = 1;
	}
	else if (numberG < 5)
	{
		numberG = 2;
	}
	else
	{
		numberG = 3;
	}
	std::cout << "G) " << numberG << "\n";
	std::cout << "\n";

	int number = 0;
	std::cin >> number;
	if (number > 50)
	{
		std::cout << number << " is to big of a number\n";
	}
	else if (number < 50)
	{
		std::cout << number << " is to low of a number\n";
	}
	else
	{
		std::cout << number << " is the balanced number\n";
	}
	std::cout << "\n";

	int age = 0;
	std::cout << "whats your age?\n";
	std::cin >> age;
	if (age < 18)
	{
		std::cout << "You are a minor\n";
	}
	else if (age >= 18)
	{
		std::cout << "You are an adult\n";

		if (age >= 50)
		{
			std::cout << "You can join the AARP";
		}
		else if (age >= 65)
		{
			std::cout << "You are eligible for retirement benefits\n";
		}
	}
	std::cout << "\n";
	int input1 = 0;
	int input2 = 0;
	int input3 = 0;
	std::cout << "put in one input\n";
	std::cin >> input1;
	std::cout << "put in a second input\n";
	std::cin >> input2;
	std::cout << "put in a third input\n";
	std::cin >> input3;
	if (input1 && input2 >= input3)
	{
		std::cout << "The lowest is " << input3 << "\n";
	}
	else if (input2 && input3 >= input1)
	{
		std::cout << "The lowest is " << input1 << "\n";
	}
	else if (input1 && input3 >= input2)
	{
		std::cout << "The lowest is " << input2 << "\n";
	}



	int number1 = 0;
	int number2 = 0;
	std::cout << "enter a number\n";
	std::cin >> number2;
	number1 = number2;
	number1 %= 2;
	if (number1 == 0)
	{
		std::cout << number2 << " is even\n";
	}
	else 
	{
		std::cout << number2 << " is odd\n";
	}
	std::cout << "\n";

	int value = 0;
	std::cout << "press a number\n";
	std::cin >> value;
	if (value <= 15)
	{
		value = 15;
		std::cout << value << "\n";
	}
	else if (value >= 30)
	{
		value = 30;
		std::cout << value << "\n";
	}
	else
	{
		std::cout << value << "\n";
	}
	std::cout << "\n";

	int cookies = 0;
	int fakeCookies = 0;
	std::cout << "how many cookies do you want?\n";
	std::cin >> fakeCookies;
	
	if (fakeCookies <= 23)
	{
		fakeCookies = 23;
		std::cout << "you got " << fakeCookies << " cookies\n";
	}
	else if (fakeCookies > 23)
	{
		fakeCookies = (fakeCookies / 23) * 23;
		std::cout << "you got " << fakeCookies << " cookies\n";
	}

	int sketchbook = 0;
	std::cout << "how many sketchbooks would you like to order\n";
	std::cin >> sketchbook;
	if (sketchbook < 9)
	{
		std::cout << "i'm sorry, but you can't order " << sketchbook << " sketchbooks\n";
	}
	else if (sketchbook > 30)
	{
		std::cout << "i'm sorry, but you can't order " << sketchbook << " sketchbooks\n";
	}
	else
	{
		std::cout << "you ordered " << sketchbook << " sketchbooks\n";
	}

	system("pause");
}