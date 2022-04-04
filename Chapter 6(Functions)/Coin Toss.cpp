// Coin Toss.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Coin Toss]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 3/4/2021

Brief Description of this program. This program will play a head or tails game

*/

// Importing input/output library
#include <iostream>
#include <stdio.h> // For rand() and srand()
#include <cstdlib>  // For rand and srand
#include <stdlib.h> // For rand and srand
#include <ctime>    // For time() function

// Standard namespace
using namespace std;

//Declaring Function
void coinToss();
int inputValidate(int num);

//My Main
int main()
{
    int choice{};
    unsigned seed = time(0);
    
    srand(seed);


    cout << "How many times should the coin be tossed? ";
    choice = inputValidate(choice);

    for (int i = 0; i < choice; i++)
        coinToss();

    return 0;
}


 //Calling inputValidate Function
int inputValidate(int num)
{
    while (!(cin >> num) || num < 0)
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;
}


 //coinToss Function
void coinToss()
{
    const int MIN_VALUE = 1,
        MAX_VALUE = 2;

    int coin;

    coin = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    cout << (coin == MIN_VALUE ? "Heads" : "Tails") << endl;
}
