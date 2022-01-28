#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    double number_cookies = 0.0;
    int calories = 53;
    double servings = 3.00;
    int total_calories = 0;
    double total_servings = 0.0;

    cout << fixed << setprecision(2);

    cout << "Hello, welcome to my program that tells you how many calories " << endl
        << "and servings are in the amount of Oreos you have eaten." << endl;
    
    cout << "Enter the number of cookies you have consumed: ";
    cin >> number_cookies;

    total_calories = number_cookies * calories;
    total_servings = number_cookies / servings;
    
    cout << "You have consumed " << total_calories << " calories" 
        << " and approximately " << total_servings << " servings." << endl;

    return 0;
}
