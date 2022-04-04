// Test Average.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*

Name of this C++ program [Test Average Q3.cpp]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 2/11/2021

Brief Description of this program. [Test Average]

*/

// Importing input/output library
#include <iostream>
#include <iomanip>

// Standard namespace
using namespace std;

// Declaring function
void test_scores(double score_1, double score_2, double score_3, double score_4, double score_5);

//Mymain
int main()
{
    // Defining variables
    double score_1, score_2, score_3, score_4, score_5;

    // Ask user to enter 5 test scores
    cout << "Enter Score #1: ";
    cin >> score_1;
    cout << "Enter Score #2: ";
    cin >> score_2;
    cout << "Enter Score #3: ";
    cin >> score_3;
    cout << "Enter Score #4: ";
    cin >> score_4;
    cout << "Enter Score #5: ";
    cin >> score_5;

    test_scores(score_1, score_2, score_3, score_4, score_5);
}


void test_scores(double score_1, double score_2, double score_3, double score_4, double score_5)
{   
    //Veriables
    double average;

    //Data
    average = (score_1 + score_2 + score_3 + score_4 + score_5);

    //fixed point
    cout << setprecision(1) << fixed;
    //Displayes average score
    cout << "\nThe average test score is: " << average << endl;

}