#include <iostream>
#include <iomanip>
#include <cstdlib>


//const int
const double adultPassFree = 100.00;
const double nonAdultPassFree = 28.00;
const double adultTicket = 2.50;
const double nonAdultTicket = 1.25;

int main() {
    //declare variables
    char typeFastPass;
    int numberTickets = 0;
    double totalCost = 0.0;
    double needToSpend = 0.0;

    //opening message
    std::cout << "“Welcome to TriMet Hop Fastpass!" 
                << std::endl 
                << std::endl;

    //fastPass choices
    std::cout << "FastPass Ticket: "
                << std::setfill(' ') 
                << std::setw(33) 
                << "Ticket $" 
                << std::endl;

    //divider
    std::cout << std::setfill('-')
                << std::setw(60)
                << " "
                << std::setfill(' ')
                << std::endl;

    //adult pass
    std::cout << "A. Adult Pass (ages 18-64)"
                << std::setw(16)
                << " "
                << "$2.50"
                << std::endl;

    //honored citizen pass
    std::cout << "H. Honored Citizen (65+, disabilities)"
                << std::setw(4)
                << " "
                << "$1.25"
                << std::endl;
    
    //youth pass
    std::cout << "Y. Youth Pass (ages 7-17)"
                << std::setw(17) 
                << " "
                << "$1.25"
                << std::endl;










    return 0;
}