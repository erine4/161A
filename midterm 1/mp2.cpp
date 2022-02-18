/******************************************************************************
# Author:           Erin Egloff
# Assignment:       Midterm PRACTICE 2
# Date:             02/14/2022
# Description:      
# Output:           
# Sources:          
******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //declare variables
    string cityName1;
    string cityName2;
    string cityName3;
    int distance1;
    int distance2;
    int distance3;
    const int NumMiles = 3.00;
    int averageMiles;

    //welcome message
    cout << "Distance from Portland Program!" << endl;

    //user input
    cout << "Enter city 1: ";
        getline (cin, cityName1);
    cout << "How many kilometers is " << cityName1 << " from Portland? ";
        cin >> distance1;
        cin.ignore();
    
    cout << "Enter city 2: ";
        getline (cin, cityName2);
    cout << "How many kilometers is " << cityName2 << " from Portland? ";
        cin >> distance2;
        cin.ignore();

    cout << "Enter city 3: ";
        getline (cin, cityName3);
    cout << "How many kilometers is " << cityName3 << " from Portland? ";
        cin >> distance3;

    //check for bad input
    if ((distance1 < 0) || (distance2 < 0) || (distance3 < 0))  {
        cout << "Bad Input! Please restart the program.";
        return 0;
    }

    //furthest distance
    if ((distance1 > distance2) && (distance1 > distance3)) {
        cout << cityName1 << " is the furthest from Portland." << endl;
    }
    else if ((distance2 > distance1) && (distance2 > distance3))    {
        cout << cityName2 << " is the furthest from Portland." << endl;
    }
    else if ((distance3 > distance1) && (distance3 > distance2))    {
        cout << cityName3 << " is the furthest from Portland." << endl;
    }
    else if ((distance1 > distance3) && (distance2 > distance3))   {
        cout << cityName1 << " and " << cityName2 << " are the furthest from Portland." << endl;
    }
    else if ((distance2 > distance1) && (distance3 > distance1))    {
        cout << cityName2 << " and " << cityName3 << " are the furthest from Portland." << endl;
    }
    else if ((distance3 > distance2) && (distance1 > distance2))    {
        cout << cityName1 << " and " << cityName3 << " are the furthest from Portland." << endl;
    }
    else if ((distance1 == distance2) && (distance2 == distance3)) {
        cout << "All desinations are the same distance from Portland." << endl;
    }
    
    //calculation for average distance from Portland
    averageMiles = (distance1 + distance2 + distance3) / NumMiles;
    
    cout << fixed << setprecision(2);
    cout << endl << "The average number of kilometers from Portland is " << averageMiles << " kilometers." << endl;

    //output message
    cout << endl << "Thank you for using my program!" << endl;

    return 0;
}