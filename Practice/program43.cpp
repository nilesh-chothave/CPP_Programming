#include<iostream>
using namespace std;

class NumberX
{
    public:
        static bool CheckDivisible(int iNo)
        {
            if((iNo % 3 == 0) && (iNo % 5 == 0))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number : ";
    cin>>iValue;

    bRet = NumberX::CheckDivisible(iValue);

    if(bRet == true)
    {
        cout<<"Number is divisible by 3 & 5 \n";
    }
    else
    {
        cout<<"Number is not divisible by 3 & 5 \n";
    }

    return 0;
}