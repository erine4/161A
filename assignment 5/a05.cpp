#include <iostream>
using namespace std;

int main() {
    string textMessage;
    string wordBFF = "BFF";
    string wordIDK = "IDK"; 
    string wordJK = "JK"; 
    string wordTMI = "TMI"; 
    string wordTTYL = "TTYL"; 

    cout << "Welcome to the Text Message Decoder!" << endl << endl;
    
    cout <<  "Enter a single line text message: ";
    getline(cin, textMessage);
    
    cout << endl;
    cout << "You entered: " << textMessage << endl;

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

    cout << endl;
    cout << "END." << endl;

    return 0;
}