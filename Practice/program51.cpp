#include<iostream>
using namespace std;

class NumberX
{
    public:
        bool SumFactors(int iNo)
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 1; iCnt < (iNo / 2); iCnt++)
            {
                if((iNo % iCnt) == 0)
                {
                    iSum = iSum + iCnt;
                }
                if(iSum > iNo)
                {
                    break;
                }
            }

            if(iSum == iNo)
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

    NumberX nobj = NumberX();

    bRet = nobj.SumFactors(iValue);

    if(bRet == true)
    {
        cout<<"It is perfect \n";
    }
    else
    {
        cout<<"It is no perfect \n";
    }

    return 0;
}

// Time Complexity : O(N/2)
// Where N >= 0