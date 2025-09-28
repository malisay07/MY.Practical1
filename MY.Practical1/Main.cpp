#include <iostream>
#include <conio.h>

using namespace std;


double GetFirstNumber()
{
	double number;
	cout << "Enter the first number: ";
	cin >> number;
	return number;
}

double GetSecondNumber()
{
	double number;
	cout << "Enter the second number: ";
	cin >> number;
	return number;
}

char GetOperation()
{
	char operation;
	bool validOperation = false;
	while (!validOperation)
	{
		cout << "Enter an operation (+ or -): ";
		cin >> operation;
		if (operation == '+' || operation == '-')
		{
			validOperation = true;
		}
		else {
			cout << "Invalid operation. Please enter '+' or '-' .\n";
		}
	}
	return operation;
}

void DisplayAddition(double num1, double num2)
{
	cout << "Result of addition: " << num1 + num2 << ".\n";
}
	
void DisplaySubtraction(double num1, double num2)
{
	cout << "Result of subtraction: " << num1 - num2 << ".\n";
}

int main()
{
	double num1 = GetFirstNumber();
	double num2 = GetSecondNumber();
	char operation = GetOperation();

	if (operation == '+')
	{
		DisplayAddition(num1, num2);
	}
	else if (operation == '-')
	{
		DisplaySubtraction(num1, num2);
	}

	(void)_getch();
	return 0;
}