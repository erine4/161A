/******************************************************************************
# Author:           Erin Egloff
# Assignment:       Midterm 1
# Date:             02/16/2022
# Description:      THis program will calculate the total cost of airfare based on age of the passenger, 
number of carry-on bags, and number of checked bags
# Output:           Total airfare
# Sources:          Midterm 1
******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

//declare constants
    const int normalBaseCost = 300;
    const int olderBaseCost = 290;
    const int youngerBaseCost = 0;
    const int carryOn = 10;
    const int secondBag = 25;
    const int moreBags = 50;

int main() {
    //declare variables
    string userName = "";
    int passengerAge = 0;
    int numCarryBags = 0;
    int numCheckBags = 0;
    
    int totalFare = 0;

    //welcome message
    cout << "Welcome to the Complex Airfare Calculator!" << endl;

    //user input
    cout << "Please enter your name: ";
        getline (cin, userName);
    cout << "Hello, " << userName << "!" << endl;

    cout << "Please enter the age of the passenger: ";
        cin >> passengerAge;

        if ((passengerAge > 100) || (passengerAge < 0)) {
        cout << "Error! Bad input. Please rerun program!" << endl;
        return 0;
    }   
    
    cout << "How many carry-on bags do you have (0 or 1) ? ";
        cin >> numCarryBags;
    
    if ((numCarryBags < 0) || (numCarryBags > 1)) {
        cout << "You have too many carry-on bags! You cannot fly!" << endl;
        return 0;
    }

    cout << "How many checked bags do you have (0-5) ? ";
        cin >> numCheckBags;

    if ((numCheckBags < 0) || (numCheckBags > 5))   {
        cout << "You have too many checked bags! You cannot fly!" << endl;
        return 0;
    }

    //if statements for age, number of carry-ons, and number checked bags
    if ((passengerAge > 2) && (passengerAge < 60))  {
        if (numCarryBags == 0)   {
            switch(numCheckBags)    {
                case 0:
                case 1:
                    totalFare = normalBaseCost + numCarryBags;
                    cout << "Your airfare is $" << totalFare << endl;
                break;

                case 2:
                    totalFare = normalBaseCost + numCarryBags + secondBag;
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 3:
                    totalFare = normalBaseCost + numCarryBags + secondBag + moreBags;
                    cout << "Your airfare is $" << totalFare << endl;
                    break;
                case 4:
                    totalFare = normalBaseCost + numCarryBags + secondBag + (moreBags * 2);
                    cout << "Your airfare is $" << totalFare << endl;
                    break;
                case 5:
                    totalFare = normalBaseCost + numCarryBags + secondBag + (moreBags * 3);
                    cout << "Your airfare is $" << totalFare << endl;
                    break;
            }
        }
    
        else if (numCarryBags > 0)   {
            switch(numCheckBags)    {
                case 0:
                case 1:
                    totalFare = normalBaseCost + carryOn;
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 2:
                    totalFare = normalBaseCost + carryOn + secondBag;
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 3:
                    totalFare = normalBaseCost + carryOn + secondBag + moreBags;
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 4:
                    totalFare = normalBaseCost + carryOn + secondBag + (moreBags * 2);
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 5:
                    totalFare = normalBaseCost + carryOn + secondBag + (moreBags * 3);
                    cout << "Your airfare is $" << totalFare << endl;
                    break;
            }   
        }
        
    }
    
    else if (passengerAge <= 2) {
        if (numCarryBags == 0)   {
            switch(numCheckBags)    {
                case 0:
                case 1:
                    totalFare = youngerBaseCost + numCarryBags;
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 2:
                    totalFare = youngerBaseCost + numCarryBags+ secondBag;
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 3:
                    totalFare = youngerBaseCost + numCarryBags + secondBag + moreBags;
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 4:
                    totalFare = youngerBaseCost + numCarryBags + secondBag + (moreBags * 2);
                    cout << "Your airfare is $" << totalFare << endl;
                    break;
                
                case 5:
                    totalFare = youngerBaseCost + numCarryBags + secondBag + (moreBags * 3);
                    cout << "Your airfare is $" << totalFare << endl;
                    break;
            }      
        }
        
        else if (numCarryBags > 0)   {
            switch(numCheckBags)    {
                case 0:
                case 1:
                    totalFare = youngerBaseCost + carryOn;
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 2:
                    totalFare = youngerBaseCost + carryOn + secondBag;
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 3:
                    totalFare = youngerBaseCost + carryOn + secondBag + moreBags;
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 4:
                    totalFare = youngerBaseCost + carryOn + secondBag + (moreBags * 2);
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 5:
                    totalFare = youngerBaseCost + carryOn + secondBag + (moreBags * 3);
                    cout << "Your airfare is $" << totalFare << endl;
                    break;
            }   
        }

    }

    else if (passengerAge >= 60)    {
        if (numCarryBags == 0)   {
            switch(numCheckBags)    {
                case 0:
                case 1:
                    totalFare = olderBaseCost + numCarryBags;
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 2:
                    totalFare = olderBaseCost + numCarryBags + secondBag;
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 3:
                    totalFare = olderBaseCost + numCarryBags + secondBag + moreBags;
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 4:
                    totalFare = olderBaseCost + numCarryBags + secondBag + (moreBags * 2);
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 5:
                    totalFare = olderBaseCost + numCarryBags + secondBag + (moreBags * 3);
                    cout << "Your airfare is $" << totalFare << endl;
                    break;
            }
        }
    
        else if (numCarryBags > 0)   {
            switch(numCheckBags)    {
                case 0:
                case 1:
                    totalFare = olderBaseCost + carryOn;
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 2:
                    totalFare = olderBaseCost + carryOn + secondBag;
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 3:
                    totalFare = olderBaseCost + carryOn + secondBag + moreBags;
                    cout << "Your airfare is $" << totalFare << endl;
                    break;
                
                case 4:
                    totalFare = olderBaseCost + carryOn + secondBag + (moreBags * 2);
                    cout << "Your airfare is $" << totalFare << endl;
                    break;

                case 5:
                    totalFare = olderBaseCost + carryOn + secondBag + (moreBags * 3);
                    cout << "Your airfare is $" << totalFare << endl;
                    break;
            }   
        }
    }

    //output message
    cout << endl << "Thank you for flying ComplexAir!" << endl;

    return 0;
}