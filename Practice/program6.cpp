/*
    Algorithm

    START
        Accept first number as No1
        Accept second number as No2
        Perform addition of No1 & No2
        Diplay the result
    STOP
*/

#include<iostream>

using namespace std;

int main()
{
    // Variable cration with default values
    float i = 0.0f, j = 0.0f, k = 0.0;

    cout<<"Enter the first number : \n";
    cin>>i;

    cout<<"Enter the second number : \n";
    cin>>j;

    k = i + j;

    cout<<"Addition is : "<<k<<"\n";
}