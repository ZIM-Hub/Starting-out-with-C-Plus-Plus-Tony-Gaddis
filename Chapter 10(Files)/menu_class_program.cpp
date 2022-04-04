// menu_class_program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Function Prototypes
int displayMenu();
void displayGoodMorning(string msg);

int main()
{
    // Declare a variable to hold the selection
    int menuSelection;
    do
    {
        // Display the menu
        menuSelection = displayMenu();

        // Perform the selected operation
        switch (menuSelection)
        {
        case 1:
            displayGoodMorning("Good morning.");
            break;
        case 2:
            displayGoodMorning("Buongiorno.");
            break;
        case 3:
            displayGoodMorning("Buenos dias.");
            break;
        case 4:
            displayGoodMorning("Guten morgen.");
            break;
        case 5:
            displayGoodMorning("Ohayogozaimasu!");
            break;
        case 6:
            displayGoodMorning("Goodbye!");
            break;
        }
    } while (menuSelection != 6);
}

// Display menu for the menu-driven program
int displayMenu()
{
    int answer = 0;
    cout << endl;
    cout << "Menu Selection" << endl;
    cout << "1. English" << endl;
    cout << "2. Italian" << endl;
    cout << "3. Spanish" << endl;
    cout << "4. German" << endl;
    cout << "5. Japanese" << endl;
    cout << "6. End the Program" << endl;
    cout << "Enter your selection [1 - 5]: ";

    // Validate the selection
    while (!(cin >> answer) || !(answer >= 1 && answer <= 6))
    {
        //cout << '\a';   // alert sound, if you want
        cout << "Invalid selection, please select [1 - 5]: ";
        cin.clear();   // [Re]sets the error state to working state.
        cin.ignore(100, '\n'); // ignores 100 char or a new line
    }
    return answer;
}

void displayGoodMorning(string msg)
{
    cout << "'" << msg << "'" << endl;
}
