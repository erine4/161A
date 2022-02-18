/******************************************************************************
# Author:           Erin Egloff
# Assignment:       Midterm PRACICE 1
# Date:             02/13/2022
# Description:      Program randomly chooses play against user. Outputs if there is a tie or which thing won.
# Output:           who has won, or if there is a tie
# Sources:          midterm practice 1
******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    //declare variables
    string playerName = "";
    char playerChoice;
    int randNum;

    //welcome message
    cout << "Welcome to the Rock Paper Scissors Game!" << endl;

    //user input
    cout << "Enter player name: ";
        getline(cin, playerName);

    cout << endl;
    cout << "What is your play, " << playerName << "?" << endl;
    
    cout << "Enter r, p, or s: ";
        cin >> playerChoice;

    //check if incorrect character
    to_string(playerChoice);

    if ((playerChoice != 'R') && (playerChoice != 'r') && (playerChoice != 'S') && (playerChoice != 's'))    {
        cout << "Invalid play, run the program again." << endl;
    }
    
    else {
    randNum = randNum % 3;
    }

    //print output using switch statement
    switch(randNum) {
        case 0:
            cout << endl << "Computer plays R" << endl;
            if ((playerChoice == 'R') || (playerChoice == 'r'))  {
                cout << "It's a tie!" << endl;
            }
            else if ((playerChoice == 'P') || (playerChoice == 'p'))    {
                cout << "Computer wins!" << endl;
            }
            else if ((playerChoice == 'S') || (playerChoice == 's'))    {
                cout << playerName << " wins!" << endl;
            }
            cout << endl;
            break;
        
        case 1:
            cout << endl << "Computer plays P" << endl;
            if ((playerChoice == 'P') || (playerChoice == 'p')) {
                cout << "It's a tie!" << endl;
            }
            else if ((playerChoice == 'R') || (playerChoice == 'r'))    {
                cout << "Computer wins!" << endl;
            }
            else if ((playerChoice == 'S') || (playerChoice == 's'))    {
                cout << playerName << " wins!" << endl;
            }
            cout << endl;
            break;
        
        case 2:
            cout << endl << "Computer plays S" << endl;
            if ((playerChoice == 'S') || (playerChoice == 's')) {
                cout << "It's a tie!" << endl;
            }
            else if ((playerChoice == 'R') || (playerChoice == 'r'))    {
                cout << playerName << " wins!" << endl;
            }
            else if ((playerChoice == 'P') || (playerChoice == 'p'))    {
                cout << "Computer wins!" << endl;
            }
            cout << endl;
            break;
    }

    //output message
    cout << "Thank you for playing!" << endl;

    return 0;
}