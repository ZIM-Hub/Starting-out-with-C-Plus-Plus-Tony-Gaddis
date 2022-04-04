// Larger than n.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Larger than n]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 4/4/2021

Brief Description of this program. This program askes the user to enter numbers into an array
then it displays them to the user
*/

// Importing input/output library
#include <iostream>

//Namespace
using namespace std;

//Function prototype
void displayFiltered(const int array[], int size, int n);
void fill(int array[], int size);
void display(const int array[], int size)

//displayFilterd funcion
void displayFiltered(const int array[], int size, int n)
{
    cout << "numbers greater than " << n << " are: ";

    // for each number in the array: if it is greater than 'n', display it
    for (int i = 0; i < size; ++i) if (array[i] > n) cout << array[i] << ' ';

    cout << '\n'; // finally, print a new line
}

//Lets the user enter the numbers
//fill function
void fill(int array[], int size)
{
    cout << "enter " << size << " numbers in the array: ";
    for (int i = 0; i < size; ++i) cin >> array[i];
}

//Displays the numbers in the array to the user
//display function
void display(const int array[], int size)
{
    cout << "the numbers in the array are: ";
    for (int i = 0; i < size; ++i) cout << array[i] << ' ';
    cout << '\n';
}

//My Main
int main()
{
    const int MAX_SIZE = 20;//MAX size cons int
    int array[MAX_SIZE] = {};

    int size;
    cout << "Enter the number of elements in the array [1-" << MAX_SIZE << "]: ";
    cin >> size;
    if (size > MAX_SIZE) size = MAX_SIZE;
    if (size < 1) size = 1;

    fill(array, size);//Calling fill function
    display(array, size);//Calling display function

    int n;
    cout << "Enter a value: ";
    cin >> n;

    displayFiltered(array, size, n);//Calling displayfiltered functiona

    return 0;//End of program
}
