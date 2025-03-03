//
// Alice Black
// 02MAR2025
// Hotel Occupancy Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;
int main()
{
// Variables declaration
    float occupancy_rate = 0,
          rooms_occupied = 0,
          t_rooms = 0;

    int numrooms,
        numfloors,
        t_rooms_used = 0,
        t_rooms_occupied = 0,
        t_rooms_unoccupied = 0;
// Prompt user to enter number of floors and number of rooms on each floor, and how many are occupied
    cout << "How many floors does your hotel have? ";

    while (!(cin >> numfloors) || (numfloors < 1))
    {
        cout << "ERROR: number of floors must be\n"
             << "greater that 1 \n";        
        cin.clear();        
        cin.ignore(1230, '\n');
    }

    for(int i = 0; i < numfloors; i++)
    {
        if ((i + 1) == 13) 
        {
            cout << "\nSkipping 13th floor." 
                 << endl 
                 << endl;
        }
        else
        {
            cout << "How many rooms does floor number ";
            cout << (i + 1) << " have? ";

            while (!(cin >> numrooms) || 
                    (numrooms < 10))
            {
                cout << "ERROR: enter a number\n"
                     << "greater than 10: ";                
                cin.clear();
                cin.ignore(123, '\n');
            }

            t_rooms += numrooms;

            cout << "How many rooms are occupied\n"
                 << "on this floor? ";

            while (!(cin >> rooms_occupied) || 
                    (rooms_occupied < 1))
            {
                cout << "ERROR: enter a number\n"
                     << "greater than 10: ";                
                cin.clear();
                cin.ignore(123, '\n');
            }

             t_rooms_used += rooms_occupied;
        }
        
        
    }
// Calculate and display occupancy rates
    t_rooms_unoccupied = t_rooms - t_rooms_used;
    cout << "Total rooms unoccupied = " 
         << t_rooms_unoccupied 
         << endl;

    cout << "Total rooms used = " 
         << t_rooms_used 
         << endl;
         
    cout << "Total number of rooms = " 
         << t_rooms 
         << endl;

    occupancy_rate = (t_rooms_used / t_rooms) * 100;
    cout << "Occupancy rate = " 
         << occupancy_rate 
         << "%." 
         << endl;
    

    return 0;
}
