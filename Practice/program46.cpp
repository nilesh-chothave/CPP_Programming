#include<iostream>
using namespace std;

class NumberX
{
    public:
        void DisplayFactors(int iNo)
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt < iNo ; iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    cout<<iCnt<<"\n";
                }
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    NumberX nobj = NumberX();

    nobj.DisplayFactors(iValue);

    return 0;
}

// Time Complexity : O(N)
// Where N >= 0