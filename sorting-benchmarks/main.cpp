//
// Alice Black
// 27APR2025
// Sorting Benchmarks Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

// Function headers
void displayArray(int[], int, string);
void bubbleSort(int[], int, int &);
void swap(int &, int &);
void selectionSort(int[], int, int &);

int main()
{

// Array parameters
    const int ARRAY_SIZE = 20;

    int array_1[ARRAY_SIZE] = {6, 5, 90, 33, 45, 
                               1, 89, 70, 30, 4,
                               55, 60, 2, 9, 11,
                               91, 65, 45, 8, 3};

    int array_2[ARRAY_SIZE] = {6, 5, 90, 33, 45, 
                               1, 89, 70, 30, 4,
                               55, 60, 2, 9, 11,
                               91, 65, 45, 8, 3};

    int number_of_exchanges = 0;
    displayArray(array_1, ARRAY_SIZE, "UNSORTED-------------------|");
    bubbleSort(array_1, ARRAY_SIZE, number_of_exchanges);
    displayArray(array_1, ARRAY_SIZE, "SORTED-------------------|");
    cout << "\nNumber of exchanges = " << number_of_exchanges << endl;

    number_of_exchanges = 0;
    displayArray(array_2, ARRAY_SIZE, "UNSORTED-------------------|");
    selectionSort(array_2, ARRAY_SIZE, number_of_exchanges);
    displayArray(array_2, ARRAY_SIZE, "SORTED-------------------|");
    cout << "\nNumber of exchanges = " << number_of_exchanges << endl << endl;

    return 0;
}

void displayArray(int array[], int ARRAY_SIZE, string prompt)
{
    cout << prompt << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << array[i] << ", ";
    cout << endl;  
}

void bubbleSort(int array[], int ARRAY_SIZE, int &number_of_exchanges)
{
    int max_element, 
        index;

    for (max_element = ARRAY_SIZE - 1; max_element > 0; max_element--)
    {

        for (index = 0; index < max_element; index++)
        {
         
            if (array[index] > array[index + 1])
            {
                swap(array[index], array[index + 1]);
                number_of_exchanges++;
            }
        } 
    }
}

void selectionSort(int array[], int ARRAY_SIZE, int &number_of_exchanges)
{
    int min_index,
        min_value;

 
    for (int start_index = 0; start_index < (ARRAY_SIZE - 1); start_index++)
    {
        min_index = start_index;
        min_value = array[start_index];

        
        for (int index = start_index + 1; index < ARRAY_SIZE; index++)
        {
            if (array[index] < min_value)
            {
                min_value = array[index];
                min_index = index;
                number_of_exchanges++;
            }
        }
        swap(array[min_index], array[start_index]);
    }
    
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

