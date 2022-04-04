// Markup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Lowest Score Drop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Markup #1]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 3/14/2021

Brief Description of this program. This program asked the user to enter items cost and it markup percentage of the item
*/


// Importing input/output library
#include <iostream>
#include <iomanip>

// Importing input/output library
using namespace std;

// Declaring functions
double calculateRetail(double num1, double num2);
double inputValidate(double num);

//My Main
int main()
{
    double wholesale_cost,
        markup_percent,         
        retail_price;

    cout << "Enter wholesale cost: ";
    wholesale_cost = inputValidate(NULL);

    cout << "Enter it's markup percentage: ";
    markup_percent = inputValidate(NULL) * .01;

    retail_price = calculateRetail(wholesale_cost, markup_percent);

    cout << "Markup percentage = %"
        << (markup_percent / .01)
        << endl;

    cout << setprecision(2) << fixed

        << "Wholesale cost    = $"
        << wholesale_cost
        << endl

        << "Retail price      = $"
        << retail_price
        << endl;

    return 0;
}
//Function 1 return canlculates the retail value
double calculateRetail(double num1, double num2)
{
    return (num1 * num2) + num1;
}
//Function 2 a while loop  
double inputValidate(double num)
{
    while (!(cin >> num) || (num < 0))
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(1200, '\n');
    }
    return num;
}