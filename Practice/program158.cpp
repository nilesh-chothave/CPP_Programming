#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public :
        int *Arr;
        int iSize;

        // Parametrised Construter
        ArrayX(int X)
        {
            cout<<"Inside construter\n";
            
            iSize = X;                  // Characteristice initialisation
            Arr = new int[iSize];       // Resource allocation
        }

        // Destructor
        ~ArrayX()
        {
            cout<<"Inside destructor\n";

            delete []Arr;       // Resource Deallocation
        }
};

int main()
{
    ArrayX aobj(5);

    return 0;
}