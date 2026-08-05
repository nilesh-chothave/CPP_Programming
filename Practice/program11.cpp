/*
    ALGORITHM
    
    START
        Accept number as No
        if No is completely divisble by 2
            then print even
        otherwise
             print odd
    STOP
    
    START
        Accept number as no
        divide no by 2
        If remainder is 0
            then print as even
        otherwise
            print as odd
    STOP
*/

#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        cout<<"Number is Even\n";
    }
    else
    {
        cout<<"Number is Odd\n";
    }

    return 0;
}