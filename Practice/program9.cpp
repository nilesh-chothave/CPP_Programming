#include<iostream>
using namespace std;

float AddTwoNumbers(
                        float fNo1,     // First input
                        float fNo2      // Second input
                    )
{
    float Ans = 0.0f;        // variable to store the result
    Ans = fNo1 + fNo2;      // Perform the addition
    return Ans;
}

int main()
{
    float fValue1 = 0.0f;       // To store first input
    float fValue2 = 0.0f;       // To store second input
    float fResult = 0.0f;       // To store the Result

    cout<<"Enter the first number : \n";
    cin>>fValue1;

    cout<<"Enter the second number : \n";
    cin>>fValue2;

    fResult = AddTwoNumbers(fValue1,fValue2);

    cout<<"Addition is : "<<fResult<<"\n";      // Display the addition

    return 0;
}