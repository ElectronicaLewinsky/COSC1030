
// Alice J Black
// 13APR2025
// Monthly Sales Programming Project
// COSC 1030
//
#include <iostream>

using namespace std;

// Sum function header
void yearTotal(float * sales, int saleSize, float & sum); 

// Average function header
void yearAverage(float sum, int saleSize, float & avg);	

// Variables declarations
const int MAXMONTHS = 12;

int main() 
{
	float saleSize;
	float sum = 0, avg = 0, totalSales;
	float *sales = nullptr;
	int count = 1;

// Prompt user for input
	cout << "Please provide the number of months" << endl;
	
// Validate input
    while (!(cin >> saleSize) || saleSize < 0) 
    {
    	cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Please enter number of months: ";
    }
	sales =  new float[MAXMONTHS];
	for (int i = 0; i < saleSize; i++)
	{
		cout << "Please enter the sales for each month " << (count + i) << endl;
    	while (!(cin >> *(sales + i)) || (*(sales + i) < 0)) 
    	{
    		cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter number in sales ";
    	}
    }	

// Functions for Total and Average
	yearTotal(sales, saleSize, sum);
	yearAverage(sum, saleSize, avg);
}

// Year total function and display result

void yearTotal(float * sales, int saleSize, float & sum)
{
	for (int i = 0; i < saleSize; i++)
	{
		sum += sales[i];
	}
	cout << "Total sales for the year: $" << sum << endl;
}
// Year average function and display result
void yearAverage(float sum, int saleSize, float & avg)
{
	avg = sum / saleSize;
	cout << "Average monthly sale: $" << avg << endl;
}
