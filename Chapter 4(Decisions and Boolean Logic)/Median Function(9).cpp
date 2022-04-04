// Median Function(9).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*

Name of this C++ program [Program 9]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date:2/18/2021

Brief Description of this program. Calculates the amount of money equal to a doller

*/

// Importing input/output library
#include <iostream>
#include <iomanip>

// Standard namespace
using namespace std;

// Definding const variables
const double pennies = 0.1;
const double nickles = 0.05;
const double dimes = 0.10;
const double quarters = 0.25;
const double dollar = 1.00;

// Declaring function
void calcMoney(double userTotal);

//MyMain
int main()
{
	//Variables
	int user_P, user_N, user_D, user_Q;
	double total_P, total_N, total_D, total_Q, userTotal;

	//Asking user to enter numbers of money
	cout << "Enter amount of pennies: ";
	cin >> user_P;
	cout << "Enter the amount of nickles: ";
	cin >> user_N;
	cout << "Enter amount of dimes: ";
	cin >> user_D;
	cout << "Enter the amount of quarters: ";
	cin >> user_Q;

	//process of my data
	total_P = user_P * pennies;
	total_N = user_N * nickles;
	total_D = user_D * dimes;
	total_Q = user_Q * quarters;

	userTotal = total_P + total_N + total_D + total_Q;

	//calling my funcion
	calcMoney(userTotal);
}


void calcMoney(double userTotal)
{
    // Defining variables
    double Money1, Money2;
    
    // Process data
    Money1 = dollar - userTotal;
    Money2 = userTotal - dollar;
    
    // Format in fixed-point notation
    cout << fixed << setprecision(2);
    
    // If the user total is equal to one-dollar display congratulations
    if (userTotal == dollar) {
        cout << "Congrats! You jsut made a dollar." << endl;
    }
    // else if  if user entry is less then one dollar
    else if (userTotal < dollar) {
        cout << "Sorry, you made $" << Money1 << "Its less than a doller." << endl;
    }
    // else if user entry is greater then one dollar
    else if (userTotal > dollar) {
        cout << "Sorry, you made $" << Money2 << " It's more then a dollar" << endl;
    }
}
