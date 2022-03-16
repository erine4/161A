/******************************************************************************
# Author:           Erin Egloff
# Assignment:       Final Exam
# Date:             March 23, 2022
# Description:      
# Input:            
# Output:           
# Sources:          None
#******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

//Declare Functions



int main()  {
    //declare variables
    int input = 0;
    int max = 0;

    //opening message
    cout << "Welcome to my Final Exam Practice." << endl << endl;

    cout << "Enter positive whole numbers separated by newlines (0 to quit): ";
    
    cin >> input;
   

    do {

        //max 
        while ((input > max) && (input > 0)) {
            max = input;
        }

        cin >> input;
        

    } while (input != 0);

    
    while (input == 0) {
        
        if (max <= 0)  {
            cout << "No positive whole numbers were entered." << endl;
        }   
        
        else if (max > 0) {
            cout << "The largest number you entered is " << max << endl;
        }
        
        break;
    }    
    


    return 0;
}

