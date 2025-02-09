// Alice Black 
// 2025FEB09
// Woody Furniture Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
// Variable declaration
    const float american_colonial = 85.00,
                modern = 57.50,
                french_classical = 127.75;
    int units_sold_american_colonial,
        units_sold_modern,
        units_sold_french_classical;
    float american_colonial_total,
          modern_total,
          french_classical_total,
          total_income_gen;
// Input number of units sold in each category
    cout << endl;
    cout << "Enter number of American Colonial sold: ";
    cin >> units_sold_american_colonial;
    cout << "Enter number of Modern sold: ";
    cin >> units_sold_modern;
    cout << "Enter number of French Classical sold: ";
    cin >> units_sold_french_classical;
// Calculate cost per category
    american_colonial_total = units_sold_american_colonial * american_colonial;
    modern_total = units_sold_modern * modern;
    french_classical_total = units_sold_french_classical * french_classical;
// Calculate sales for all units
    total_income_gen = american_colonial_total + modern_total + french_classical_total;
// Print results
    cout << endl;
    cout << setprecision(2) << fixed;
    cout << units_sold_american_colonial << " American Colonial @ $";
    cout << setw(6) << american_colonial;
    cout << " = $" << american_colonial_total << endl;
    cout << units_sold_modern << " Modern @ $";
    cout << setw(6) << modern;
    cout << " = $" << modern_total << endl;
    cout << units_sold_french_classical << " French Classical @ $";
    cout << setw(6) << french_classical;
    cout << " = $" << french_classical_total << endl;

    return 0;
}
