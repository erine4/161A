/******************************************************************************
# Author:           Erin Egloff
# Assignment:       Assignment #6
# Date:             February 24, 2022
# Description:      This program estimates the number of gumballs in a jar. 
#                   If there are multiple entries, it will also print the number of entries,
#                   average number of gumballs, largest gumball, and the largest jar size
#                   for the largest gumball.
# Input:            radiusGumball, volumeJar, userChar
# Output:           estGumballs, averageGumballs, largestGumball, largestJar, numEntries
# Sources:          None
#******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
#define _USE_MATH_DEFINES

//Declare constants
const double PI = M_PI;
const double LOAD_FACTOR = 0.64;

using namespace std;

int main()  {
    //Declare variables
    double radiusGumball = 0;
    double volumeJar = 0;
    double volumeGumball = 0;
    int numGumballs = 0;
    int numEntries = 0;
    double averageGumballs = 0;
    double largestGumball = 0;
    int largestJar = 0;
    char userChar;
    int totalGumballs = 0;
    int maxGumballs = 0;

    //Welcome message
    cout << "Welcome to my Gumball Guesser Program!" << endl << endl;

    largestGumball = volumeGumball;
    maxGumballs = numGumballs;
    largestJar = volumeJar;

    do {
        //Get user input
        cout << "Enter the radius of a gumball (cm) and the volume of a "
            << "jar (mL) separated by a space: ";
        cin >> radiusGumball >> volumeJar;
        
        //Check for bad input
        while (true)    {
            if ((radiusGumball <= 0 || volumeJar <= 0) || (cin.fail()))  {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Bad input! Please enter an integer greater than 0: ";
                cin >> radiusGumball >> volumeJar;
            }

            else {
                break;
            }
        }

        //Calculations
        volumeGumball = ((4.0 / 3) * PI * (radiusGumball * radiusGumball * radiusGumball));
        numGumballs = (volumeJar * LOAD_FACTOR) / volumeGumball;

        //Output estimate of gumballs in jar
        cout << "Estimate of gumballs in the jar: " << numGumballs << endl;

        //Counter for entries
        ++numEntries;

        //Total gumballs entered
        totalGumballs += numGumballs;
        
        //Largest gumball
        if (volumeGumball > largestGumball)   {
            largestGumball = volumeGumball;
        }
        
        //Greatest amount of gumballs
        if (numGumballs > maxGumballs) {
            maxGumballs = numGumballs;
            largestJar = volumeJar;
        }

        //More guesses?
        cout << endl << "Do you want to enter more (y/n): ";
        cin >> userChar;
        cout << endl;

       //Check for bad input
        while (true)    {
            if (userChar != 'y' && userChar != 'n')   {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input! Please enter y/n: ";
                cin >> userChar;
            }
            else {
                break;
            }
        }

    } while (userChar == 'y');
    
    //Average number of gumballs
    averageGumballs = static_cast<double>(totalGumballs) / static_cast<double>(numEntries);
    
    //Set precision
    cout << fixed << setprecision(2);

    //Display final output
    cout << endl;
    cout << "Number of entries: " << numEntries << endl;
    cout << "Average number of gumballs: " << averageGumballs << endl;
    cout << "Largest gumball: " << largestGumball << " cm^3" << endl;
    cout << "Jar size for largest gumball estimate: " << largestJar << " mL" << endl;

    //Ending message
    cout << endl << "Thank you for using my program!" << endl;

    return 0;
}


