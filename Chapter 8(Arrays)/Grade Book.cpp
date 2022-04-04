// Grade Book.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Grade Book]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 4/4/2021

Brief Description of this program.This program get students names and test scores and displayes there avrage grade and letter
*/

// Importing input/output library
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Global Variables
const int NAMES = 5;
const int TESTS = 4;
const int GRADES = 5;


// Declaring functions
double getAverage(double[], int);
char getGrade(double);

//My Main
int main()
{
	//variables
	string student[NAMES];
	double student0Scores[TESTS];
	double student1Scores[TESTS];
	double student2Scores[TESTS];
	double student3Scores[TESTS];
	double student4Scores[TESTS];
	double average;
	char Grade;

	cout << "Get 5 Students names then 4 test averages for each student assigned to a letter grade.\n";
	cout << "\n";
	cout << "\n";

	//asks user for names of students
	cout << "Please enter the names of five students: ";
	cout << "\n";
	cout << "\n";


	cout << "Name of first student: ";
	getline(cin, student[0]);

	cout << "Name of second student: ";
	getline(cin, student[1]);

	cout << "Name of third student: ";
	getline(cin, student[2]);

	cout << "Name of fourth student: ";
	getline(cin, student[3]);

	cout << "Name of fifth student: ";
	getline(cin, student[4]);


	cout << "\n";
	cout << "\n";
	cout << "Now enter the testscores for each of the five students";
	cout << "\n";
	cout << "\n";

	//Enter the test scores
	for (int count = 0; count < TESTS; count++)
	{
		cout << "Please enter test score" << (count + 1) << " for " << student[0] << ": ";
		cin >> student0Scores[count];

		while (student0Scores[count] < 0 || student0Scores[count] > 100)
		{
			cout << "Please enter a score between 0-100.\n"; //Input validation (only scores allowed between 0-100)
			cin >> student0Scores[count];
		}
	}
	cout << "\n";

	for (int count = 0; count < TESTS; count++)
	{
		cout << "Please enter test score" << (count + 1) << " for " << student[1] << ": ";
		cin >> student1Scores[count];

		while (student1Scores[count] < 0 || student1Scores[count] > 100)
		{
			cout << "Please enter a score between 0-100.\n";
			cin >> student1Scores[count];
		}
	}

	cout << "\n";
	for (int count = 0; count < TESTS; count++)
	{
		cout << "Please enter test score" << (count + 1) << " for " << student[2] << ": ";
		cin >> student2Scores[count];

		while (student2Scores[count] < 0 || student2Scores[count] > 100)
		{
			cout << "Please enter a score between 0-100.\n";
			cin >> student2Scores[count];
		}
	}

	cout << "\n";
	for (int count = 0; count < TESTS; count++)
	{
		cout << "Please enter test score" << (count+1) << " for " << student[3] << ": ";
		cin >> student3Scores[count];

		while (student3Scores[count] < 0 || student3Scores[count] > 100)
		{
			cout << "Please enter a score between 0-100.\n";
			cin >> student3Scores[count];
		}
	}

	cout << "\n";
	for (int count = 0; count < TESTS; count++)
	{
		cout << "Please enter test score" << (count + 1) << "for" << student[4] << ": ";
		cin >> student4Scores[count];

		while (student4Scores[count] < 0 || student4Scores[count] > 100)
		{
			cout << "Please enter a score between 0-100.\n";
			cin >> student4Scores[count];
		}
	}

	//Calling the getAverage function

	average = getAverage(student0Scores, TESTS);
	Grade = getGrade(average);
	cout << "\n";
	cout << "The average test score for " << student[0] << " is: " << average << " and the lettergrade is: " << Grade;
	cout << "\n";

	average = getAverage(student1Scores, TESTS);
	Grade = getGrade(average);
	cout << "\n";
	cout << "The average test score for " << student[1] << " is: " << average << " and the lettergrade is: " << Grade;
	cout << "\n";

	average = getAverage(student2Scores, TESTS);
	Grade = getGrade(average);
	cout << "\n";
	cout << "The average test score for " << student[2] << " is: " << average << " and the lettergrade is: " << Grade;
	cout << "\n";

	average = getAverage(student3Scores, TESTS);
	Grade = getGrade(average);
	cout << "\n";
	cout << "The average test score for " << student[3] << " is: " << average << " and the lettergrade is: " << Grade;
	cout << "\n";

	average = getAverage(student4Scores, TESTS);
	Grade = getGrade(average);
	cout << "\n";
	cout << "The average test score for " << student[4] << " is: " << average << " and the lettergrade is: " << Grade;
	cout << "\n";

	cout << endl;

	system("PAUSE");



	return 0;
}

double getAverage(double scores[], int TESTS) //Get average function
{
	double avg, total=0;
	int count;

	for (count = 0; count < TESTS; count++)
	{
		total += scores[count];
	}

	avg = total / TESTS;
	return avg;
}

char getGrade(double avg) //Get the letter grade based on the average.
{
	const int A_SCORE = 90,
		B_SCORE = 80,
		C_SCORE = 70,
		D_SCORE = 60;

	char lettergrade;


	if (avg >= A_SCORE) 
	{
		lettergrade = 'A';
	}

	else if (avg >= B_SCORE)
	{
		lettergrade = 'B';
	}
	else if (avg >= C_SCORE)
	{
		lettergrade = 'C';
	}
	else if (avg >= D_SCORE)
	{
		lettergrade = 'D';
	}
	else if (avg < D_SCORE)
	{
		lettergrade = 'F';
	}

	return lettergrade;

}