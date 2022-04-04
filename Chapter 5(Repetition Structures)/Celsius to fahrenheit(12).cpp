// Celsius to fahrenheit(12).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Celsius to Fahrenheit]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 2/25/2021

Brief Description of this program. converts Celsius to fahrenheit

*/
// Importing input/output library
#include <iostream>
#include <iostream>
#include <iomanip>

// Standard namespace
using namespace std;
void celsToFah(double F)
{
    for (int C = 0; C <= 20; C++)
    {
        // Calculate Fahrenheit math
        F = ((9.0 / 5) * C) + 32;
        cout << setw(2) << C << "\t\t" << F << endl;
    }

    cout << endl;
    cout << "--------------------------------------\n";
    cout << "Celsius\t\tFahrenheit" << endl;
    cout << "======================================\n";

    cout << setprecision(1) << fixed << right;
    cout.fill('0');

    return;

}
//My Main
int main()
{
    double F = 0;

    cout << "--------------------------------------\n";

    celsToFah(F);

    //End of program
    return 0;
}
