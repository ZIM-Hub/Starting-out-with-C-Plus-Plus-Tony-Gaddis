// IsPrime Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [isPrime function]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 3/4/2021

Brief Description of this program. This program lets you know if your number is a prime number or not

*/

// Importing input/output library
#include <iostream>

// Standard namespace
using namespace std;

// Declaring function
int inputValidate(int number);
bool isPrime(int number);

//My Main
int main()
{
    int number{};

    cout << "Enter a number: ";
    number = inputValidate(number);

    cout << "Your number is "
        << (isPrime(number) ? "PRIME." : "NOT PRIME.")
        << endl;

    return 0;
} // END int main()

// Integer 
int inputValidate(int num)
{

    while (!(cin >> num) || num < 0)
    {
        cout << "Error. Number must not be "
            << " 0 or greater:";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return num;
}

//Returning Boolen
bool isPrime(int number)
{
    int isPrime = 0;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
            isPrime++;
    }

    return isPrime == 2 ? 1 : 0;

}
