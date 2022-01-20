/******************************************************************************
# Author:           Erin Egloff
# Assignment:       Assignment #2
# Date:             January 19, 2022
# Description:      This progam estimates the number of gumballs in a jar.
# Input:            Radius of gumball, Volume of jar
# Output:           Number of gumballs
# Sources:          None
#******************************************************************************/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

const double PI = M_PI;
const double LOAD_FACTOR = 0.64; // Variable to state the capacity of jar

int main () {
    double radius_gumball = 0;
    double radius_gumball_cubed = 0;
    double volume_gumball = 0;
    double volume_jar = 0;
    int total_gumballs = 0;

    cout << fixed << setprecision(2) << PI;


    cout << "Welcome to my program that estimates the number of gumballs in the jar!" << endl;

    cout << "Enter the radius of one gumball (cm) and "; 
    cout << "the volume of the jar (mL) separated by a space: " << endl;
    cin >> radius_gumball >> volume_jar;

    radius_gumball_cubed = (radius_gumball * radius_gumball * radius_gumball);
    volume_gumball = ((4.0 / 3) * PI * radius_gumball_cubed);

    volume_jar *= LOAD_FACTOR;

    total_gumballs = volume_jar / volume_gumball;

    cout << "There are approximately " << total_gumballs << " gumballs in the jar." << endl;
    cout << "Thank you for using this program!" << endl;
    
    return 0;
}