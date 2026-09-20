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
    ArrayX aobj;        // Error

    cout<<sizeof(aobj)<<endl;       // 12 bytes

    return 0;
}