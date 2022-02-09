/******************************************************************************
# Author:           Erin Egloff
# Assignment:       Assignment 3
# Date:             01/30/2022
# Description:      This program calculates the amount of servings and calories 
                    based on the number of Oreos. The user will input the amount 
                    of Oreos they have consumed and the program will tell them how 
                    many calories and servings are in the cookies that were eaten.
# Input:            Number of Oreos
# Output:           "You have consumed " total_calories (number_cookies) " calories 
                    and approximately " total_servings (number_cookies) " servings."
# Sources:          zyLab 3
#******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/* constants */
const int calories = 53;
const int servings = 3;

/* function declarations */
int total_calories (int number_cookies);
double total_servings (int number_cookies);

int main () {
    /*declare variables*/
    int number_cookies = 0.0;

    /* set decimals */
    cout << fixed << setprecision(1);

    /* print welcome message */
    cout << "Welcome to the Oreo Calculator!"<< endl;
    
    /* user input and store number_cookies */
    cout << "Enter the number of Oreos eaten: ";
    cin >> number_cookies;
    
    /* output statement and call function */
    cout << number_cookies << " Oreos equals " << total_servings (number_cookies) << " servings!" << endl;
    cout << "You consumed " << total_calories (number_cookies) << " calories." << endl;

    /* output message */
    cout << "Keep eating Oreos!" << endl;

return 0;
}

/* define function contents */
int total_calories (int number_cookies) {
    return number_cookies * calories ;
}

double total_servings (int number_cookies) {
    return number_cookies / static_cast<double>(servings) ;
}
