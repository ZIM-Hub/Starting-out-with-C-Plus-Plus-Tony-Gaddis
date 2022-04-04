#include <iostream>

using namespace std;

// Function
int displayMenu();

int main()
{
   // Declare a variable to hold the
   // user's menu selection
   int menuSelection;
   
   do
   {
      // Display the menu
      menuSelection = displayMenu();
      
      // Perform the selected operation
      switch(menuSelection)
      {
         case 1:
            cout << "Good morning." << endl;
            break;
         case 2:
            cout << "Buongiorno." << endl;
            break;
         case 3:
            cout << "Buenos dias." << endl;
            break;
         case 4:
            cout << "Guten morgen." << endl;
            break;
         case 5:
            cout << "Goodbye!" << endl;
            break;
      }            
   } while (menuSelection != 5);
}

int displayMenu()
{
   int answer;
   cout << endl;
   cout << "Menu Selection" << endl;
   cout << "1. English" << endl;
   cout << "2. Italian" << endl;
   cout << "3. Spanish" << endl;
   cout << "4. German" << endl;
   cout << "5. End the Program" << endl;
   cout << "Enter your selection [1 - 5]: ";
   
   // Get user's selection
   cin >> answer;
   
   // Validate the selection
   while (answer < 1 || answer > 5)
   {
      cout << "Invalid selection, please select [1 - 5]: ";
      cin >> answer;
   }
   return answer;
}                                                    