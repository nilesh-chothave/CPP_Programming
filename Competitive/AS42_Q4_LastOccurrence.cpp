/*
    4. Write generic program to accept N values and search last occurrence of any
    specific value.

    Input : 10 20 30 10 30 40 10 40 10
    Value to search : 40
    Output : 8
*/
template <class T>
int SearchLast(T *arr, int iSize, T No)
{
    int i = 0;
    int iLast = 0;

    for(i = 0; i < iSize; i++)
    {
        if(*arr == No)
        {
            iLast = i;
        }
        arr++;
    }

    if(iLast != 0)
    {
        return iLast+1;
    }

    return -1;
}

#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};

    int iRet = SearchLast(arr,9,40);

    cout<<iRet<<endl;   // 8

    return 0;
}