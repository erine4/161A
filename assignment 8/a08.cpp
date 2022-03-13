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
# Input:            int userOption, char userChar, double tip
# Output:           costDonut, costBagel, costMuffin, costPastry, costToast, 
#                   costCoffee, costJuice, tip, total
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
int readOptionChar(int);
void printSubMenu(int);
void subSelection(char);
double costFunction(char);
double tipFunction(double);


int main()  {
    //declare variables
    int userOption = 0;
    char userChar;
    double total = 0.00;
    double tip = 0.00;
    
    cout << fixed << setprecision(2);

    //welcome message
    printWelcomeMessage();

    do  {
        //main menu
        printMenu();
        cout << ">>";

        //user input and check
        userOption = readOption();
        
        //exit loop if "quit" is selected
        if (userOption == 4) {
            break;
        }
    
        cout << endl;

        //print selected menu
        printSubMenu(userOption);
        cout << ">>";
        
        //print selected option from menu and check input
        userChar = readOptionChar(userOption);
        cout << endl;

        //print selection added
        subSelection(userChar);

        //print running total
        total += costFunction(userChar);
        cout << total << endl << endl;

        

    } while ((userOption == 1) || (userOption == 2) || (userOption == 3));
    
    if (total < 0.01)   {
        printEndMessage();
        return 0;
    }
    
    //print overall total
    cout << endl << "Your total: $" << total << endl << endl;

    //print tip options
    tipFunction(total);
    cout << ">>";
    
    //input tip
    cin >> tip;

    //check tip input
    while ((tip < 0) || (!tip)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter a tip amount greater than $0.00: ";
        cin >> tip;
    }

    //print overall total + tip
    cout << endl << "Please pay $" << (total + tip) << endl << endl;

    //print end message
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

void printSubMenu (int option)  {

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
    int input = 0;
    cin >> input; 

    //input checker FIXME
    while ((input < 1) || (input > 4))  {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid option. Please choose 1-4: ";
        cin >> input;
        cout << endl;
    }

    return input;
}

int readOptionChar (int option)   {
    char choice;
    cin >> choice;

    //input checker for char
    while (option == 1) {
        while ((choice != 'D') && (choice != 'd') && (choice != 'M') 
            && (choice != 'm') && (choice != 'P') && (choice != 'p'))   {
            cin.clear();
            cout << "Invalid option! Choose D, M, or P: ";
            cin >> choice;
            cout << endl;
        }
        break;
    }

    while (option == 2) {    
        while ((choice != 'B') && (choice != 'b') && (choice != 'T')
            && (choice != 't')) {
            cin.clear();
            cout << "Invalid option! Choose B or T: ";
            cin >> choice;
            cout << endl;
        }
        break;
    }

    while (option == 3) {
        while ((choice != 'C') && (choice != 'c') && 
            (choice != 'J') && (choice != 'j')) {
            cin.clear();
            cout << "Invalid option! Choose C or J: ";
            cin >> choice;
            cout << endl;
        }
        break;
    }
    
    return choice;
}

void subSelection (char choice)    {

    //choice added
    if ((choice == 'D') || (choice == 'd')) {   
        cout << "Donuts added. $";
        
    }
    else if ((choice == 'M') || (choice == 'm'))    {
        cout << "Muffins added. $";
    
    }
    else if ((choice == 'P') || (choice == 'p'))    {
        cout << "Pastries added. $";
   
    }
    else if ((choice == 'B') || (choice == 'b'))    {
        cout << "Bagels added. $";
     
    }
    else if ((choice == 'T') || (choice == 't'))    {
        cout << "Toast added. $";
    
    }
    else if ((choice == 'C') || (choice == 'c'))    {
        cout << "Coffee added. $";
    
    }
    else if ((choice == 'J') || (choice == 'j'))    {
        cout << "Juice added. $";
   
    }
}

double costFunction (char userChar) {
    double total = 0.00;

    if ((userChar == 'D') || (userChar == 'd')) {
        total = costDonut;
    }
    else if ((userChar == 'M') || (userChar == 'm')) {
        total = costMuffin;
    }
    else if ((userChar == 'P') || (userChar == 'p')) {
        total = costPastry;
    }
    else if ((userChar == 'B') || (userChar == 'b')) {
        total = costBagel;
    }
    else if ((userChar == 'T') || (userChar == 't')) {
        total = costToast;
    }
    else if ((userChar == 'C') || (userChar == 'c')) {
        total = costCoffee;
    }
    else if ((userChar == 'J') || (userChar == 'j')) {
        total = costJuice;
    }

    return total;
}

double tipFunction (double total)    {

    if (total > 0.01)   {
        cout << endl << "Would you like to add a tip?" << endl;
        //10% tip
        cout << "10% = $" << (total * .10) << endl;
        //15% tip
        cout << "15% = $" << (total * .15) << endl;
        //20% tip
        cout << "20% = $" << (total * .20) << endl << endl;
    }

    return total;
}