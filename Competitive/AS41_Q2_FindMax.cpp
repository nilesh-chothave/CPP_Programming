#include<iostream>
using namespace std;

template <class T>
T Max(T No1, T No2, T No3)
{
    if(No1 > No2 && No2 > No3)
    {
        return No1;
    }
    else if ( No2 > No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
    
}

int main()
{
    int iRet = Max(10,55,30);

    printf("%d\n",iRet);

    float fRet = Max(10.5f,40.5f,30.5f);

    printf("%f\n",fRet);

    return 0;
}