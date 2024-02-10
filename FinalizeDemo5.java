
class FinalizeDemo5 
{
    public static void main(String arg[])
    {
      Employee eobj1= new Employee("Amit", 70000,28,"karve nagar Pune");
      System.out.println(eobj1);   // it calls toString method internally 

    }
}
class Employee 
{
    public String Name;
    public int Salary;
    public int Age;
    public String Address;

    Employee(String str, int amount, int A, String addr)
    {
       this.Name = str;
       this.Salary = amount;
       this.Age = A;
       this.Address= addr;
    }
    void Display()
    {
        System.out.println("Employee name:"+this.Name);
        System.out.println("Employee Age:"+this.Age);
        System.out.println("Employee Salary:"+this.Salary);
        System.out.println("Employee address:"+this.Address);

    }
    public String toString()
    {
        return Name+" "+Salary+" "+Age+" "+Address;
    }
}