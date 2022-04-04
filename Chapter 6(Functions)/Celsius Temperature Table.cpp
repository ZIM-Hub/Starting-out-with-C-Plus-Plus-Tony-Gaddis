// Celsius Temperature Table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Celsius Temperature table]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 3/4/2021

Brief Description of this program. This program will show you Fahrenheit to Celsius Table

*/

// Importing input/output library
#include <iostream>
using namespace std;

// Standard namespace
double celsius(double C);

//My Main
int main()
{
    const int MIN_TEMP = 0, MAX_TEMP = 20;
    double C;

    cout << "-----------------------------------|\n";
    cout << "Fahrenheit     | Celsius\n";
    cout << "-----------------------------------|\n";

    for (int F = MIN_TEMP; F <= MAX_TEMP; F++)
    {
        C = celsius(F);

        cout << F << "               ";
        cout << C << endl;

    }

    return 0;
}


 //celsius()
double celsius(double F)
{
    return (5.0 / 9.0) * (F - 32.0);
}
