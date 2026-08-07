// Type 2

#include<iostream>
using namespace std;

void Display(int iNo)
{
    if((iNo % 3 == 0) && (iNo % 5 == 0))
    {
        cout<<iNo<<" is divisible by 3 & 5 \n";
    }
    else
    {
        cout<<iNo<<" is not divisible by 3 & 5 \n";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    Display(iValue);

    return 0;
}