#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string sName = {'\0'};
    int iAge = 0;
    float fMark = 0.0f;

    cout<<"Enter you name : \n";
    cin>>sName;

    cout<<"Enter your age : \n";
    cin>>iAge;

    cout<<"Enter your marks : \n";
    cin>>fMark;

    cout<<"Name : "<<sName<<"\n";
    cout<<"Age : "<<iAge<<"\n";
    cout<<"Mark : "<<fMark<<"\n";

    return 0;
}