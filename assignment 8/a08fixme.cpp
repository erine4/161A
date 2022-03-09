/******************************************************************************
# Author:           Erin Egloff
# Assignment:       Assignment #8
# Date:             March 7, 2022
# Description:      This program will output menu options for the 
#                   user to choose from. Once an option has been selected, the 
#                   option and price will be shown and continually added to the 
#                   total cost. After the user has made all final selections, the 
#                   total price will be shown, as well as some tip options to 
#                   choose from. Once the tip has been inputted, the 
#                   total amount will be shown. 
# Input:            
# Output:           
# Sources:          Assignment 8 Google Doc
#******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

//Declare constants
const double costDonut = 4.00;
const double costMuffin = 4.50;
const double costPastry = 5.50;
const double costBagel = 3.75;
const double costToast = 2.25;
const double costCoffee = 3.50;
const double costJuice = 2.50;

//Declare functions
void printWelcomeMessage();
void printEndMessage();
void printMenu();
int readOption();
int readOptionChar();
void printSubMenu();
// int subSelection();


int main()  {
    //declare variables
    int userOption;
    char userChar;

    //setprecision
    cout << fixed << setprecision(2);

    printWelcomeMessage();

    printMenu();
    cout << ">>";
    cin >> userOption;
    cout << endl;
    userOption = readOption();

    printSubMenu();
    cout << ">>";
    cin >> userChar;
    userChar = readOptionChar();
    
    // subSelection();
    // cout << ">>";
    
    

    printEndMessage();

    return 0;
}

void printWelcomeMessage () {
    cout << "Welcome to my Coffee Shop!" << endl << endl;
}

void printEndMessage () {
    cout << "Thank you for stopping by!" << endl;
}

void printMenu () {
    //Main Menu options
    cout << "Please pick an option below:" << endl;
    cout << "1. Donuts/Muffins/Pastries" << endl;
    cout << "2. Bagels/Toast" << endl;
    cout << "3. Coffee/Juice" << endl;
    cout << "4. Quit" << endl << endl; 
}

void printSubMenu ()  {
    int option;

    //Submenu options
    if (option == 1)    {
        cout << "Would you like" << endl;
        cout << "D: Donuts $" << costDonut << endl;
        cout << "M: Muffins $" << costMuffin << endl;
        cout << "P: Pastries $" << costPastry << endl << endl;
    }

    else if (option == 2)   {
        cout << "Would you like" << endl;
        cout << "B: Bagels $" << costBagel << endl;
        cout << "T: Toast $" << costToast << endl << endl;
    }
     
    else if (option == 3)   {
        cout << "Would you like" << endl;
        cout << "C: Coffee $" << costCoffee << endl;
        cout << "J: Juice $" << costJuice << endl << endl;
    }

}

int readOption ()  {
    int input;
    
    //input checker
    while ((input < 1) && (input > 4))  {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Invalid option. Please choose 1-4: ";
        cin >> input;
        cout << endl;
    }
}

int readOptionChar ()   {
    char choice;

    //input checker for char
    while ((choice != 'D') && (choice != 'd') && (choice != 'M') 
        && (choice != 'm') && (choice != 'P') && (choice != 'p') 
        && (choice != 'B') && (choice != 'b') && (choice != 'T')
        && (choice != 't') && (choice != 'C') && (choice != 'c')
        && (choice != 'J') && (choice != 'j')) {
        cin.clear();
        cout << "Invalid option! Would you like Donuts (D, M, or P): ";
        cin >> choice;
        cout << endl;
    }
}

// int subSelection ()    {
//     char choice;
//     cin >> choice;

//     double total = 0.00;

//     //choice added
//     if ((choice == 'D') || (choice == 'd')) {   
//         cout << "Donuts added.";
//         total += costDonut;
//     }
//     else if ((choice == 'M') || (choice == 'm'))    {
//         cout << "Muffins added.";
//         total += costMuffin;
//     }
//     else if ((choice == 'P') || (choice == 'p'))    {
//         cout << "Pastries added.";
//         total += costPastry;
//     }
//     else if ((choice == 'B') || (choice == 'b'))    {
//         cout << "Bagels added.";
//         total += costBagel;
//     }
//     else if ((choice == 'T') || (choice == 't'))    {
//         cout << "Toast added. $";
//         total += costToast;
//     }
//     else if ((choice == 'C') || (choice == 'c'))    {
//         cout << "Coffee added. $";
//         total += costCoffee;
//     }
//     else if ((choice == 'J') || (choice == 'j'))    {
//         cout << "Juice added. $";
//         total += costJuice;
//     }
    
//     return total;
// }

