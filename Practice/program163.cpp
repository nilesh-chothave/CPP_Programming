#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int X)
        {   
            iSize = X;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            delete []Arr;
        }
};

int main()
{
    ArrayX *aboj1 = new ArrayX(5);

    // Logic (Function call)
    cout<<aboj1->iSize<<"\n";

    aboj1->iSize = 0;   // Issue

    aboj1->Arr = NULL;  // Issue

    delete aboj1;

    return 0;
}