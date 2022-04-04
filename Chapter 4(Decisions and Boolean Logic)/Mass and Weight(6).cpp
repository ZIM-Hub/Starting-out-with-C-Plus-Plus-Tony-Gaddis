// Mass and Weight(6).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Body Mass Index(6)]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 2/15/2021

Brief Description of this program. Body Mass index calculater

*/
// Importing input/output library
#include <iostream>

// Standard namespace
using namespace std;

// Declaring function
void bodyMass(double weight, double mass)
{
        // Decision Statement
        if (weight >= 1000)
            cout << "Too heavy.";
        else if (weight <= 10)
            cout << "Too light.";
        else
            cout << "Neither heavy or light.";

        cout << endl << endl;

        // Terminate program
        return;
}

//My main
int main()
{
    // Variables
    double weight, mass;

    // Ask the user for object's mass
    cout << endl;
    cout << "What is the object's mass: ";
    cin >> mass;

    // Calculate object's weight
    weight = mass * 9.8;

    // Display weight.
    cout << "\nObject's weight = ";
    cout << weight << endl << endl;

    bodyMass(weight, mass);

    return 0;
}

// Declaring function

