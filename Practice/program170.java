import java.util.Scanner;

class ArrayX
{
    int Arr[];
    int iSize;

    ArrayX(int x)
    {
        iSize = x;

        Arr = new int[iSize];   // Arr = new int [6]  // Array object
    }

   public void Accept()
   {
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            System.out.print("Enter number "+(iCnt +1)+":");
            Arr[iCnt] = sobj.nextInt();  // 10[0]
        }
   } 

   public void Display()
   {
        int iCnt = 0;
        System.out.println("Entered elements are : ");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
   }

   public int Summation()
   {
        int iCnt = 0, iSum = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;
   }

}
public class program170 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0;

        System.out.println("Enter number of elements : ");
        iLength = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);

        aobj.Accept();
        aobj.Display();

        int iRet = 0;

        iRet = aobj.Summation();

        System.out.println("\nSummation is : "+iRet);
    }
}
