#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public :
        int *Arr;       // Charactristic
        int iSize;

        ArrayX(int X)       // Construter
        {

        }
};

int main()
{
    ArrayX aobj(5);

    cout<<sizeof(aobj)<<endl;

    return 0;
}