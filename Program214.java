import java.util.*;

class Program214
{
    public static boolean ChekBit( int iNo)
    {
      int iMask= 260;
       int iResult= 0;

      iResult = iNo & iMask;

       if(iResult== iMask)
       {
        return true;
       }
       else
       {
        return false;
       }

    }
    public static void main (String arg[])
    {
       Scanner sobj= new Scanner(System.in);
       int  iNo= 0;
       boolean bRet= false;
       

       System.out.println("Enter number:");
       iNo = sobj.nextInt();

       bRet = ChekBit(iNo);

       if(bRet== true)
       {
        System.out.println(" 3rd & 19th  bit are ON");

       }
       else
       {
         System.out.println("  Bits is OFF");

       }
      
       
    }
}