import java.util.*;

class Program195
{
    
    public static void main(String arg[])
    {
       Scanner sobj= new Scanner(System.in);

       int iSize = 0, iCnt= 0;

       System.out.println("Enter the number of element:");
       iSize = sobj.nextInt();

       int Arr[]= new int [iSize];

       System.out.println("Enter the elements:");
       for(iCnt =0; iCnt<iSize;iCnt++)
       {
        Arr[iCnt]= sobj.nextInt();
       }
        sobj.close();
    }
}