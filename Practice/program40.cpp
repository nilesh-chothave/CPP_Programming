#include<iostream>
using namespace std;

class NumberX
{
    void CheckDivisible(int iNo)
    {
        if((iNo % 3 == 0) && (iNo % 5 == 0))
        {
            cout<<"Number is divisible by 3 & 5 \n";
        }
        else
        {
            cout<<"Number is not divisible by 3 & 5 \n";
        }
    }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    CheckDivisible(iValue); // Error

    return 0;
}