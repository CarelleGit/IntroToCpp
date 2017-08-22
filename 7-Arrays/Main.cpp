#include <iostream>
using std::cout;
using std::cin;

void printNumbers(int nums[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << nums[i] << "\n";
	}
}
void SetAllFive(int nums[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		nums[i] = 5;
	}
}
int sum(int a, int b)
{
	a = a + b;
	return a;
}

void sumNumbers(int numbers[], int size)
{
	int a = 0;
	for (int i = 0; i < size; ++i)
	{
		a += numbers[i];
	}
	cout << a << "\n";
}
void small(int numbers[], int size)
{
	int a = numbers[0];
	for (int i = 0; i < size; ++i)
	{
		if (numbers[i] < a)
		{
			a = numbers[i];
			
		}
		
	}
	cout << a << "\n";
}
void large(int numbers[], int size)
{
	int a = numbers[0];
	for (int i = 0; i < size; ++i)
	{
		if (numbers[i] > a)
		{
			a = numbers[i];

		}

	}
	cout << a << "\n";
}
int findIndex(int numbers[], int size, int value)
{
	for (int i = 0; i < size; ++i)
	{
		if (numbers[i] == value)
		{
			return i;
		}
		else
		{
			return -1;
		}
	
	}
}
//bool unique(int numbers[], int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		for (int j = 0; i < size; ++j)
//		{
//			if (i != j && numbers[i] == numbers[j])
//			{
//				return true;
//			}
//		}
//	}
//	return false;
//}
void Reverse(int numbers[], int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		int temp = numbers[i];
		numbers[i] = size - 1 - i;
		numbers[size - 1 - i] = temp;
	}
}

void sort(int numbers[], int size)
{
	while (true)
	{
		bool isSorted = true;
			for (int i = 0; i < size - 1; ++i)
			{
				if (numbers[i] > numbers[i + 1])
				{
					int temp = numbers[i];
					numbers[i] = numbers[i + 1];
					numbers[i + 1] = temp;
					isSorted = false;
				}
			}
			if (isSorted)
			{
				break;
			}
	}
 }
void SortDes(int numbers[], int size)
{
	sort(numbers, size);
	Reverse(numbers, size);
}

int main()
{
	int nummz[]{ 0,0,0,0,0 };
	SetAllFive(nummz, 5);
	printNumbers(nummz, 5);
	int num1 = 5;
	int num2 = 7;
	int result = sum(num1, num2);
	cout << result << "\n";
	//Declare and defrine intergers arrays
	int numbers[5];
	numbers[0] = 0;
	numbers[1] = 0;
	numbers[2] = 0;
	numbers[4] = 0;
	//asscessing arrays using indicies
	numbers[0] = 5; //assign to an array at a given index
	cout << numbers[0] << "\n";
	//initialize each element with a for loop
	for (int i = 0; i < 5; ++i)
	{
		numbers[i] = 0;
	}
	// initialize using an initializer list
	int numberList[]{ 0,0,0,0,0 };
	//iterating over an array
	for (int i = 0; i < 5; ++i)
	{
		cout << numbers[i] << "\n";
	}
	//assign one to every other element
	for (int i = 0; i < 5; i += 2)
	{
		numbers[i] = 1;
	}

	//passing arrays into a function
	cout << "testing\n";
	printNumbers(numbers, 5);

	system("pause");
	system("CLS");
	int byOne[4]{ 0,1,2,3 };
	int byTwo[6]{ 2,4,8,16,32,64 };
	int numbers1[4]{ 33,74,52,9 };

	printNumbers(byTwo, 6);
	cout << "-----------------------------------\n";

	sumNumbers(byOne, 4);
	cout << "-----------------------------------\n";

	small(numbers1, 4);
	cout << "-----------------------------------\n";

	large(byOne, 4);
	cout << "-----------------------------------\n";

	cout << findIndex(byTwo, 6, 31) << "\n";
	cout << "-----------------------------------\n";

	/*unique(byTwo, 6);*/
	cout << "-----------------------------------\n";

	Reverse(byOne, 4);
	cout << "-----------------------------------\n";

	sort(byTwo, 6);
	SortDes(byOne, 4);
	cout << "-----------------------------------\n";
	system("pause");
}