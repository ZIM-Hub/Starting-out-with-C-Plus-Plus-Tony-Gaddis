// Calories Burned(4).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Name of this C++ program[Calories burned Q4.cpp]

Programmer: Jaime Ramirez

Course : CSC119 - 142 Introduction to Programming Spring 2021

Submission Date : 2 / 25 / 2021

Brief Description of this program.shows how many calories burned]

*/

// Importing input/output library
#include <iostream>

// Standard namespace
using namespace std;


void calBurned(double calories_burned,double CALORIES_BURNED_PER_MIN)
{
    for (int i = 5; i <= 30; i += 5)
    {
        calories_burned = (i * CALORIES_BURNED_PER_MIN);

        cout << "Calories burned after " << i
            << " minutes = "
            << calories_burned
            << endl;
    }

    return;

}

// MY main
int main()
{
    //Veriables
    double CALORIES_BURNED_PER_MIN = 3.6;
    double calories_burned = 0;

    calBurned(calories_burned, CALORIES_BURNED_PER_MIN);

    //End
    return 0;
}


// unfortianaly  my code was smal and i had a hard time to set it into a modualer form i will keep trying or i might change it i just want to turn it in so i wont be late
