// Random Guessing Game(20).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Random Guessing Game)]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 2/25/2021

Brief Description of this program. GUess the Number

*/


// Importing input/output library
#include <iostream>
#include <cstdlib>  // For rand and srand
#include <stdio.h>
#include <stdlib.h>
#include <ctime>    // For the time method

// Standard namespace
using namespace std;

void randNumb(int user_num, int random_num)
{
    cout << "Guess a number between 1 and 10." << endl;
    cin >> user_num;

    while (user_num != random_num)
    {
        cout << "Your number is "
            << (user_num < random_num ?
                "lower." : "higher.");

        cout << "Try again: ";

        cin >> user_num;
    }

    cout << "\nCorrect! " << endl;
    cout << "Random number = " << random_num << endl;
    cout << "Your guess    = " << user_num << endl;
    cout << endl;

    return;
}

//My Main
int main()
{
    const int MIN_VALUE = 1,
        MAX_VALUE = 10;

    int random_num,
        user_num = 0;

    srand((unsigned int)time(NULL));

    random_num = (rand() %
        (MAX_VALUE - MIN_VALUE + 1)) +
        MIN_VALUE;

    // cout << "Random number is: " 
    //      << random_num 
    //      << endl 
    //      << endl; 

    randNumb(user_num, random_num);

    //End of Program
    return 0;
}
