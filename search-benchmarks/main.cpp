//
// Alice Black 
// 04APR2025
// Search Benchmarks Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;
// Algorithms header
int linearSearch(int[], int, int, int &);
int binarySearch(int[], int, int, int &);
void swap(int &, int &);
void selectionSort(int[], int);

int main()
{
// Variables declaration
    const int ARRAY = 20;
    int numbers[ARRAY] = {8, 3, 1, 7, 9,
                            5, 2, 60, 14, 66,
                            76, 89, 27, 33, 42, 
                            40, 51, 11, 83, 47};
// Display unsorted array
    cout << "Unsorted:\n--------" << endl;
    for (auto element : numbers) 
    cout << element << ", ";
    cout << endl;
// Sort array
    selectionSort(numbers, ARRAY);
// Display sorted array
    cout << "Sorted:\n--------" << endl;
    for (auto element : numbers) 
    cout << element << ", ";
    cout << endl;
// Prompt user to enter an integer
    int search_value;
    cout << "\nEnter a number: ";
    cin >> search_value;

    int number_of_comparisions = 0;
    int results = linearSearch(numbers, ARRAY, search_value, number_of_comparisions);
    cout << endl;
// Display position of the integer and number of comparisons
    if (results != -1)
    {
    cout << search_value << " was located at position #" << results << '.' << endl
         << "Number of comparisons = " << number_of_comparisions << endl;
    }
    else
    {
    cout << search_value << " was NOT located" << endl
         << "Number of comparisons = " << number_of_comparisions << endl;
    }

    number_of_comparisions = 0;
    results = binarySearch(numbers, ARRAY, search_value, number_of_comparisions);

    cout << endl;
    if (results != -1)
    {
    cout << search_value << " was located at position #" << results << '.' << endl
         << "Number of comparisons = " << number_of_comparisions << endl;
    }
    else
    {
    cout << search_value << " was NOT located" << endl
         << "Number of comparisons = " << number_of_comparisions << endl;
    }

    return 0;
}
// Calculation function header
void selectionSort(int array[], int ARRAY)
{
// Function definition
    int min_index,
        min_value;

    
    for (int start_index = 0; start_index < (ARRAY - 1); start_index++)
    {
        min_index = start_index;
        min_value = array[start_index];

        
        for (int index = start_index + 1; index < ARRAY; index++)
        {
            if (array[index] < min_value)
            {
            min_value = array[index];
            min_index = index;
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
int linearSearch(int array[], int ARRAY, int search_value, int &number_of_comparisons)
{
    int index = 0,
        position = -1;

    bool located = false;
    while (index < ARRAY && !located)
    {
        if (array[index] == search_value)
        {
        located = true;
        position = index;
        }
        number_of_comparisons++;
        index++;
    }
    return position;
}
int binarySearch(int array[], int ARRAY, int search_value, int &number_of_comparisons)
{
    int first = 0,
        middle,
        last = ARRAY - 1,
        position = -1;
    bool located = false;

    while (!located && first <= last)
    {
        middle = (first + last) / 2;

        if (array[middle] == search_value)
        {
        located = true;
        position = middle;
        }
        else if (array[middle] > search_value)
            last = middle - 1;
        else                                    
            first = middle + 1;
        
        number_of_comparisons++;
    }
    
    return position;
}
