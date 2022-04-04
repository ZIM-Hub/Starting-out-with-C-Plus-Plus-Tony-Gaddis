// The greatest and last of these(13).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Greatest and last of these]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 2/25/2021

Brief Description of this program. gives you the value of numbers

*/

// Importing input/output library
#include <iostream>

// Standard namespace
using namespace std;

void dickmain(int SENTINEL_VALUE,int num,int min,int max)
{
    while (num != SENTINEL_VALUE)
    {
        if (num < min)
            min = num;

        if (num > max)
            max = num;

        cout << "Enter a value: ";
        cin >> num;

    }

    cout << "Smallest number is: " << min << endl;
    cout << "Largest number is: " << max << endl;

    return;
}

//My Main
int main()
{
    const int SENTINEL_VALUE = -99;
    int num,
        min,
        max;

    cout << "This program will display the greatest\n"
        << "and the least values.\n"
        << "Enter a number to begin and enter -99\n" 
        << "to quit the program."
        << "Enter a value: ";
    cin >> num;

    min = max = num;

    dickmain(SENTINEL_VALUE, num, min, max);

    //End of program
    return 0;
}
