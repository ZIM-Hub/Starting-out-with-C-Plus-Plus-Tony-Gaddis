// Safest Driving Area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Markup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Lowest Score Drop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Markup #1]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 3/14/2021

Brief Description of this program. This program displays the safest driving area in the city
*/

// Importing input/output library
#include <iostream>
#include <string>

//Namespace
using namespace std;

//Constent strings and global veriables
const string NORTH = "North",
SOUTH = "South",
EAST = "East",
WEST = "West",
CENTRAL = "Central";

// Declaring functions
double inputValidate(double num);
int getNumAccidents(string region);
void findLowest(double N_total, double S_total, double E_total, double W_total, double C_total);
void checkIfSmallest(double total1, double total2, double total3, double total4, double total5, string region);

//My Main
int main()
{
    double N_total,
        S_total,
        E_total,
        W_total,
        C_total;

    N_total = getNumAccidents(NORTH);
    S_total = getNumAccidents(SOUTH);
    E_total = getNumAccidents(EAST);
    W_total = getNumAccidents(WEST);
    C_total = getNumAccidents(CENTRAL);

    findLowest(N_total, S_total, E_total, W_total, C_total);

    return 0;
}

//inputValidate sees if its a number
double inputValidate(double num)
{
    while (!(cin >> num) || num < 0)
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;
}

//gerNumAccidents gets user number
int getNumAccidents(string region)
{
    double num;
    cout << "What is the number of automobile accidents\n"
        << "reported in the " << region << " region \n"
        << "during the last year? ";

    num = inputValidate(NULL);

    cout << endl;

    return num;
}

//findLowest function works with checkIfSmallest & displays the region with the smallest accidents
void findLowest(double N_total, double S_total, double E_total, double W_total, double C_total)
{
    cout << "The region with the smallest accident\n"
        << "total is ";

    checkIfSmallest(N_total, S_total, E_total, W_total, C_total, NORTH);
    checkIfSmallest(S_total, N_total, E_total, W_total, C_total, SOUTH);
    checkIfSmallest(E_total, N_total, S_total, W_total, C_total, EAST);
    checkIfSmallest(W_total, N_total, S_total, E_total, C_total, WEST);
    checkIfSmallest(C_total, N_total, S_total, E_total, W_total, CENTRAL);

    cout << endl << endl;
}

//checkIfSmallest displays the reggion and total
void checkIfSmallest(double total1,double total2, double total3, double total4, double total5, string region)
{
    if (total1 < total2)
    {
        if (total1 < total3)
        {
            if (total1 < total4)
            {
                if (total1 < total5)
                {
                    cout << region << ", with it's total\n"
                        << "being " << total1 << '.';
                }
            }
        }
    }
}
