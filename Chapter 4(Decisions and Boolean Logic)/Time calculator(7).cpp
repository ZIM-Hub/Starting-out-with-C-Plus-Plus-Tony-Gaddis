// Time calculator(7).cpp : This file contains the 'main' function. Program execution begins and ends there.
/*

Name of this C++ program [Time Calculator(7)]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date:2/18/2021

Brief Description of this program. Time calculater

*/

// Importing input/output library
#include <iostream>
#include <iomanip>  // setprecision() and fixed

// Standard namespace
using namespace std;

void timeCal(double seconds)
{
    double num_mins;

    if (seconds <= 59)
    {
        cout << seconds;
        cout << " is less that 60 seconds." << endl;
    }
    else if (seconds >= 60 && seconds < 3600)
    {
        num_mins = seconds / 60.0;
        cout << num_mins << " minutes in ";
        cout << seconds << " seconds" << endl;
    }
    else if (seconds >= 3600 && seconds < 86400)
    {
        num_mins = seconds / 3600.0;
        cout << num_mins << " hours in ";
        cout << seconds << " seconds" << endl;
    }
    else if (seconds >= 86400)
    {
        num_mins = seconds / 86400.0;
        cout << num_mins << " days in ";
        cout << seconds << " seconds" << endl;
    }

    return;
}

//My Main
int main()
{
    // Variables
    double seconds;

    // Ask the user to enter a number of seconds
    cout << "\nEnter a number of seconds: ";
    cin >> seconds;

    // Format decimal percision at 2 decimal places.
    cout << setprecision(2) << fixed;

    timeCal(seconds);

    // Formatting
    cout << endl << endl;

    // Terminate program
    return 0;


}
