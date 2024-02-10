// Customised Database Management System

class Program355
{
    public static void main(String Arg[])
    {
        DBMS obj = new DBMS();

        obj.InsertIntoTable("Amit","Pune",89);
        obj.InsertIntoTable("Pooja","Mumbai",95);
        obj.InsertIntoTable("Gauri","Pune",90);
        obj.InsertIntoTable("Rahul","Satara",80);
        obj.InsertIntoTable("Neha","Pune",78);

        obj.SelectStarFrom();

        obj.SelectStarFromWhereCity("Pune");
        obj.SelectCount();
        obj.SelectSum();
        obj.SelectAvg();
        obj.SelectMax();
        obj.SelectMin();
    }
}
class node
{
   private static int Counter = 1;

    public int Rno;
    public String Name;
    public String City;
    public int Marks;

    public node next;

    public node(String B, String C, int D)
    {
        Rno = Counter;
        Counter++;

        Name = B;
        City = C;
        Marks = D;
        next = null;
    }
}

class DBMS
{
    private node first;

    public DBMS()
    {
        first = null;
        System.out.println("DBMS initailised succesfully...");
        System.out.println("Student Table gets created succesfully...");
    }

    // InsertLast
    // insert into table student values(1,'Amit','Pune',89);
    public void InsertIntoTable( String Name, String City, int Marks)
    {
        node newn = new node(Name,City,Marks);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            node temp = first;
            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
        }
        System.out.println("One record gets inserted succesfully...");
    }

    // Display
    // select * from student
    public void SelectStarFrom()
    {
        System.out.println("Data from the student table is : ");

        node temp = first;

        System.out.println("--------------------------------------------------------------");
        while(temp != null)
        {
            System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            temp = temp.next;
        }
        System.out.println("--------------------------------------------------------------");
    }

     // select * from student City =_____
    public void SelectStarFromWhereCity(String str)
    {
        System.out.println("Data from the student table is : ");

        node temp = first;

        System.out.println("--------------------------------------------------------------");
        while(temp != null)
        {
            if(str.equals(temp.City))
            {
                System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            }
            temp = temp.next;
        }
        System.out.println("--------------------------------------------------------------");
    }

    public void SelectCount()
    {
        node temp = first;

        int iCnt = 0;

        while(temp != null)
        {
            temp = temp .next;
            iCnt++;
        }
        System.out.println("Number of records in the table:"+iCnt);
    }

    
    public void SelectSum()
    {
        node temp = first;

        int iSum= 0;

        while(temp != null)
        {
            iSum = iSum + temp.Marks;
            temp = temp .next;
        }
        System.out.println("summetion of marks colums :"+iSum);
    }

     public void SelectAvg()
    {
        node temp = first;

        int iSum= 0;
        int iCnt = 0;

        while(temp != null)
        {
            iSum = iSum + temp.Marks;
            temp = temp .next;
            iCnt++;
        }
        System.out.println("Avagre of marks colums :"+((float)(float)iSum/(float)iCnt));
    }

     public void SelectMax()
     {
        node temp = first;

        int iMax= 0;
        int iCnt = 0;

        if(temp != null)
        {
            iMax = temp.Marks;
        }

        while(temp != null)
        {
            if(temp.Marks > iMax)
            {
                iMax = temp.Marks;
            }
            temp= temp.next;
        }
        System.out.println("Largest of marks colums :"+iMax);
    }
    public void SelectMin()
     {
        node temp = first;

        int iMin= 0;
        int iCnt = 0;

        if(temp != null)
        {
            iMin = temp.Marks;
        }

        while(temp != null)
        {
            if(temp.Marks < iMin)
            {
                iMin = temp.Marks;
            }
            temp= temp.next;
        }
        System.out.println("Smallest of marks colums :"+iMin);
    }



}

