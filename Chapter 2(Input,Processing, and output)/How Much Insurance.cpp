// How Much Insurance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [e.g. Chapter02_Q8.cpp]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming C++ Spring 2021

Submission Date: 2/1/2020

Brief Description of this program. How much it would cost to cover the users boulding and how much they will spend 

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //variable//
    const float insure_percentage = .80;

    float replacement_cost,
        min_amount_insurance;

    // Explains the program//
    cout << endl;
    cout << "--------------------------------------------\n\n" << endl;
    cout << "Many Financial experts advise that property" << endl;
    cout << " owners should insure their gomes or buildings" << endl;
    cout << " for at least 80 percent of the amount it would" << endl;
    cout << " cost to replace the structure" << endl;
    cout << "--------------------------------------------\n\n" << endl;
    cout << "Please Press enter to Continue" << endl;
    cin.get();

    cout << "This program will calculate the 80 " << endl;
    cout << "percent for you. " << endl;
    cout << "------------------------------------\n\n";
    cout << "Enter the replacement cost of your " << endl;
    cout << "home or building: $";
    cin >> replacement_cost;

    //Math to calculate the min amount for insurance//
    min_amount_insurance = replacement_cost * insure_percentage;

    // Display min amount to buy for property
    cout << setprecision(2) << fixed;

    cout << "The minimum amount of insurance " << endl;
    cout << "to buy at 80% is: $";
    cout << min_amount_insurance << endl;
    cout << endl;

    return 0;
}

