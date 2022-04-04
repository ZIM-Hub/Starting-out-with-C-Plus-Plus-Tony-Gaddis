// Property Tax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Property Tax Q15.cpp]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 2/11/2021

Brief Description of this program. [Property Tax and value]

*/
#include <iostream>
#include <iomanip>
using namespace std;
// Constant Variables

double  ASSESSMENT_PER = 0.60;
double  PROPERTY_TAX_PER = 0.75;




void propertyTaxes(double value_of_property);

int main()
{
    // Variables
    double value_of_property;

    // Ask user for actual value of property
    cout << endl;
    cout << "What is that actual value of a property?";
    cin >> value_of_property;

    propertyTaxes(value_of_property);

}


void propertyTaxes(double value_of_property)
{
    // Variables
    double total_assessment_value, total_property_tax;

    total_assessment_value = value_of_property * ASSESSMENT_PER;
    total_property_tax = (total_assessment_value) * PROPERTY_TAX_PER;

    // Display value and property tax.
    cout << setprecision(2) << fixed << right << endl;
    cout << "Property Value:    $";

    cout << setw(12) << value_of_property << endl;
    cout << "Assessment value:  $";

    cout << setw(12) << total_assessment_value << endl;
    cout << "Property Tax:      $";

    cout << setw(12) << total_property_tax << endl;

    cout << endl;

}
