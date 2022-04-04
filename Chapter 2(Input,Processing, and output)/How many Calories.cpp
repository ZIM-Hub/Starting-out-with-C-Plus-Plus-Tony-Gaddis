// How many Calories.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/*

Name of this C++ program [e.g. Chapter02_Q8.cpp]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming C++ Spring 2021

Submission Date: 2/1/2020

Brief Description of this program. how many calories the user ate

*/

int main()
{
    double bagsoFcookies = 300;
    double servings = 10;
    double cooKiesate = 0;
    
    //Asking how many cookies the user ate//
    cout << "There are 10 servings in 1 bag of cookies";
    cout << " How many cookies did you eat?: ";
    cin >> cooKiesate;
    
    //Program math
    cout << cooKiesate / (servings/bagsoFcookies);


    return 0;
}
