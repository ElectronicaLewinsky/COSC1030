//
// Alice Black
// 13APR2025
// Pointer Rewrite Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

// Function Header
int doSomething(int *, int *);

// Variables for doSomething function
int main()
{
    int  z = 2,
        *x = &z,
        *y = &z;
         z = doSomething(x, y);

    cout << "z = " << z << endl;

    x = nullptr;
    z = nullptr;

    return 0;
}

// Execute function
int doSomething(int *x, int *y) 
{
    int temp = *x; 
    *x = *y * 10;
    *y = temp * 10; 
    return *x + *y;
}
