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
    int i;
    int userOption;
    char userChar;
    double totalAmount;
    double totalCost;
    


    //Set precision to 2 decimals
    cout << fixed << setprecision(2);

    //Welcome message
    cout << "Welcome to my Coffee Shop!" << endl << endl;

    for (userOption = 0; userOption < 4; ++userOption)  {

        //Menu options
        cout << "Please pick an option below:" << endl;
        cout << "1. Donuts/Muffins/Pastries" << endl;
        cout << "2. Bagels/Toast" << endl;
        cout << "3. Coffee/Tea" << endl;
        cout << "4. Quit" << endl;
    
        //User input
        cout << ">> ";
        cin >> userOption;

        //Option 1    
        while (userOption == 1) {
            cout << "Would you like" << endl;
            cout << "D: Donuts $" << costDonut << endl;
            cout << "M: Muffins $" << costMuffin << endl;
            cout << "P: Pastries $" << costPastry << endl;
            cin >> userChar;
                    
            if ((userChar == 'D') || (userChar == 'd'))  {
                cout << "Donuts added." << endl;
                cout << "$" << costDonut << endl;
                totalAmount += costDonut;
            }
                    
            else if ((userChar == 'M') || (userChar == 'm')) {
                cout << "Muffins added." << endl;
                cout << "$" << costMuffin << endl;
                totalAmount += costMuffin;
            }
                    
            else if ((userChar == 'P') || (userChar == 'p')) {
                cout << "Pastries added." << endl;
                cout << "$" << costPastry << endl;
                totalAmount += costPastry;
                
            }

            else {
                cout << "Invalid input. Please enter D, M, or P: ";
                cin >> userChar;
            }
            
            break;
        }

        //Option 2
        while (userOption == 2) {
            cout << "Would you like" << endl;
            cout << "B: Bagels $" << costBagel << endl;
            cout << "T: Toast $" << costToast << endl;
            cin >> userChar;

            if ((userChar == 'B') || (userChar == 'b')) {
                cout << "Bagels added." << endl;
                cout << "$" << costBagel<< endl;
                totalAmount += costBagel;
            }

            else if ((userChar == 'T') || (userChar == 't'))    {
                cout << "Toast added." << endl;
                cout << "$" << costToast << endl;
                totalAmount += costToast;
            }
        
            else {
                cout << "Invalid input. Please enter B or T: ";
                cin >> userChar;
            }
            
            break;
        }

        //Option 3
        while (userOption == 3) {
            cout << "Would you like" << endl;
            cout << "C: Coffee $" << costCoffee << endl;
            cout << "T: Tea $" << costTea << endl;
            cin >> userChar;
            
            if ((userOption == 'C') || (userOption == 'c')) {
                cout << "Coffee added." << endl;
                cout << "$" << costCoffee << endl;
                totalAmount += costCoffee;
            }

            else if ((userOption == 'T') || (userOption == 't'))    {
                cout << "Tea added." << endl;
                cout << "$" << costTea << endl;
                totalAmount += costTea;
            }
            
            else {
                cout << "Invalid input. Please enter B or T: ";
                cin >> userChar;
            }

            break;
        }

    
    }

    //Bad userOption input
    if ((userOption > 4) && (userOption < 1))   {
        cout << "Invalid option! Choose 1-4: ";
        cin >> userOption;
        cout << endl;
    }

    cout << "$" << totalAmount << endl;
    
    return 0;
}

