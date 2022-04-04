// Personal Web Page.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

Name of this C++ program [Personal Web Page]

Programmer: Jaime Ramirez

Course: CSC119-142 Introduction to Programming Spring 2021

Submission Date: 4/18/2021

Brief Description of this program.This program askes the user to enter there full name and a discription about the user once this is completed go to the root folder and open webpage
once open in browser the user will be greeted with there full name and there discription
*/


// Importing input/output library
#include <iostream>
#include <fstream>
#include <string>

//Namespace
using namespace std;

//My Main
int main() 
{
	
	ofstream outfile_webpage;
	string name, description;

	//Creates webpage
	outfile_webpage.open("Webpage.html");

	//askes user there infomation
	cout << "Enter your full name: ";
	getline(cin, name);

	cout << "Describe yourself: ";
	getline(cin, description);

	//Simple webpage
	outfile_webpage << "<html>" << endl;
	outfile_webpage << "<head>" << endl;
	outfile_webpage << "</head>" << endl;
	outfile_webpage << "<body>" << endl;
	outfile_webpage << "\t<center>" << endl;
	outfile_webpage << "\t\t<h1>" << name << "</h1>" << endl;
	outfile_webpage << "\t</center>" << endl;
	outfile_webpage << "\t<hr />" << endl;
	outfile_webpage << "\t" << description << endl;
	outfile_webpage << "\t<hr />" << endl;
	outfile_webpage << "</body>" << endl;
	outfile_webpage << "</html>" << endl;

	outfile_webpage.close();// close file

	return 0;
}