#include<iostream>
using namespace std;

bool CheckEvenOdd(int iNo)
{
    int iRemainder = 0;

    iRemainder = iNo % 2;

    if(iRemainder == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number to check whether it is Even or Odd : ";
    cin>>iValue;

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is Even \n";
    }
    else
    {
        cout<<iValue<<" is Odd \n";
    }

    return 0;
}