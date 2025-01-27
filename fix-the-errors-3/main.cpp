//
// Alice Black
// 2025JAN26
// Fix the Errors #3 Programming Project
// COSC 1030
//

// This program takes two values from the user and then swaps them
// before printing the values. The user will be prompted to enter
// both numbers.


#include <iostream>
using namespace std;

int main()
{
	float a;
	float b;
	float temp;
	// Prompt user to enter the first number
	cout << "Enter the first number" << endl;
	cout << "Then hit enter" << endl;
	cin >> a;
	// Prompt user to enter the second number
	cout << "Enter the second number" << endl;
	cout << "Then hit enter" << endl;
	cin >> b;
	// Echo print the input
    cout << "You input the numbers as" << endl;
    cout << "a = " << a << ", b = " << b << endl;
	// Now we swap the variables
    temp = a;
    a = b;
    b = temp;
	// Output the values
    cout << "\nAfter swapping, the values are " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
