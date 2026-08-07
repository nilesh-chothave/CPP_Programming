#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    // Filter
    if(iNo < 0)
    {
        cout<<"Invalid input\n";
        return; 
    }

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        cout<<iCnt<<"\n";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the frequency : ";
    cin>>iValue;

    Display(iValue);

    return 0;
}