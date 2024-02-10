import java.util.*;

class OOP
{
    public static void main(String arg[])
    {
        int No1= 0, No2= 0, Ans= 0;
        Scanner sobj= new Scanner (System.in);

        System.out.println("Enter first number");
        No1= sobj.nextInt();

        System.out.println("Enter Second number");
        No2= sobj.nextInt();
        
        Arthematic aobj= new Arthematic(No1,No2);

        Ans= aobj.Addition();
        System.out.println("Addition is: "+Ans);

         Ans= aobj.Substraction();
        System.out.println("Substraction is: "+Ans);
        
    }
}
class Arthematic
 {
       public int Value1;
       public int Value2;
     // Arthematic aobj = new Arthematic (No1,No2);
     // Arthematix aobj = new Atematic(15, 7); 
       
       public Arthematic(int A, int B)
       {
           this.Value1= A;
           this.Value2= B;
       }

       public int Addition() 
      {
         int Result= 0;
         Result= this.Value1+this.Value2;
         return Result;
      }

       public int Substraction() 
      {
         int Result= 0;
         Result= this.Value1-this.Value2;
         return Result;
      }

}
