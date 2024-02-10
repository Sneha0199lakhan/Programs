import java.util.*;

class Program199
{
    
  public static int  Addition(int Brr[])
   {
     int iCnt = 0;
     int iSum = 0;

     for(iCnt = 0; iCnt<Brr.length; iCnt++);
     {
        iSum = iSum +Brr[iCnt];
     }      
     return iSum ;

   }
    public static void main(String arg[])
    {
       Scanner sobj= new Scanner(System.in);

       int iSize = 0, iCnt= 0, iRet= 0;

       System.out.println("Ente the number of element:");
       iSize = sobj.nextInt();

       int Arr[]= new int [iSize];

       System.out.println("Enter the elements:");
       for(iCnt =0; iCnt<iSize;iCnt++)
       {
        Arr[iCnt]= sobj.nextInt();
       }
     
      iRet= Addition(Arr);

    System.out.println("Addition of all elments is :"+iRet);

        sobj.close();
    }
}