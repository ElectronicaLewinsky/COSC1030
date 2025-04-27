//
// Alice Black
// 27APR2025
// String Length Programming Project
// COSC 1030
//
# include <iostream>
using namespace std;

// Funciton header
int countWords(char *); 

int main()
{
    const int SIZE = 100;
    char userString[SIZE];
    int numWords;
    
// Greeting
    cout << "This program counts the number of words in a string." << endl;
    
// Prompt user for string input
    cout << "Enter a string with less that 100 characters:" << endl;
    cin.getline(userString, SIZE);
    
// Call function for counting string length and return the results
    numWords = countWords(userString);
    cout << "\nWord count: " << numWords << endl;
    
    cout << "\nPress [Enter] to exit program." << endl;
    cin.get();
    return 0;
}

int countWords(char *strPtr)
{
    int count = 0; 
    
// Sets initial count to 1 if string does not start with a space
    if(*strPtr != ' ')
        count = 1;
    
// Count words by stepping through string
    while (*strPtr != '\0')
    {
        if(*strPtr == ' ')
        {
            if (*(strPtr + 1) != ' ' && *(strPtr + 1) != '\0')
                count++;
        }
        strPtr++;
    }
    return count;
}
