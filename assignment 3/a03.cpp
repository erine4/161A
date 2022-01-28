#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//constants
const int calories = 53.0;
const int servings = 3.0;

//function declarations
double total_calories (double number_cookies);
double total_servings (double number_cookies);

int main () {
    //declare variables
    int number_cookies = 0.0;

    //set decimals
    cout << fixed << setprecision(1);

    //print welcome message 
    cout << "This program will tell you how many calories and servings you have consumed, " 
        << "based on the number of Oreos." << endl;
    
    //user input and store number_cookies
    cout << "Enter the number of Oreos consumed: ";
    cin >> number_cookies;
    
    //output statement and call function
    cout << "You have consumed " << total_calories (number_cookies) << " calories and " 
        << total_servings (number_cookies) << " servings." << endl;

return 0;
}

//define function contents
double total_calories (double number_cookies) {
    return number_cookies * calories ;
}

double total_servings (double number_cookies) {
    return number_cookies / static_cast<double>(servings) ;
}
