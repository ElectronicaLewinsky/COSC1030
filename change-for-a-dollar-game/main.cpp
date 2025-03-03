//
// Alice Black 
// 02MAR2025
// Change for a Dollar Game Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int main()
{
// Variables declaration
    const float ONE_DOLLAR = 1.00,
                PENNY      = 0.01,
                NICKEL     = 0.05,
                DIME       = 0.10,
                QUARTER    = 0.25;

    float pennies,
          nickels,
          dimes,
          quarters,
          total;

    cout << "\nLet's see if your coins equal 1 dollar.\n";
    
    cout << endl;

// Input number of pennies nickels dimes and quarters
    cout << "How many pennies do you have? ";
    cin >> pennies;
    cout << "Nickels? ";
    cin >> nickels;
    cout << "Dimes? ";
    cin >> dimes;
    cout << "Quarters? ";
    cin >> quarters;

    cout << endl;
// Calculate total amount and display result
    total+= ((pennies *= PENNY) +
                    (nickels *= NICKEL) +
                    (dimes *= DIME)   +
                    (quarters *= QUARTER));

    if (total == ONE_DOLLAR)
    {
        cout << '$' << total;
        cout << " equal to $1." << endl;
    }
    else if (total < ONE_DOLLAR)
    {
        cout << '$' << total;
        cout << " is less than $1. Restart program and ";
        cout << "try again.\n";
    }
    else if (total > ONE_DOLLAR)
    {
        cout << '$' << total;
        cout << " greater than $1.  Restart program and ";
        cout << " try again.\n";
    }

    cout << endl;

    return 0;
}
