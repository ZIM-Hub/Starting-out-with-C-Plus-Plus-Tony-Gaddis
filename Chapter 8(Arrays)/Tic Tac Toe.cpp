// Tic Tac Toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Tic Tac Toe]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 4/8/2021

Brief Description of this program. This Program is a Tic Tac Toe game enjoy!
*/

// Importing input/output library
#include <iostream>
#include <iomanip>
#include <string>

//Namespace
using namespace std;

//Declaring functions
void showboard();
const int ROW = 3;
const  int COL = 3;
char Gboard[ROW][COL] = { { '*','*','*' },{ '*','*','*' },{ '*','*','*' } };

//My Main
int main()
{
	//Variabls
	string Player1;
	string Player2;
	int ROW = 3;
	int COL = 3;
	char Turn = 'X';
	int num = 0;

	//Player 1 enters name and displays that player 1 is X
	//Displays that player 1 has the first turn
	cout << "Let's play Tic-Tac-Toe!\nPlayer 1 enter your name: ";
	cin >> Player1;
	cout << endl;
	cout << Player1 << ", you are X's! You will also have the first turn.";
	cout << endl;
	cout << endl;

	//Player 2 enters name and displays that player 2 is O
	cout << "Player 2, enter your name: ";
	cin >> Player2;
	cout << endl;
	cout << Player2 << ", you are O's!";
	cout << endl << endl;

	//Calling showboard function
	showboard();

	do
	{
		//Displayes to the how to enter
		//Players chose row and column
		//if turn to X or O
		//else turn to X
		cout << "To choose a position enter in the row number \n[SPACE] then the column number: ";
		cin >> ROW;
		cin >> COL;
		if (Gboard[ROW][COL] == '*')
		{
			Gboard[ROW][COL] = Turn;
			if (Turn == 'X')
				Turn = 'O';
			else
				Turn = 'X';
		}
		cout << endl;
		//Calling showboard function
		showboard();

	} while (true);

	//Calling showboard function
	showboard();

	//End of the game
	return 0;
}

//showboard function
//Shows number of rows and columns
void showboard()
{
	cout << "     0   1   2";
	cout << endl << endl;
	cout << " 0  " << Gboard[0][0] << " | " << Gboard[0][1] << " | " << Gboard[0][2] << endl;
	cout << "   ___|___|___\n";
	cout << " 1  " << Gboard[1][0] << " | " << Gboard[1][1] << " | " << Gboard[1][2] << endl;
	cout << "   ___|___|___\n";
	cout << " 2  " << Gboard[2][0] << " | " << Gboard[2][1] << " | " << Gboard[2][2] << endl;
	cout << "      |" << "   |" << endl;
}

