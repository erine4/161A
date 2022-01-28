#include <iostream>
#include <cmath>
using namespace std;

/*function declarations */
double calories (double);
double servings (double);

int main () {
    //declare variables
    double number_cookies = 0.0;

    //print welcome message 
    cout << "This program will tell you how many calories and servings you have consumed, "
        << "based on the number of Oreos." 
        << endl 
        << endl;

    //user input and store number_cookies
    cout << "Enter the number of Oreos consumed: " 
        << endl;
    cin >> number_cookies;

    //obtain total_calories and total_servings
    double calories (double number_cookies);
    double servings (double number_cookies);

    //output message
    cout << "You have consumed "
        << number_cookies
        << " which has "
        << calories
        << " calories and "
        << servings
        << " servings"
        << endl;
    
return 0;
}

double calories (double number_cookies) {
    return calories (number_cookies * 53) ;
}


double servings (double number_cookies) {
    return servings (number_cookies / 3) ;
}
