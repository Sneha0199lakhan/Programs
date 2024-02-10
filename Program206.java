import java.util.*;

class Program206
{
    public static int  CountCapital(String str)
    {
         int iCnt = 0;
         int iCount= 0;

         char Arr[]= str.toCharArray();

        for (iCnt= 0; iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]>='A')&&(Arr[iCnt]<='Z'))
            {
                iCount++;
            }
            
        }
       return iCount;
    }
    public static void main(String arg[])
    {
       Scanner sobj= new Scanner(System.in);
       int iRet = 0;
        String str = null;

        System.out.println("Enter string:");
        str = sobj.nextLine();

   iRet = CountCapital(str);
   System.out.println("Number of capital character are :"+iRet);
        sobj.close();
    }
}