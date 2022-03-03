/******************************************************************************
# Author:           Erin Egloff
# Assignment:       Assignment #7
# Date:             March 2, 2022
# Description:      This program This program will output menu options for the 
#                   user to choose from. Once an option has been selected, the 
#                   option and price will be shown and continually added to the 
#                   total cost. After the user has made all final selections, the 
#                   total price will be shown, as well as some tip option to 
#                   choose from. Once the tip option has been selected, the 
#                   total amount will be shown. 
# Input:            int userInput, 
# Output:           
# Sources:          None
#******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

//Declare constants
const int option1 = 1;
const int option2 = 2;
const int option3 = 3;
const int option4 = 4;
const double costDonut = 4.00;
const double costMuffin = 4.50;
const double costPastry = 5.50;
const double costBagel = 3.75;
const double costToast = 2.25;
const double costCoffee = 3.50;
const double costTea = 2.50;
const double tenTip = .10;
const double fifteenTip = .15;
const double twentyTip = .20;

int main()  {
    //Declare variables
    int userOption;
    char userChar;
    double totalAmount;
    double tip;
    double totalCost;
    
    //Set 2 decimals for $
    cout << fixed << setprecision(2);

    //Welcome message
    cout << "Welcome to my Coffee Shop!" << endl << endl;

    do {
        //Menu options
        cout << "Please pick an option below:" << endl;
        cout << "1. Donuts/Muffins/Pastries" << endl;
        cout << "2. Bagels/Toast" << endl;
        cout << "3. Coffee/Tea" << endl;
        cout << "4. Quit" << endl << endl;
    
        //User input
        cout << ">> ";
        cin >> userOption;
        cout << endl;

        //Option 1 
        while (userOption == 1) {
            cout << "Would you like" << endl;
            cout << "D: Donuts $" << costDonut << endl;
            cout << "M: Muffins $" << costMuffin << endl;
            cout << "P: Pastries $" << costPastry << endl << endl;
            cout << ">> ";
            cin >> userChar;
            cout << endl;
                    
            while ((userChar != 'D') && (userChar != 'd') && (userChar != 'M') 
                && (userChar != 'm') && (userChar != 'P') && (userChar != 'p'))  {
                cout << "Invalid option! Would you like Donuts (D, M, or P: ";
                cin >> userChar;
                cout << endl;
            }

            while ((userChar == 'D') || (userChar == 'd') || (userChar == 'M') 
                || (userChar == 'm') || (userChar == 'P') || (userChar == 'p'))    {

                if ((userChar == 'D') || (userChar == 'd'))  {
                    cout << "Donuts added." << endl;
                    totalAmount += costDonut;
                    cout << "$" << totalAmount << endl << endl;
                    break;
                }
                    
                else if ((userChar == 'M') || (userChar == 'm')) {
                    cout << "Muffins added." << endl;
                    totalAmount += costMuffin;
                    cout << "Total: $" << totalAmount << endl << endl;
                    break;
                }
                    
                else if ((userChar == 'P') || (userChar == 'p')) {
                    cout << "Pastries added." << endl;
                    totalAmount += costPastry;
                    cout << "Total: $" << totalAmount << endl << endl;
                    break;
                }

            }
            
            break;
        }

        //Option 2
        while (userOption == 2) {
            cout << endl << "Would you like" << endl;
            cout << "B: Bagels $" << costBagel << endl;
            cout << "T: Toast $" << costToast << endl << endl;
            cout << ">> ";
            cin >> userChar;
            cout << endl;

            while ((userChar != 'B') && (userChar != 'b') && (userChar != 'T') && (userChar != 't'))    {
                cout << "Invalid option! Would you like Bagels (B) or Toast (T): ";
                cin >> userChar;
                cout << endl;
            }
            
            while ((userChar == 'B') || (userChar == 'b') || (userChar == 'T') || (userChar == 't'))    {
                
                if ((userChar == 'B') || (userChar == 'b')) {
                    cout << "Bagels added." << endl;
                    totalAmount += costBagel;
                    cout << "Total: $" << totalAmount << endl << endl;
                    break;
                }

                else if ((userChar == 'T') || (userChar == 't'))    {
                    cout << "Toast added." << endl;
                    totalAmount += costToast;
                    cout << "Total: $" << totalAmount << endl << endl;
                    break;
                }
            }

            break;
        }

        //Option 3
        while (userOption == 3) {
            cout << endl << "Would you like" << endl;
            cout << "C: Coffee $" << costCoffee << endl;
            cout << "T: Tea $" << costTea << endl << endl;
            cout << ">> ";
            cin >> userChar;
            cout << endl;
            
            while ((userChar != 'C') && (userChar != 'c') && (userChar != 'T') 
                && (userChar != 't'))    {
                cout << "Invalid option! Would you like Coffee (C) or Tea (T): ";
                cin >> userChar;
                cout << endl;
            }
            
            while ((userChar == 'C') || (userChar == 'c') || (userChar == 'T') || (userChar == 't'))    {

                if ((userChar == 'C') || (userChar == 'c')) {
                    cout << "Coffee added." << endl;
                    totalAmount += costCoffee;
                    cout << "Total: $" << totalAmount << endl << endl;
                    break;
                }

                else if ((userChar == 'T') || (userChar == 't'))    {
                    cout << "Tea added." << endl;
                    totalAmount += costTea;
                    cout << "Total: $" << totalAmount << endl << endl;
                    break;
                }
            }

            break;
        }
        
        //If input is NAN
        while (!cin)    {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Bad input, please enter 1-4: ";
            cin >> userOption;
            cout << endl;
        }

        //Bad userOption input
        while ((userOption > 4) && (userOption < 1))   {
            cout << "Invalid option! Please choose 1-4: ";
            cin >> userOption;
            cout << endl;
        }
       
    } while (userOption != 4);

    //For > $0 total
    if (totalAmount > 0.01)    {
        cout << endl << "Would you like to add a tip? Suggested amounts:" << endl << endl;
        cout << "10% = $" << (totalAmount * tenTip) << endl;
        cout << "15% = $" << (totalAmount * fifteenTip) << endl;
        cout << "20% = $" << (totalAmount * twentyTip) << endl << endl;

        cout << "Enter tip amount: ";
        cin >> tip;
        cout << endl;

        while (tip < 0) {
            cout << "Please enter a tip amount great than $0.00: ";
            cin >> tip;
        }

        cout << "Please pay $" << (totalAmount + tip) << endl << endl;
    } 

    //If immediate quit to program
    else {
        cout << "No order placed." << endl << endl;
    }

    //End message
    cout << "Thank you for stopping by!" << endl;
    
    return 0;
}


//fix all FIXME's
//change incorrect input to match google docs example
//fix input checkers for each option, make sure total is added
