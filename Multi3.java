class Multi3
{
    public static void  main(String arg[])
    {

      System.out.println(" Current Thread is :"+Thread.currentThread().getName());
       Demo obj1= new Demo();
       Demo obj2= new Demo();
  
       obj1.setName("First_Thread");
       obj2.setName("Second_Thread");
       
       obj1.start();
       obj2.start();

       
    } 
}
class Demo extends Thread
{
    public void run()
    {
        String name = Thread.currentThread().getName();

          System.out.println(" Current Thread is :"+name);
          for(int i = 1; i<1000; i++)
          {
             System.out.println("Nameof thread is : "+name+ "with counter"+i);
  
          }
    }
}