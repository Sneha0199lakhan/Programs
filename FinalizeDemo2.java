class FinalizeDemo2
{
    public static void main(String arg[])
    {
     
       Empolyee eobj= new Empolyee("Amit", 78000,28,"karve nagar Pune");
       eobj.Display();
       Empolyee eobj2= eobj;
       
       Empolyee eobj3= new Empolyee("Sagar",88000,29,"Prabhat Nagar Mumbai");
      
       System.out.println("Hash code of eobj is : "+eobj.hashCode());
       System.out.println("Hash code of eobj2 is : "+eobj2.hashCode());
       System.out.println("Hash code of eobj2 is : "+eobj3.hashCode());
       
       eobj = null;
       System.gc();
    }
}
class Empolyee
{
    public String Name;
    public int Salary;
    public int Age;
    public String Address;

    Empolyee(String str,int amount, int A,String addr)
    {
       this.Name = str;
       this.Salary = amount;
       this.Age = A;
       this.Address= addr;
    }
    protected void finalize()
    {
        System.out.println("Inside finalize mathod");
    }
    void Display()
    {
        System.out.println("Employee name:"+this.Name);
        System.out.println("Employee Age:"+this.Age);
        System.out.println("Employee Salary:"+this.Salary);
        System.out.println("Employee address:"+this.Address);

    }
}