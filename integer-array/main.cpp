//
// Alice Black 
// 06APR2025
// Integer Array
// COSC 1030
//
#include<iostream>

using namespace std;

// Algorithms header
int searchBinary( int[], int, int);
void bubbleSort(int [], int); 
void displayArray(int[], int);

int main ()
{
    
// Variables declaration
int userValue;
const int SIZE = 50;
int numArray[SIZE];

// Prompt user to enter fifty integers
cout << "Enter the numbers to be placed in the array." << endl;

for (int count = 0; count < SIZE; count ++) 
{

// Prompt user to enter each integer
    cout << "enter number" << count + 1 << " "; 
    cin >> numArray[count]; 
}

// Sort array in ascending order
bubbleSort (numArray, SIZE); 
cout << "The array has been sorted." << endl; 
displayArray(numArray,SIZE); 

// Ask user which integer they want to retrieve
cout << "what integer would you like to retrieve?";
cin >> userValue;

// Display value retrieve
cout << "Searching the array..." << endl; 
cout << "The value you retrieved is ";
cout << searchBinary(numArray, SIZE, userValue);
return 0;
}

// Sort function header
void bubbleSort (int arrayNumx[], int ELEMS)
// Sort function definition
{
bool elemswap; 
int temp1 = 0; 
int endValue = ELEMS - 1; 
do
{
elemswap = false;
for (int count = 0; count < endValue; count ++)
{       
    if (arrayNumx[count] > arrayNumx[count+1])
    {
        temp1 = arrayNumx[count];
        arrayNumx[count] = arrayNumx[count + 1];
        arrayNumx[count+1] = temp1; 
elemswap = true;
}
}
endValue--;
}
while (elemswap != false);
}

//Binary search function header
int searchBinary (int intArray[], int totalElems, int quantity) 
//Binary search function definition
{
int first = 0 ;
    int last = totalElems -1;
    int middle = 0; 
    int returnnum = -1;
    while (first <= last)
    {
        middle = (first + (last-first))/2;
        if (intArray[middle] == quantity)
        return middle; 
        else if (intArray[middle] < quantity)
            first = middle + 1; 
        else
            last = middle - 1;
    }
    return -1; 
}

// Display array function header
void displayArray (int shownum[], int dec)
// Display array function definition
{
for(int count = 0; count < dec; count++)
    cout << shownum[count] << endl; 
}
