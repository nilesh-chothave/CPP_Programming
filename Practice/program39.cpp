// Type 2

#include<iostream>
using namespace std;

bool CheckNumberDivisible(int iNo)
{
    if((iNo % 3 == 0) && (iNo % 5 == 0))
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
    bool bRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    bRet = CheckNumberDivisible(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is divisible by 3 & 5 \n";
    }
    else
    {
        cout<<iValue<<" is not divisible by 3 & 5 \n";
    }

    return 0;
}