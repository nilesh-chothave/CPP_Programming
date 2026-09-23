#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX()
        {   
            iSize = 5;
            Arr = new int[iSize];
        }

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
    ArrayX *aboj1 = new ArrayX();   // Default constructor
    ArrayX *aboj2 = new ArrayX(5);  // Paramterised constructor

    // Function call

    delete aboj1;
    delete aboj2;

    return 0;
}