
class Multilevel
{
     public static void main(String A[])
     {
         DerivedX dobj = new DerivedX();
         dobj.fun();
         dobj.Gun(); 
     }
}

class Base
{
      public int A,B;
      public Base()
     {
        System.out.println("Base constructor");
     }
     public void fun()
     {
        System.out.println("Base fun");
     } 
}

class Derived extends Base
{
      public int X,Y;
      public Derived()
     {
        System.out.println("Derived constructor");
     }  
      public void Gun()
     {
        System.out.println("Derived Gun ");
     }

}
class DerivedX extends Derived
{
      int P,Q;
      public DerivedX()
      {
        System.out.println("DerivedX constructor");
      }
}