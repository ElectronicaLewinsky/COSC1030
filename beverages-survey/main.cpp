//
// Alice Black
// 2025FEB22
// Beverages Survey Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
// Variable declaration
    int choice = 0;
    int coke =0,
        tea = 0,
        coffee = 0,
        orangejuice = 0;

    int pnum = 0;
// Display prompts   
    cout << "Enter number of participants :" ;
    cin >> pnum;

        cout << "Beverage Survey\n" << endl;
        cout << "Out of these four beverages, which one is your favorite?\n" << endl;
        cout << "1) Coke " << endl;
        cout << "2) Tea " << endl;
        cout << "3) Coffee" << endl;
        cout << "4) Orange Juice " << endl;
        cout << endl;

        cout << "Enter 1, 2, 3, or 4 or -1 to exit" << endl;
            for (int i = 1; i <= pnum; i++) {
            cout << "Input favorite beverage," << i << endl;
// Record result
        cin >> choice;
            if ( choice == -1)
                    return 0;

            cout << endl;

            switch(choice)
        {
            case 1:
                coke++;
                break;
            case 2:
                tea++;
                break;
            case 3:
                coffee++;
                break;
            case 4:
                orangejuice++;
                break;
                default:
                    cout << "Please choose a beverage";
            }    
        }
        cout << endl;
// Display result   
        cout << "Survey results:\n" << endl;
        cout << "Chosen beverages:" << setw(40) << "Number of votes: " << coke + coffee + tea + orangejuice << endl;
        cout << "______________________________________" << endl;
        cout << "Coke:"         << setw(32) << coke << endl;
        cout << "Tea"           << setw(35) << tea << endl;
        cout << "Coffee"        << setw(34) << coffee << endl;
        cout << "Orange Juice"  << setw(26) << orangejuice << endl;

        return 0;

}

