//
// Alice Black 
// 2025FEB16
// Time Calculator Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>  
using namespace std;
int main()
{
// Variable declaration
    int seconds;
    float minutes;

// Input number of seconds
    cout << "\nEnter a number of seconds: ";
    cin >> seconds;

// Format precision parameters
    cout << setprecision(2) << fixed;

// Calculate and display results
    if (seconds <= 59)
    {
        cout << seconds;
        cout << " is less that 60 seconds." << endl;
    }
    else if (seconds >= 60 && seconds < 3600)
    {
        minutes = seconds / 60.0;
        cout << minutes << " minutes in ";
        cout << seconds << " seconds" << endl;
    }
    else if (seconds >= 3600 && seconds < 86400)
    {
        minutes = seconds / 3600.0;
        cout << minutes << " hours in ";
        cout << seconds << " seconds" << endl;
    }
    else if (seconds >= 86400)
    {
        minutes = seconds / 86400.0;
        cout << minutes << " days in ";
        cout << seconds << " seconds" << endl;
    }
    cout << endl << endl;
    return 0;
}
