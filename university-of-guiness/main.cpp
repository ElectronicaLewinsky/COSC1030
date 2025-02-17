
//
// Alice Black 
// 2025FEB16
// UofG Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;
int main()
{
// Variable declaration
    char choice;
// Input information
    cout<<"Enter I if you are a resident or type O if you are out-of-state:";
    cin>>choice;
    if(choice = 'I')
{
// Display results
    cout<<"Your total cost for this semster is $4500" <<"\n";
    if(choice== 'O')
    cout<<"Your total cost for this semester is $3000" <<"\n";
}
{
// Input information
    cout<<"Enter Y if you require a dorm. Otherwise, enter N:";
    cin>>choice;
    if(choice=='Y')
// Display results
    cout<<"Your total cost for this semester is $8000" <<"\n";
    else if(choice== 'N')
    cout<<"Your total cost for this semester is $5500"  <<"\n";
}
return 0;
}
