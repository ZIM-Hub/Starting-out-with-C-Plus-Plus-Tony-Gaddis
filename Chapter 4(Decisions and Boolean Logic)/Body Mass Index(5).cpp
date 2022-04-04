// Body Mass Index(5).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Test Average.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*

Name of this C++ program [Test Average Q3.cpp]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 2/11/2021

Brief Description of this program. [Test Average]

*/

// Importing input/output library
#include <iostream>
#include <cmath>    // Included for using pow() function.

// Standard namespace
using namespace std;

// Declaring function
void bodyMass(double BMI, double weight, double height)
{
    // Calculate & display the person's (BMI)
    BMI = weight * (703 / pow(height, 2));

    // Display BMI
    cout << "BMI = " << BMI << endl;

    // Decision Structure
    if (BMI >= 18.5 && BMI <= 25)
        cout << "Weight optimal." << endl;
    else if (BMI >= 0 && BMI <= 18.5)
        cout << "Weight underweight." << endl;
    else if (BMI >= 25)
        cout << "Weight overweight." << endl;
    return;

}

//My Main
int main()
{
    // Variables
    double BMI= NULL, weight, height;

    // Ask user for height & weight
    cout << "Enter weight(in pounds): " << endl;
    cin >> weight;

    cout << "Enter height(in inches, e.g. 5' 9\" = 69): " << endl;
    cin >> height;

    bodyMass(BMI, weight, height);

    return 0;

}
