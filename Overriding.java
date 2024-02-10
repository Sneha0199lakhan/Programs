class Overriding
{
    public static void main(String arg[])
    {
      Base bobj= new Derived();// Upcasting
     // Base bobj= new Base();//Nocasting
     // Derived dobj= new Base();//Downcasting
     //Derived dobj= Derived dobj(); //Nocasting 

      bobj.fun();
      bobj.gun();
      bobj.sun();
      bobj.run();
      //bobj.run(11);
      //bobj.mun();
    } 
}
class Base
{
  public void fun()//1000
  {System.out.println("Inside base fun"); }
  public void gun() //2000
  {System.out.println("Inside base gun"); }
  public void sun()//3000
  {System.out.println("Inside base sun"); }
  public void run()//4000
  { System.out.println("Inside base run"); }

} 
class Derived extends Base
{
    public void fun()//5000
  { System.out.println("Inside Derived fun"); }
   public void sun()//6000
  { System.out.println("Inside Derived sun"); }
 public void run(int A)//7000
  { System.out.println("Inside Derived run"); }  
   public void mun()//8000
  { System.out.println("Inside Derived mun"); }   
}