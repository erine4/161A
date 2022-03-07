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

void printWelcome () {
    cout << "Welcome to my Coffee Shop!" << endl << endl;
}


void printMenu () {
    //Menu options
    cout << "Please pick an option below:" << endl;
    cout << "1. Donuts/Muffins/Pastries" << endl;
    cout << "2. Bagels/Toast" << endl;
    cout << "3. Coffee/Juice" << endl;
    cout << "4. Quit" << endl << endl;
}

int readOption (int input)  {
    //input checker
    while ((input < 1) || (input > 4))  {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Invalid option. Please choose 1-4: ";
        cin >> input;
        cout << endl;
    }
}

//FIXME: how to add choice
void printSelection (char choice)  {

    if ((choice == 'D') || (choice == 'd')) {
        cout << "Donuts added." << endl;
    }
    else if ((choice == 'M') || (choice == 'm'))    {
        cout << "Muffins added." << endl;
    }
    else if ((choice == 'P') || (choice == 'p'))    {
        cout << "Pastries added." << endl;
    }
    else if ((choice == 'B') || (choice == 'b'))    {
        cout << "Bagels added." << endl;
    }
    else if ((choice == 'T') || (choice == 't'))    {
        cout << "Toast added." << endl;
    }
    else if ((choice == 'C') || (choice == 'c'))    {
        cout << "Coffee added." << endl;
    }
    else if ((choice == 'J') || (choice == 'j'))    {
        cout << "Juice added." << endl;
    }
}

void printSubMenu (int option)  {
    
    if (option == 1)    {
        cout << "Would you like" << endl;
        cout << "D: Donuts $" << costDonut << endl;
        cout << "M: Muffins $" << costMuffin << endl;
        cout << "P: Pastries $" << costPastry << endl << endl;
        cout << endl;
    }

    else if (option == 2)   {
        cout << "Would you like" << endl;
        cout << "B: Bagels $" << costBagel << endl;
        cout << "T: Toast $" << costToast << endl << endl;
        cout << endl;
    }
     
    else if (option == 3)   {
        cout << "Would you like" << endl;
        cout << "C: Coffee $" << costCoffee << endl;
        cout << "J: Juice $" << costJuice << endl << endl;
        cout << endl;
    }
}


int main()  {
    int userOption;
    char userChar;
    int total;

    printWelcome();
    
    cout << fixed << setprecision(2);
    
    while (userOption != 4) {
        printMenu();
        cin >> userOption;
        readOption(userOption);
        cout << endl;
    
        printSubMenu(userOption);
        cin >> userChar;
        cout << endl;
        printSelection(userChar);
    
        
    
    
    }
    





    return 0;
}