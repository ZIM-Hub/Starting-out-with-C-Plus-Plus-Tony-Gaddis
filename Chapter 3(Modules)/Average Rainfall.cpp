// Average Rainfall.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [e.g. Average Rainfall Q4.cpp]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 2/11/2021

Brief Description of this program. [Average rainfall calculater for each month]

*/

// Importing input/output library
#include <iostream>

using namespace std;

// Declaring function
void avgRainfall(string month_1,string month_2,string month_3,double rainfall_month_1,double rainfall_month_2,double rainfall_month_3);

//My Main
int main()
{
    // Variables
    string month_1, month_2, month_3;
    double rainfall_month_1, rainfall_month_2, rainfall_month_3;

    // Ask user for month and rainfall
    cout << "Enter the name for month 1: ";
    cin >> month_1;
    cout << "How many inches of rain fell for " << month_1;
    cout << ": ";
    cin >> rainfall_month_1;

    cout << "Enter the name for month 2: ";
    cin >> month_2;
    cout << "How many inches of rain fell for " << month_2;
    cout << ": ";
    cin >> rainfall_month_2;

    cout << "Enter the name for month 3: ";
    cin >> month_3;
    cout << "How many inches of rain fell for " << month_3;
    cout << ": ";
    cin >> rainfall_month_3;

    // Calling a function(pass by variable)
    avgRainfall(month_1, month_2, month_3, rainfall_month_1, rainfall_month_2, rainfall_month_3);
}

void avgRainfall(string month_1,string month_2,string month_3,double rainfall_month_1,double rainfall_month_2,double rainfall_month_3)
{    
    // Variables
    double average;

    average = (rainfall_month_1, rainfall_month_2, rainfall_month_3);

    cout << "The average rainfall for " << month_1 << ", " << month_2 << ", " << "and " << month_3 << " is " << average << " inches." << endl;

}