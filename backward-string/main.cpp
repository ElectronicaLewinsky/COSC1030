//
// Alice J Black   
// 20APR2025
// Backward String Programming Project
// COSC 1030
//
#include <iostream>
#include <cstring>
using namespace std;

// Function header
void backward (char *_);

int main ()
    {

// Array definition
        const int SIZE = 80;
        char input[SIZE];

// Request input from user
        cout << "Enter a string to be displayed backward:\n";
        cin.getline(input, SIZE);

// Display the string backward        
        backward(input);
        return 0;
    }

// This function accepts a pointer to a C-String and displays it backward
    void backward(char *str)
    {

// Retrieve subscript of the final character in the string
    int last = strlen(str) -1;

// Display each character from last to first
    for (int index = last; index >= 0; index--)
    cout <<str[index];
    cout << endl;
}
