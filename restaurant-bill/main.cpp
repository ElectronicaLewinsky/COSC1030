//
// Alice Black  
// 2025FEB02
// Restaurant Bill Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;
// Variable declaration
int main()
{
    float mealCharge = 88.67,
// Constants for the tax rate and tip percentage
          taxPercentage = .0675,
          tipPercentage= .20,
          mealChargeTaxAmount = mealCharge * taxPercentage,
          mealChargeTipAmount = (mealCharge + mealChargeTaxAmount) * tipPercentage;
// Get the amount of the purchase
    cout << setprecision(2) << fixed;
    cout << "\nMeal cost: $" << mealCharge << endl;
// Calculate the sales tax
    cout << "Tax amount: $" << mealChargeTaxAmount << endl;
// Calculate the tip
    cout << "Tip amount: $" << mealChargeTipAmount << endl;
// Calculate the total of the sale
    cout << "Total bill: $" <<mealCharge + mealChargeTaxAmount + mealChargeTipAmount << endl << endl; 
// Print information about the sale.
return 0;
}