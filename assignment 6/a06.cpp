/******************************************************************************
# Author:           Erin Egloff
# Assignment:       Assignment #6
# Date:             February 24, 2022
# Description:      This progam estimates the number of gumballs in a jar.
# Input:            Radius of gumball, Volume of jar
# Output:           Number of gumballs
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
    double radius_gumball = 0;
    double radius_gumball_cubed = 0;
    double volume_gumball = 0;
    double volume_jar = 0;
    int est_gumballs = 0;
    int num_entries = 0;
    double average_gumballs = 0;
    double largest_gumball = 0;
    double largest_jar = 0;
    char userChar;
    int total_gumballs = 0;
    int max_gumballs = 0;

    //Welcome message
    cout << "Welcome to my Gumball Guesser Program!" << endl << endl;

    largest_gumball = volume_gumball;
    largest_jar = volume_jar;

    do {
        //Get user input
        cout << "Enter the radius of a gumball (cm) and the volume of a "
            << "jar (mL) separated by a space: ";
        cin >> radius_gumball >> volume_jar;
        
        //Calculations
        radius_gumball_cubed = (radius_gumball * radius_gumball * radius_gumball);
        volume_gumball = ((4.0 / 3) * PI * radius_gumball_cubed);
        est_gumballs = (volume_jar * LOAD_FACTOR) / volume_gumball;

        //Output estimate of gumballs in jar
        cout << "Estimate of gumballs in the jar: " << est_gumballs << endl;

        //Counter for entries
        ++num_entries;

        //Total gumballs entered
        total_gumballs += est_gumballs;
        
        //Largest gumball
        while (volume_gumball > largest_gumball)   {
            largest_gumball = volume_gumball;
        }
        
        //Largest jar
        while ((volume_gumball < largest_gumball) && (volume_jar > largest_jar)) {
            largest_jar = volume_jar;
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
    
    //average gumballs
    average_gumballs = static_cast<double>(total_gumballs) / static_cast<double>(num_entries);
    
    //Set precision
    cout << fixed << setprecision(2);

    // //Display final output
    cout << endl;
    cout << "Number of entries: " << num_entries << endl;
    cout << "Average number of gumballs: " << average_gumballs << endl;
    cout << "Largest gumball: " << largest_gumball << " cm^3" << endl;
    cout << "Jar size for largest gumball estimate: " << largest_jar << " mL" << endl;

    //Ending message
    cout << endl << "Thank you for using my program!" << endl;

    return 0;
}


