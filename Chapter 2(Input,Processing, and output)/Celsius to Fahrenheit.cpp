// Celsius to Fahrenheit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [e.g. Chapter02_Q8.cpp]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming C++ Spring 2021

Submission Date: 2/1/2020

Brief Description of this program. Celsius to fahrenheit Calculater

*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables
    float F,
        C;

    // Ask user Celsius Temp
    cout << "\nEnter the Celsius Temp: ";
    cin >> C;

    // Calculate Fahrenheit
    F = ((9.0 / 5.0) * C) + 32;

    // Display Fahrenheit
    cout << setprecision(1) << fixed << right << endl;
    cout << "Celsius    Temp = " << setw(6) << C << endl;
    cout << "Fahrenheit Temp = " << setw(6) << F << endl;
    cout << endl;

    return 0;
}
