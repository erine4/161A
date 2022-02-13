/******************************************************************************
# Author:           Erin Egloff
# Assignment:       Assignment 5
# Date:             02/09/2022
# Description:      This program decodes a message from the user. It will take an 
                    abbreviated text message and output what the abbreviations mean.
# Input:            Str textMessage
# Output:           Ex. "You entered: IDK why, but my BFF is annoying me."
                    "IDK - I don’t know"
                    "BFF - best friend forever"
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
    string wordBRB = "BRB";
    string wordSTG = "STG";

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

    textMessage.find(wordBRB);
    if (textMessage.find(wordBRB) != string::npos)  {
        cout << "BRB: be right back" << endl;
    }

    textMessage.find(wordSTG);
    if (textMessage.find(wordSTG) != string::npos)  {
        cout << "STG: swear to god" << endl;
    }

    //end of program
    cout << endl;
    cout << "END." << endl;

    return 0;
}