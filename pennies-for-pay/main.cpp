//
// Alice Black 
// 02MAR2025
// Pennies for Pay Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
// Variables and constants declarations
    const int increment = 2;

    int numdays;

    float daily_salary = .01,
          total_salary = 0;
// Prompt user for number of days
    cout << "\nEnter number of days: ";
    while(!(cin >> numdays) || (numdays < 1))
    {
        cout << "ERROR: number of days should be \n"
             << "greater than 1 \n"
             << endl;
        cin.clear();
        cin.ignore(1200, '\n');
    }
// Calculate and display total
    cout << "\n   Day             Amount earned" << endl;
    cout << "--------------------------------------\n";
    cout << setprecision(2) << fixed;

    for(int i = 0; i < numdays; i++)
    {
        total_salary += daily_salary;
        cout << "   " << (i + 1) << "           $";
        cout << daily_salary << endl;
        daily_salary *= increment;
    }

    cout << "\nTotal salary for " << numdays;
    cout << " days = $" << total_salary << endl;
    cout << endl;
    
    return 0;
}
