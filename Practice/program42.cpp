#include<iostream>
using namespace std;

class NumberX
{
    public:
        void CheckDivisible(int iNo)
        {
            if((iNo % 3 == 0) && (iNo % 5 == 0))
            {
                cout<<"Number is divisible by 3 & 5 \n";
            }
            else
            {
                cout<<"Number is not divisible by 3 & 5 \n";
            }
        }
};

int main()
{
    int iValue = 0;
    NumberX nobj;      // object creation type 2

    cout<<"Enter number : ";
    cin>>iValue;

    nobj.CheckDivisible(iValue);

    return 0;
}