#include<iostream>
using namespace std;

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
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

    if(bRet)
    {
        cout<<iValue<<" is Even \n";
    }
    else
    {
        cout<<iValue<<" is Odd \n";
    }

    return 0;
}