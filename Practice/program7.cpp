#include<iostream>
using namespace std;

int main()
{
    float fValue1 = 0.0f;       // To store first input
    float fValue2 = 0.0f;       // To store second input
    float fResult = 0.0f;       // To store the Result

    cout<<"Enter the first number : \n";
    cin>>fValue1;

    cout<<"Enter the second number : \n";
    cin>>fValue2;

    fResult = fValue1 + fValue2;        // Perform the addition

    cout<<"Addition is : "<<fResult<<"\n";

    return 0;
}