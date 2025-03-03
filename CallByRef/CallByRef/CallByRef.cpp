// CallByRef.cpp : Defines the entry point for the console application.
//

// Program:		CallByRef.cpp
// Developer:	Chase Dickerson
// Date:		2/14/2018
// Course:		CSC140

#include "stdafx.h"
#include <iostream>
using namespace std;

// Declaring functions
void swap(int& numberOne, int& numberTwo);
int findSumOverARange(int numberOne, int numberTwo);

int main()
{
	// Declaring Variables
	int firstInput;
	int secondInput;
	int sumOfRange;

	// Asking for first and second numbers
	cout << "Please enter in a number: ";
	cin >> firstInput;

	cout << "Please enter in another number: ";
	cin >> secondInput;

	// Calling findSumOverARange function
	sumOfRange = findSumOverARange(firstInput, secondInput);

	cout << "Sum of range is: " << sumOfRange << "\n";

	return 0;
}

// This function finds the sum of range of two numbers
int findSumOverARange(int numberOne, int numberTwo)
{
	if (numberOne < numberTwo)
	{
		swap(numberOne, numberTwo);
	}

	int sum = 0;
	int count;

	for (count = numberTwo; count <= numberOne; count++)
	{
		sum = sum + count;
	}

	return sum;
}

// This method is used to swap the two numbers
void swap(int& variable1, int& variable2)
{
	int temp;

	temp = variable1;
	variable1 = variable2;
	variable2 = temp;
}

