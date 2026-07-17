#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public :
        int *Arr;       // Charactristic
        int iSize;
};

int main()
{
    ArrayX aobj;

    cout<<sizeof(aobj)<<endl;       // 12 bytes due to # pragma pack

    return 0;
}