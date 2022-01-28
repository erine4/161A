#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//constants
const int calories = 53.0;
const int servings = 3.0;

//function declarations
int total_calories (int number_cookies);
double total_servings (int number_cookies);

int main () {
    //declare variables
    int number_cookies = 0.0;

    //set decimals
    cout << fixed << setprecision(1);

    //print welcome message 
    cout << "This program will tell you how many calories and servings you have consumed, " 
        << "based on the number of Oreos." << endl;
    
    //user input and store number_cookies
    cout << "Enter the number of Oreos you have eaten (as a whole number): ";
    cin >> number_cookies;
    
    //output statement and call function
    cout << number_cookies << " cookies is approximately " << total_servings (number_cookies) << " servings." << endl;
    cout << "You consumed " << total_calories (number_cookies) << " calories." << endl;

return 0;
}

//define function contents
int total_calories (int number_cookies) {
    return number_cookies * calories ;
}

double total_servings (int number_cookies) {
    return number_cookies / static_cast<double>(servings) ;
}
