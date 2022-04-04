// Largest-Smallest Arrey.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Largest/Smallest Array]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 4/4/2021

Brief Description of this program. This program lets the user enter 10 numbers and thr program will display the lowest number and largest number

*/

// Importing input/output library
#include <iostream>

//Namespace
using namespace std;

//My main
int main()
{
	int MIN, MAX;//int for smallest and largest
	const int Numb = 10;
	int array[Numb]; //10 elements
	cout << "Enter 10 values:"; //Displays to the user to enter 10 numbers.

	for (int i = 0; i < 10; i++)
	{
		cout << "\nEnter value: ";
		cin >> array[i]; // Puts values into the array
	}

	MIN = array[0];
	MAX = array[0];

	for (int i = 1; i < 10; i++)
	{
		if (MIN > array[i])
		{
			MIN = array[i];
		}
		else if (MAX < array[i])
		{
			MAX = array[i];
		}//min and max for what user enters
	}

	cout << "Largest number is: " << MAX << endl;
	cout << "Smallest number is: " << MIN << endl;//Displays the largest and smallest number

	return 0;//End of program

}
