// Calculator programming with C++ on MS Visual Studio 2019
// calculator.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
void showMenu();
void runMenu();
void redoMenu();
void PrimeNumbers();
void FactorialNumbers();
void ExponentialNumbers();
void TheBackgammonDice();

int main() // Works with nested global void functions.
{
	runMenu();
	return 0;
}

void showMenu()
{
	cout << "\n-->Hello, World!" << endl << endl;
	cout << "-->Press \"1\" to find prime numbers!" << endl;
	cout << "-->Press \"2\" to roll random backgammon dice!" << endl;
	cout << "-->Press \"3\" to calculate factorial numbers!" << endl;
	cout << "-->Press \"4\" to calculate exponential numbers!" << endl;
}

void runMenu()
{
	showMenu();

	int choice;

	cout << "\n-->Enter your choice: ";
	cin >> choice;
	cout << "\n" << endl;

	if (choice < 1 || choice > 4)
	{
		cout << "---An invalid choice! Choose again!" << endl << endl;
		runMenu();
	}

	if (choice == 1) 
	{ 
		PrimeNumbers();		  
	}
	else if (choice == 2) 
	{ 
		TheBackgammonDice();  
	}
	else if (choice == 3) 
	{ 
		FactorialNumbers();   
	}
	else if (choice == 4) 
	{ 
		ExponentialNumbers(); 
	}
}

void redoMenu()
{
	cout << "\n-->Enter the 'M' key to return to the menu or enter the 'E' key to exit: " << flush;
	char redo;
	cin >> redo;
	switch(redo) 
	{
		case 'M': case 'm':
		runMenu();
		break;

		case 'E': case 'e':
		cout << "\nThis program was developed by headdawnLight" << endl;
		break;
	}
}

bool PrimeNumber(int control)
{
	int i;
	for (i = 2; i < control; i++)
	{
		if (control % i == 0)
			return false;
	}
	return true;
}

int ListOfPrimeNumbers(int lastValue)
{
	int j;
	for (j = lastValue; j > 2; j--)
	{
		if (PrimeNumber(j) == true) 
		{
			cout << j << ", ";
		}
	}
	return 2;
}

void PrimeNumbers()
{
	cout << "\n-->DEFINITION AND EXAMPLE" << endl << endl;
	cout << "---Prime numbers are integers greater than 1 that are" << endl;
	cout << "---only divisible by itself and 1 without a remainder." << endl;

	int primo;

	cout << "\n-->Enter a integer value for prime number list: ";
	cin >> primo;

	cout << "\n---List of prime numbers from 1 to " << primo << ": ";
	cout << ListOfPrimeNumbers(primo) << endl << endl << endl;

	redoMenu();
}

int CalculateFactors(int factor)
{
	int sum = 1;
	for (int i = 1; i <= factor; i++)
		sum = sum * i;
	return sum;
}

void FactorialNumbers()
{
	cout << "\n-->DEFINITION AND EXAMPLE" << endl << endl;
	cout << "---In mathematics, the factorial of a non-negative integer n," << endl;
	cout << "---denoted by n!, is the product of all positive integers less than or" << endl;
	cout << "---equal to n: n! = n*(n-1)*(n-2)*(n-3)*...*3*2*1" << endl;
	cout << "---for example, 5! = 5*4*3*2*1" << endl;

	int facto;

	cout << "\n-->Enter the factorial number: ";
	cin >> facto;

	cout << "\n---The result of the calculation: "
		<< CalculateFactors(facto) << endl << endl << endl;

	redoMenu();
}

int CalculateExponents(int base, int expo)
{
	int sum = 1;
	for (int i = 1; i <= expo; i++)
		sum = sum * base;
	return sum;
}

void ExponentialNumbers()
{
	cout << "\n-->DEFINITION AND EXAMPLE" << endl << endl;
	cout << "---Exponentiation is a mathematical operation," << endl;
	cout << "---written as b³, involving two numbers," << endl;
	cout << "---the base 'b' and the exponent or power '3'," << endl;
	cout << "---and pronounced as 'b raised to the power of 3'." << endl;

	int base, expo;

	cout << "\n-->Enter the base of the number: ";
	cin >> base;

	cout << "\n-->Enter the exponent of the number: ";
	cin >> expo;

	cout << "\n---The result of the calculation: ";
	cout << CalculateExponents(base, expo) << endl << endl << endl;

	redoMenu();
}

void TheBackgammonDice()
{
	srand(time(NULL));
	int TheBackgammonDice1, TheBackgammonDice2;
	{
		TheBackgammonDice1 = 1 + rand() % 6;
		TheBackgammonDice2 = 1 + rand() % 6;
		cout << "First dice: " << TheBackgammonDice1 << endl << endl;
		cout << "Second dice: " << TheBackgammonDice2 << endl << endl;
	}
	redoMenu();
}