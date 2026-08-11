#include<iostream>
using namespace std;

class NumberX
{
    public:
        int SumFactors(int iNo)
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 1; iCnt < (iNo / 2); iCnt++)
            {
                if((iNo % iCnt) == 0)
                {
                    iSum = iSum + iCnt;
                }
            }

            return iSum;
            
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"Enter number : ";
    cin>>iValue;

    NumberX nobj = NumberX();

    iRet = nobj.SumFactors(iValue);

    cout<<"Summation of factors : "<<iRet<<"\n";

    return 0;
}

// Time Complexity : O(N/2)
// Where N >= 0