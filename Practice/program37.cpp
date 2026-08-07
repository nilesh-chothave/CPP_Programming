// Type 1

#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    if((iValue % 3 == 0) && (iValue % 5 == 0))
    {
        cout<<iValue<<" is divisible by 3 & 5 \n";
    }
    else
    {
        cout<<iValue<<" is not divisible by 3 & 5 \n";
    }

    return 0;
}