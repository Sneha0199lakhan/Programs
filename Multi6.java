class Multi6
{
    public static void  main(String arg[])  throws Exception
    {

      System.out.println(" Current Thread is :"+Thread.currentThread().getName() );
       Demo obj1= new Demo();
       Demo obj2= new Demo();

      obj1.setPriority(8);
      obj2.setPriority(10);     
  
       obj1.start();
       obj2.start();

      System.out.println("Priority of obj1"+obj1.getPriority());
      System.out.println("Priority of obj2"+obj2.getPriority()); 

     } 
}
class Demo extends Thread
{
    public void run()
    {}
    
}