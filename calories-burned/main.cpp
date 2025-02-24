//
// Alice Black 
// 2025FEB22
// Calories Burned Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;
int main()
{
// Variable declaration
    const float CALORIES_PER_MINUTE = 3.6;
    float CALORIES_BURNED = 0;
    for (int i = 5; i <= 30; i +=5)
// Calculate and display result
    {
        CALORIES_BURNED = (i * CALORIES_PER_MINUTE);
        cout << "Calories burned after" << i
             << "minutes = "
             << CALORIES_BURNED
             << endl;
    }
    return 0;
}
