// Rectangle Area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Markup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Lowest Score Drop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Rectangle Area]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 3/14/2021

Brief Description of this program. This program asked the user to enter  the length and width of a triengle and it will display
the length, width, area
*/

// Importing input/output library
#include <iostream>
#include <string>

//Namespace
using namespace std;

// Declaring functions
double inputValidate(double num);
double getLength(double num);
double getWidth(double num);
double getArea(double length, double width);
void displayData(double length, double width, double area);

//My Main
int main()
{
    double length,
        width,
        area;

    length = getLength(NULL);
    width = getWidth(NULL);
    area = getArea(length, width);


    displayData(length, width, area);

    return 0;
}

//Declaring all My Functions
double getLength(double num)
{
    cout << "Enter rectangle's length: ";
    num = inputValidate(num);
    return num;
}
double getWidth(double num)
{
    cout << "Enter rectangle's width: ";
    num = inputValidate(num);
    return num;
}
double getArea(double length, double width)
{
    return length * width;
}
void displayData(double length, double width, double area)
{
    cout << "Length = " << length << endl;
    cout << "Width  = " << width << endl;
    cout << "Area   = " << area << endl;
}
double inputValidate(double num)
{
    while (!(cin >> num))
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(1200, 'n');
    }
    return num;
}
