// Pennies for Pay(7).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Pennies for pay)]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 2/25/2021

Brief Description of this program. calculates pennies per days

*/
// Importing input/output library
#include <iostream>
#include <iomanip>

// Standard namespace
using namespace std;


void pennies(double num_of_days, double INCREMENTAL_AMOUNT)
{
    double daily_salary = .01, total_salary = 0;

    for (int i = 0; i < num_of_days; i++)
    {
        total_salary += daily_salary;
        cout << "   " << (i + 1) << "           $";
        cout << daily_salary << endl;
        daily_salary *= INCREMENTAL_AMOUNT;
    }

    cout << "\nTotal salary for " << num_of_days;
    cout << " days = $" << total_salary << endl;
    cout << endl;

    return;
}

// My Main
int main()
{
    const int INCREMENTAL_AMOUNT = 2;

    int num_of_days;

    cout << "\nEnter number of days: ";
    while (!(cin >> num_of_days) || (num_of_days < 1))
    {
        cout << "ERROR: number of days must be \n"
            << "greater than 1 \n"
            << endl;
        cin.clear();
        cin.ignore(1200, '\n');
    }

    cout << "\n   Day             Amount Earned" << endl;
    cout << "--------------------------------------\n";
    cout << setprecision(2) << fixed;

    pennies(num_of_days, INCREMENTAL_AMOUNT);

    return 0;
    //END
}