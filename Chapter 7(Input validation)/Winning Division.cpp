// Winning Division.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

//Namespace
using namespace std;

//Constent strings
const string NE = "North East",
NW = "North West",
SE = "South East",
SW = "South West";

// Declaring functions
double inputValidate(double num);
double getSales(string division);
void findHighest(double NE_sales,double NW_sales,double SE_sales,double SW_sales);
void checkIfHighest(double sales1, double sales2, double sales3, double sales4, string division);

//My Main
int main()
{
    double NE_sales,
        NW_sales,
        SE_sales,
        SW_sales;

    NE_sales = getSales(NE);
    NW_sales = getSales(NW);
    SE_sales = getSales(SE);
    SW_sales = getSales(SW);

    findHighest(NE_sales, NW_sales, SE_sales, SW_sales);

    return 0;
}

//Function 1 sees if its a number
double inputValidate(double num)
{
    while (!(cin >> num) || num < 0)
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;
}
//Function 2 uses function 1 and asks user to enter amout
double getSales(string division)
{
    double sales;

    cout << "What is the quarterly sales figure\n"
        << "for " << division << "? $";
    sales = inputValidate(NULL);
    cout << endl;
    return sales;
}

//Function 3 adds amount on all 4 and sends it to function 4
void findHighest(double NE_sales, double NW_sales, double SE_sales, double SW_sales)
{
    cout << "The highest grossing division is\n";

    checkIfHighest(NE_sales, NW_sales, SE_sales, SW_sales, NE);
    checkIfHighest(NW_sales, NE_sales, SE_sales, SW_sales, NW);
    checkIfHighest(SE_sales, NE_sales, NW_sales, SW_sales, SE);
    checkIfHighest(SW_sales, NE_sales, NW_sales, SE_sales, SW);

    cout << endl << endl;
}

//Function 4 uses info from function 3 and sees whitch is higher division and displays it and the amount
void checkIfHighest(double sales1,double sales2,double sales3,double sales4,string division) 
{
    if (sales1 > sales2)
    {
        if (sales1 > sales3)
        {
            if (sales1 > sales4)
            {
                cout << division << " with a sales figure at: "
                    << "$" << sales1;
            }
        }
    }
}
