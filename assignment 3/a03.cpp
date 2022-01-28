#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*constants*/
const int calories = 53.0;
const int servings = 3.0;

/*function declarations */
double total_calories (double number_cookies);
double total_servings (double number_cookies);

int main () {
    //declare variables
    double number_cookies = 0.0;

    cout << fixed << setprecision(2);

    //print welcome message 
    cout << "This program will tell you how many calories and servings you have consumed, " 
        << "based on the number of Oreos." << endl;

    //user input and store number_cookies
    cout << "Enter the number of Oreos consumed: " << endl;
    cin >> number_cookies;

    //obtain total_calories and total_servings
    
    total_calories (number_cookies);
    total_servings (number_cookies);
    
    cout << "You have consumed " << total_calories (number_cookies) << " calories and " 
        << total_servings (number_cookies) << " servings." << endl;


return 0;
}

double total_calories (double number_cookies) {
    return number_cookies * calories ;
}


double total_servings (double number_cookies) {
    return number_cookies / static_cast<double>(servings) ;
}
