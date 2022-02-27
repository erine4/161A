/******************************************************************************
# Author:           Erin Egloff
# Assignment:       Assignment #6
# Date:             February 24, 2022
# Description:      This program estimates the number of gumballs in a jar. 
#                   If there are multiple entries, it will also print the number of entries,
#                   average number of gumballs, largest gumball, and the jar size for the largest
#                   gumball. 
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
    double radiusGumball_cubed = 0;
    double volumeGumball = 0;
    double volumeJar = 0;
    int estGumballs = 0;
    int numEntries = 0;
    double averageGumballs = 0;
    double largestGumball = 0;
    double largestJar = 0;
    char userChar;
    int totalGumballs = 0;
    int maxGumballs = 0;

    //Welcome message
    cout << "Welcome to my Gumball Guesser Program!" << endl << endl;

    largestGumball = volumeGumball;
    largestJar = volumeJar;

    do {
        //Get user input
        cout << "Enter the radius of a gumball (cm) and the volume of a "
            << "jar (mL) separated by a space: ";
        cin >> radiusGumball >> volumeJar;
        
        //Calculations
        radiusGumball_cubed = (radiusGumball * radiusGumball * radiusGumball);
        volumeGumball = ((4.0 / 3) * PI * radiusGumball_cubed);
        estGumballs = (volumeJar * LOAD_FACTOR) / volumeGumball;

        //Output estimate of gumballs in jar
        cout << "Estimate of gumballs in the jar: " << estGumballs << endl;

        //Counter for entries
        ++numEntries;

        //Total gumballs entered
        totalGumballs += estGumballs;
        
        //Largest gumball
        while (volumeGumball > largestGumball)   {
            largestGumball = volumeGumball;
        }
        
        //Largest jar
        while ((volumeGumball < largestGumball) && (volumeJar > largestJar)) {
            largestJar = volumeJar;
        }

        //More guesses?
        cout << endl << "Do you want to enter more (y/n): ";
        cin >> userChar;
        cout << endl;

        //If not y or n, invalid input
        if ((userChar != 'y') && (userChar != 'n'))   {
            cout << "Invalid input! Please enter y/n: ";
            cin >> userChar;
        }

    } while (userChar == 'y');
    
    //Average number of gumballs
    averageGumballs = static_cast<double>(totalGumballs) / static_cast<double>(numEntries);
    
    //Set precision
    cout << fixed << setprecision(2);

    // //Display final output
    cout << endl;
    cout << "Number of entries: " << numEntries << endl;
    cout << "Average number of gumballs: " << averageGumballs << endl;
    cout << "Largest gumball: " << largestGumball << " cm^3" << endl;
    cout << "Jar size for largest gumball estimate: " << largestJar << " mL" << endl;

    //Ending message
    cout << endl << "Thank you for using my program!" << endl;

    return 0;
}


