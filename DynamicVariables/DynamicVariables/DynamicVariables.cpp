// DynamicVariables.cpp : Defines the entry point for the console application.
//
// Program:		DynamicVariables.cpp 
// Developer:	Chase Dickerson
// Date:		4/4/2018
// Course:		CSC140

#include "stdafx.h"
#include <iostream>

using namespace std;

void swapNum(int* one, int* two);

int main()
{
	// Declaring pointers
	int *p1;
	int *p2;

	// Declaring dynamic variables
	p1 = new int;
	p2 = new int;

	// Initializing pointers
	*p1 = 13;
	*p2 = 42;

	// Swapping the pointers
	swapNum(p1, p2);

	cout << "*p1 == " << *p1 << "\n";
	cout << "*p2 == " << *p2 << "\n";

	// Deleting pointers
	delete p1;
	delete p2;

    return 0;
}

// This function swaps two pointers
void swapNum(int* one, int* two)
{
	int temp;
	temp = *one;
	*one = *two;
	*two = temp;

}