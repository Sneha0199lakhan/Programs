import java.util.*;

class Program190
{
    public static void EvenOddFactors(int iNo)
    {
       int iFact = 1;
       int iCnt = 0;

       int iSumEven= 0;
       int iSumOdd= 0;
       
    for (  iCnt = 1;iCnt<= iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            if((iCnt%2)==0)
            { 
              iSumEven = iSumEven+iCnt;  
            }
            else
            {
                iSumOdd= iSumOdd+iCnt;
            }

        }
    }System.out.println("Even factor is :"+iSumEven);
    System.out.println("Odd factor is :"+iSumOdd);
    
 }
    public static void main(String arg[])
    {
       Scanner sobj= new Scanner(System.in);
        
        int iValue =0;

        System.out.println("Enter number:");
        iValue = sobj.nextInt();
      
        EvenOddFactors(iValue);
        sobj.close();

    }
}