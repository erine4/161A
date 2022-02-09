/******************************************************************************
# Author:           Erin Egloff
# Assignment:       Assignment 5
# Date:             02/09/2022
# Description:      This program will calculate the total price based on their type 
                    of Hop Fastpass. The user will know the number of tickets purchased, 
                    how much it will cost, and the cost to qualify for free rides for the 
                    month (if applicable or not attained).
# Input:            Str textMessage
# Output:           "You have purchased ___ tickets!"
                    "You have paid: $___."
                    "Spend $___ more to earn free rides for the rest of the month."
# Sources:          zyLab 5
******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    //declare strings
    string textMessage;
    string wordBFF = "BFF";
    string wordIDK = "IDK"; 
    string wordJK = "JK"; 
    string wordTMI = "TMI"; 
    string wordTTYL = "TTYL"; 

    //display welcome message
    cout << "Welcome to the Text Message Decoder!" << endl << endl;
    
    //get user input
    cout <<  "Enter a single line text message: ";
    getline(cin, textMessage);
    
    cout << endl;
    cout << "You entered: " << textMessage << endl;

    //output definitions for abbreviations
    textMessage.find(wordBFF);
    if (textMessage.find(wordBFF) != string::npos)  {
        cout << "BFF: best friend forever" << endl;
    }

    textMessage.find(wordIDK);
    if (textMessage.find(wordIDK) != string::npos)  {
        cout << "IDK: I don't know" << endl;
    }

    textMessage.find(wordJK);
    if (textMessage.find(wordJK) != string::npos)  {
        cout << "JK: just kidding" << endl;
    }

    textMessage.find(wordTMI);
    if (textMessage.find(wordTMI) != string::npos)  {
        cout << "TMI: too much information" << endl;
    }

    textMessage.find(wordTTYL);
    if (textMessage.find(wordTTYL) != string::npos)  {
        cout << "TTYL: talk to you later" << endl;
    }

    //end of program
    cout << endl;
    cout << "END." << endl;

    return 0;
}