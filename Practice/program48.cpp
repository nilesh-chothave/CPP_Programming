#include<iostream>
using namespace std;

class NumberX
{
    public:
        void SumFactors(int iNo)
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
            cout<<"Summation of factors : "<<iSum;
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    NumberX nobj = NumberX();

    nobj.SumFactors(iValue);

    return 0;
}

// Time Complexity : O(N/2)
// Where N >= 0