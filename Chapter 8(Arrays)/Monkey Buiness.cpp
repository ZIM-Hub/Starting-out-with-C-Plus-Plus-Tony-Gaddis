// Monkey Buiness.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Monkey BUsiness]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 4/4/2021

Brief Description of this program.
A local zoo wants to keep track of how many pounds of its three monkeys eats each day during a typical week. 
Write a program that stores this information in a two dimensional 3 x 7 array, 
where each row represents a different monkey and each column represents a different day of the week. 
The program should first have the user input the data for each monkey. 
Then it should create a report that includes the following information:

- Average amount of food eaten per day by the whole family of monkeys.
- The least amount of food eaten during the week by any one monkey.
- The greatest amount of food eaten during the week by any one monkey.
*/

// Importing input/output library
#include<iostream>
#include <limits>

//Namespace
using namespace std;

void monkYfood(const int MONKEYS = 3,const int DAYS = 7, float total = 0.0f);


void monkYfood(float total = 0.0f)
{
	const int MONKEYS = 3;
	const int DAYS = 7;
	int food[MONKEYS][DAYS];
	
	//get data from user and sum itjup
	for (int monk = 0; monk < MONKEYS; monk++)
	{
		for (int day = 0; day < DAYS; day++)
		{
			cout << "Monkey " << (monk + 1) << ", day " << (day + 1) << ": ";
			cin >> food[monk][day];

			total += food[monk][day];

		}
		cout << endl;
	}
	
	
}

int main()
{
	//Ints & floats
	const int MONKEYS = 3;
	const int DAYS = 7;
	int food[MONKEYS][DAYS];
	int minimum = std::numeric_limits<int>::max();
	int maximum = std::numeric_limits<int>::min();
	float total = 0.0f;
	float average = 0.0f;

	//Displays to the user
	cout << "Enter the amount of food consumed for each monkey on each day: " << endl;

	
	//calculate average
	average = total / (MONKEYS * DAYS);

	//Displays the most eaten
	for (int monk = 0; monk < MONKEYS; monk++)
	{
		for (int day = 0; day < DAYS; day++)
		{
			if (food[monk][day] > maximum)
				maximum = food[monk][day];
		}

	}

	//Displayes the least eaten
	for (int monk = 0; monk < MONKEYS; monk++)
	{
		for (int day = 0; day < DAYS; day++)
		{
			if (food[monk][day] < minimum)
				minimum = food[monk][day];
		}

	}

	monkYfood(total = 0.0f);


	cout << "            Report" << endl;
	cout << "-----------------------------" << endl;
	cout << endl;
	cout << "The total amount of food consumed is " << total << endl;
	cout << "The average amount of food consumed by the monkeys each day is " << average << endl;
	cout << "The most eaten by a monkey is " << maximum << endl;
	cout << "The least eaten by a monkey is " << minimum << endl;


	system("PAUSE");

	return 0;
}
