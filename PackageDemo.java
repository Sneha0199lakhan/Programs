import Marvellous.Maths;
import Marvellous.Infosystems.Arthematic;

class PackageDemo
{

    public static void main(String arg[])
    {
      
       Maths mobj = new Maths();
       Arthematic aobj= new Arthematic();
      
       int iRet= 0;
       iRet= mobj.Addition(10,11);
       System.out.println("Addition is :"+iRet);
       
       iRet= aobj.Substraction(11,10);
       System.out.println("Substraction is :"+iRet);
           
    } 

}