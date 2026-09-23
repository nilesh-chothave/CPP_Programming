#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
    // Paraetrised constructor with default argument
        ArrayX(int X =5)
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
    ArrayX *aboj1 = new ArrayX();   // Paramterised constructor
    ArrayX *aboj2 = new ArrayX(15);  // Paramterised constructor

    // Function call

    delete aboj1;
    delete aboj2;

    return 0;
}