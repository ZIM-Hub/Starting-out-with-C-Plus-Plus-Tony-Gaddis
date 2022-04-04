// main_program1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Main]

/*
Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 4/7/2021

Brief Description of this program.
in class project
*/

// Importing input/output library
#include <iostream>

//Namespace
using namespace std;


// Function prototypes
int binarySearch(const int[], int, int);
int linearSearch(const int[], int, int);
void bubbleSort(int[], int);
void selectionSort(int[], int);
void swap(int&, int&);
void displayArray(int[], int);

int main()
{
    // Do not change these arrays are given
    const int SIZE = 20;
    int array1[SIZE] = { 34, 42, 8, 35, 2, 26, 22, 40, 21, 14, 32, 27, 7, 5, 6, 19, 38, 24, 17, 39 };
    int array2[SIZE] = { 47, 22, 38, 20, 43, 16, 7, 39, 13, 2, 1, 11, 30, 6, 23, 8, 19, 41, 50, 28 };

    /****** YOUR CODE STARTS HERE ******/
    int userinput; //My local variables
    int position;

    //Calling functions
    bubbleSort(array1, SIZE);
    selectionSort(array2, SIZE);
    displayArray(array1, SIZE);
    displayArray(array2, SIZE);

    cout << "Enter Number 1: "; //Displays to user
    cin >> userinput;//User entry
    position = linearSearch(array1, SIZE, userinput);
    cout << array1[position];
    cout << endl;

    cout << "Enter Number 2: ";  //Displays to user
    cin >> userinput; //User entry
    position = binarySearch(array2, SIZE, userinput);
    cout << array2[position];
    /*
    displayArray(array1, SIZE);
    displayArray(array2, SIZE);
    */
    /**Note: You will need to modify search and sort functions to answer questions**/

    return 0;
}

//*****************************************************************
// The linearSearch function performs a linear search on an       *
// integer array. The array arr, which has a maximum of size      *
// elements, is searched for the number stored in value. If the   *
// number is found, its array subscript is returned. Otherwise,   *
// -1 is returned indicating the value was not in the array.      *
//*****************************************************************
int linearSearch(const int arr[], int size, int value)
{
    int index = 0;       // Used as a subscript to search array
    int position = -1;   // To record position of search value
    bool found = false;  // Flag to indicate if the value was found

    while (index < size && !found)
    {
        if (arr[index] == value)  // If the value is found
        {
            found = true;         // Set the flag
            position = index;     // Record the value's subscript
        }
        index++;                  // Go to the next element
    }
    return position;              // Return the position, or -1
}

//***************************************************************
// Definition of binarySearch function                          *
// The binarySearch function performs a binary search on an     *
// integer array. array, which has a maximum of numElems        *
// elements, is searched for the number stored in value. If the *
// number is found, its array subscript is returned. Otherwise, *
// -1 is returned indicating the value was not in the array.    *
//***************************************************************
int binarySearch(const int array[], int size, int value)
{
    int first = 0,             // First array element
        last = size - 1,       // Last array element
        middle,                // Mid point of search
        position = -1;         // Position of search value
    bool found = false;        // Flag

    while (!found && first <= last)
    {
        middle = (first + last) / 2;     // Calculate mid point
        if (array[middle] == value)      // If value is found at mid
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)  // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1;           // If value is in upper half
    }
    return position;
}

//*****************************************************************
// The bubbleSort function sorts an int array in ascending order. *
//*****************************************************************
void bubbleSort(int array[], int size)
{
    int maxElement;
    int index;

    for (maxElement = size - 1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            if (array[index] > array[index + 1])
            {
                swap(array[index], array[index + 1]);
            }
        }
    }
}

//********************************************************************
// The selectionSort function sorts an int array in ascending order. *
//********************************************************************
void selectionSort(int array[], int size)
{
    int minIndex, minValue;

    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = array[start];
        for (int index = start + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        swap(array[minIndex], array[start]);
    }
}

//***************************************************
// The swap function swaps a and b in memory.       *
//***************************************************
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

//***************************************************
// The displayArray function displays all element   *
//***************************************************
void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
