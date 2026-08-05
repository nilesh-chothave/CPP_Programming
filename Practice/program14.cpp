#include<iostream>
using namespace std;

int CheckEvenOdd(int iNo)
{
    int iRemainder = 0;

    iRemainder = iNo % 2;

    return iRemainder;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number to check whether it is Even or Odd : ";
    cin>>iValue;

    iRet = CheckEvenOdd(iValue);

    if(iRet == 0)
    {
        cout<<iValue<<" is Even \n";
    }
    else
    {
        cout<<iValue<<" is Odd  \n";
    }

    return 0;
}