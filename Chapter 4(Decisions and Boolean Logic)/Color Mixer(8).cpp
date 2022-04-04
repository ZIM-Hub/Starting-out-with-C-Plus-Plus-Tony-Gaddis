// Color Mixer(8).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Stadutn Seating Q2

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 2/11/2021

Brief Description of this program. [This program is on Stadium Seating]

*/

// Importing input/output library
#include <iostream>

// Standard namespace
using namespace std;

// Declaring function
void colorMix(string color_1,string color_2)
{
    if (color_1 == "red" || color_1 == "Red")
    {
        if (color_2 == "blue" || color_2 == "Blue")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = purple.\n";
        }
        else if (color_2 == "yellow" || color_2 == "Yellow")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = Orange.\n";
        }
    }
    else if (color_1 == "blue" || color_1 == "Blue")
    {
        if (color_2 == "red" || color_2 == "Red")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = purple.\n";
        }
        else if (color_2 == "yellow" || color_2 == "Yellow")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = green.\n";
        }
    }
    else if (color_1 == "yellow" || color_1 == "Yellow")
    {
        if (color_2 == "red" || color_2 == "Red")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = orange.\n";
        }
        else if (color_2 == "blue" || color_2 == "Blue")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = green.\n";
        }
    }
    else
    {
        cout << "Neither " << color_1;
        cout << " nor " << color_2;
        cout << " is a prime color. ";
        cout << "\nRun the program and try again.\n";
        cout << "Remember a primary color is either Red,";
        cout << "Blue, or Yellow.\n";
    }
    
return;
}

//My Main
int main()
{
    // Variables
    string color_1, color_2;

    // Ask user for 2 primary colors
    cout << endl;
    cout << "Enter 1st primary color : ";
    cin >> color_1;
    cout << "The 2nd primary color is: ";
    cin >> color_2;

    colorMix(color_1, color_2);

    // Formatting
    cout << endl << endl;

    // Terminate program
    return 0;


}
