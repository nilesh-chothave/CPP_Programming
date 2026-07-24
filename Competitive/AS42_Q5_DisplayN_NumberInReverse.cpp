/*
    5. Write generic program to accept N values and reverse the contents.

    Input : 10 20 30 10 30 40 10 40 10
    Output : 10 40 10 40 30 10 30 20 10
*/

#include<iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    T *Start = NULL;
    T *End = NULL;
    T temp;

    Start = arr;
    End = arr + iSize-1;

    while(Start < End)
    {
        temp =  *Start;
        *Start = *End;
        *End = temp;

        Start++;
        End--;
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int i = 0;

    for(i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<< endl;

    Reverse(arr,9);

    for(i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;
}