// Stadium Seating.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
#include <iomanip>

// Standard namespace
using namespace std;

// Declaring function
void ticketsales(double class_A_total,double class_B_total,double class_C_total);

//My main
int main()
{
    // Variables
    double class_A_total, class_B_total, class_C_total;

    // Ask user for number of seats sold in each class (A,B,C)
    cout << endl;
    cout << "Enter number of seats sold in Class A: ";
    cin >> class_A_total;

    cout << "Enter number of seats sold in Class B: ";
    cin >> class_B_total;

    cout << "Enter number of seats sold in Class C: ";
    cin >> class_C_total;

    //calling my funtion
    ticketsales(class_A_total, class_B_total, class_C_total);

}
   
void ticketsales(double class_A, double class_B, double class_C)
{
    // Variables
    double total_income, class_A_total, class_B_total, class_C_total;

    //Math
    class_A_total = class_A * 15;
    class_B_total = class_B * 12;
    class_C_total = class_C * 9;
    total_income = class_A_total + class_B_total + class_C_total;

    // Format in fixed-point notation
    cout << fixed << setprecision(2);
    // Display income generated
    cout << "This was the total Tickets sold: $" << total_income << endl;

}