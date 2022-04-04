// Falling Distance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Winning Division.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Markup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Lowest Score Drop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Falling Distance]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 3/14/2021

Brief Description of this program. This program displayes the falling time and distance of a object
*/

// Importing input/output library
#include <iostream>
#include <cmath>    // for pow() function

//Namespace
using namespace std;

//Constent strings and global veriables
const double g = 9.8;

// Declaring functions
double fallingDistance(double falling_time);

//My Main
int main()
{
    double d, t;

    for (int i = 0; i < 10; i++)
    {
        t = i + 1;
        d = fallingDistance(t);

        cout << t << " seconds =  "
            << d << " meters"
            << endl;
    }

    return 0;
}

//fallingDistance function 
double fallingDistance(double falling_time)
{
    return (0.5) * g * pow(falling_time, 2);
}
