//
// Alice Black 
// 2025FEB09
// Stadium Seating Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
// Variable declaration
    const float CLASS_A_COST_PER_SEAT = 15.00,
                CLASS_B_COST_PER_SEAT = 12.00,
                CLASS_C_COST_PER_SEAT = 9.00;
    int seats_sold_A,
        seats_sold_B,
        seats_sold_C;
    float class_A_total,
          class_B_total,
          class_C_total,
          total_income_gen;
// Input number of seats sold in each category
    cout << endl;
    cout << "Enter number of Class A seats sold: ";
    cin >> seats_sold_A;
    cout << "Enter number of Class B seats sold: ";
    cin >> seats_sold_B;
    cout << "Enter number of Class C seats sold: ";
    cin >> seats_sold_C;
// Calculate cost per Class
    class_A_total = seats_sold_A * CLASS_A_COST_PER_SEAT;
    class_B_total = seats_sold_B * CLASS_B_COST_PER_SEAT;
    class_C_total = seats_sold_C * CLASS_C_COST_PER_SEAT;
// Calculate sales for all seats
    total_income_gen = class_A_total + class_B_total + class_C_total;
// Print results
    cout << endl;
    cout << setprecision(2) << fixed;
    cout << seats_sold_A << " Class A seats @ $";
    cout << setw(6) << CLASS_A_COST_PER_SEAT;
    cout << " = $" << class_A_total << endl;
    cout << seats_sold_B << " Class B seats @ $";
    cout << setw(6) << CLASS_B_COST_PER_SEAT;
    cout << " = $" << class_B_total << endl;
    cout << seats_sold_C << " Class C seats @ $";
    cout << setw(6) << CLASS_C_COST_PER_SEAT;
    cout << " = $" << class_C_total << endl;

    return 0;
}
