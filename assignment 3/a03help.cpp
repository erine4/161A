#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
    int number_cookies = 0.0;
    const int calories = 53.0;
    const int servings = 3.0;
    int total_calories = 0;
    double total_servings = 0.0;

    cout << fixed << setprecision(1);

    cout << "This program will tell you how many calories " << endl
        << "and servings are in the amount of Oreos you have eaten." << endl;
    
    cout << "Enter the number of cookies you have eaten (as a whole number): ";
    cin >> number_cookies;

    total_calories = number_cookies * calories;
    total_servings = number_cookies / static_cast<double>(servings);
    
    cout << number_cookies << " cookies is approximately " << total_servings << " servings." << endl;
    cout << "You consumed " << total_calories << " calories. " << endl;

    return 0;
}
