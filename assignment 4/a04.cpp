#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

/* const int */
const double adultPassFree = 100.00;
const double nonAdultPassFree = 28.00;
const double adultTicket = 2.50;
const double nonAdultTicket = 1.25;

int main() {
    /* declare variables */
    char typeFastPass;
    int numberTickets = 0;
    double totalCost = 0.0;
    double needToSpend = 0.0;

    /* set precision */
    cout << fixed << setprecision(2);
    
    /* opening message */
    cout << "Welcome to TriMet Hop Fastpass!" 
                << endl 
                << endl;

    /* fastPass choices */
    cout << "FastPass Ticket: "
                << setfill(' ') 
                << setw(33) 
                << "Ticket $" 
                << endl;

    /* divider */
    cout << std::setfill('-')
                << setw(60)
                << " "
                << setfill(' ')
                << endl;

    /* adult pass */
    cout << "A. Adult Pass (ages 18-64)"
                << setw(16)
                << " "
                << "$2.50"
                << endl;

    /* honored citizen pass */
    cout << "H. Honored Citizen (65+, disabilities)"
                << setw(4)
                << " "
                << "$1.25"
                << endl;
    
    /* youth pass */
    cout << "Y. Youth Pass (ages 7-17)"
                << setw(17) 
                << " "
                << "$1.25"
                << endl
                << endl;
    /* note */
    cout << "Note: Ride is 2 hours and 30 minutes with each ticket."
                << endl
                << endl;
    
    /* free ride */
    cout << "Ride free for the rest of the month after spending $100 with an Adult pass," 
                << endl
                << "or $28 with an Honored Citizen or Youth pass!"
                << endl
                << endl;

    /* input type of pass */
    cout << "Please enter the type of pass you wish to purchase (enter A, H, or Y): ";
        cin >> typeFastPass;

    /* add input checker if not a,h,y */
        while ((typeFastPass != 'A') && (typeFastPass != 'a') && (typeFastPass != 'H') && (typeFastPass != 'h') && (typeFastPass != 'Y') && (typeFastPass != 'y'))    {
            cin.clear();
            cin.ignore(2, '\n');
            cout << "Bad input! Please enter the letter A, H , or Y.";
            cin >> typeFastPass;
        }
       
    
    /* input number of tickets */
    cout << "Enter the number of tickets purchased this month: ";
        cin >> numberTickets;
        
    /* add input checker if nan */
        while (!cin)    {
            cin.clear();
            cin.ignore(200, '\n');
            cout << "Bad input! Please enter a number.";
            cin >> typeFastPass;
        }

    /* display number of tickets */
    cout << "You have purchased " << numberTickets << " tickets!" << endl;

    /* if then statements */
    if ((typeFastPass == 'A') || (typeFastPass == 'a'))   {
        totalCost = adultTicket * numberTickets;
        cout << "You have paid: $" << totalCost << ".";
    }

    else if ((typeFastPass == 'H') || (typeFastPass == 'h') || (typeFastPass == 'Y') || (typeFastPass == 'y'))    {
        totalCost = nonAdultTicket * numberTickets;
        cout << "You have paid: $" << totalCost << ".";
    }
    cout << endl;

    if ((typeFastPass == 'A') || (typeFastPass == 'a')) {
        needToSpend = adultPassFree - totalCost;
        if (needToSpend > 0)    {
            cout << "Spend $" << needToSpend << " more to earn free rides for the rest of the month.";
        }
        else if (needToSpend <= 0)  {
            cout << "You have earned free rides for the rest of the month!";
        }
    }

    else if ((typeFastPass == 'H') || (typeFastPass == 'h') || (typeFastPass == 'Y') || (typeFastPass == 'y'))  {
        needToSpend = nonAdultPassFree - totalCost;
        if (needToSpend > 0)    {
            cout << "Spend $" << needToSpend << " more to earn free rides for the rest of the month.";
        }
        else if (needToSpend <= 0)  {
            cout << "You have earned free rides for the rest of the month!";
        }
    }
    cout << endl;

    /* ending message */
    cout << "Thank you for riding TriMet!" << endl;

    return 0;
}