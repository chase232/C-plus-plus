// FileInputAndFileOutput.cpp : Defines the entry point for the console application.
// 

// Program:		FileInputAndFileOutput.cpp
// Developer:	Chase Dickerson
// Date:		3/4/2018
// Course:		CSC140

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

// Declairng functions
bool quadraticRoot1(double a, double b, double c, double& answer);
bool quadraticRoot2(double a, double b, double c, double& num4);

int main()
{
	// Declaring variables
	int a;
	int b;
	int c;
	double answer;
	double result1;
	double result2;

	// Creating new ifstream and ofstream objects
	ifstream inStream;
	ofstream outStream;

	// Attempting to open inputfile.txt
	// If statement used to check for errors
	inStream.open("inputfile.txt");
	if (inStream.fail())
	{
		cout << "Input File opening error\n";
		exit(1);
	}

	// Attempting to open outputfile.txt
	// If statement used to check for errors
	outStream.open("outputfile.txt");
	if (outStream.fail())
	{
		cout << "Output file opening failed\n";
		exit(1);
	}

	// While loop used to test all sets of numbers in file
	while (!inStream.eof())
	{
		// Reading in all three numbers 
		inStream >> a >> b >> c;

		// Testing the numbers from the file
		result1 = quadraticRoot1(a, b, c, answer);
		if (result1 == 1)
		{
			outStream << answer << " ";
		}
		else
		{
			outStream << "False ";
		}

		result2 = quadraticRoot2(a, b, c, answer);
		if (result2 == 1)
		{
			outStream << answer << "\n";
		}
		else
		{
			outStream << "False\n";
		}
	}

	// Closing both streams
	inStream.close();
	outStream.close();
    return 0;
}

// This function is used to check if the quadratic formula is true 
//		for the given values of a b and c
bool quadraticRoot1(double a, double b, double c, double& answer)
{
	if (a < 1)
	{
		return false;
	}
	else if (b < 1)
	{
		return false;
	}
	else if ((b * b) < ((4 * a * c)))
	{
		return false;
	}

	else
	{
		answer = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		return true;
	}
}

// This function is used to check if the quadratic formula is true 
//		for the given values of a b and c
bool quadraticRoot2(double a, double b, double c, double& answer)
{
	if (a < 1)
	{
		return false;
	}
	else if (b < 1)
	{
		return false;
	}
	else if ((b * b) < ((4 * a * c)))
	{
		return false;
	}

	else
	{
		answer = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		return true;
	}
}