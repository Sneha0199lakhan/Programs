
class Program350
{
    public static void main(String arg[])
    {
        int iRet = 0;

        SinglyCircular obj = new SinglyCircular();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);
        
        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

      obj.InsertAtPos(105,5);
        
        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

       obj. DeleteAtPos(5);
         obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);
        
       obj.DeleteFirst();
        obj.DeleteLast();
        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);


            }
}
class node
{
    public int data;
    public node next;

    public node(int no)
    {
        data = no;
        next = null;
    }
}

class SinglyCircular
{
    private node first;
    private node last;
    private int Count;

    public SinglyCircular()
    {
        first = null;
        last = null;
        Count = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = new node(no);

        if((first == null)&&(last==null))   // LL is empty
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }
        last.next= first;
        Count++;
    }

    public void InsertLast(int no)
    {
        node newn = new node(no);

        if((first == null)&&(last==null))   // LL is empty
        {
            first = newn;
            last = newn;
        }
        else
        {
            last.next = newn;
            last= newn;
            last.next= first;
        }
        Count++;
    }

    public void DeleteFirst()
    {
        if((first == null)&&(last==null))       // LL is empty
        {
            return;
        }
        else if(first == last) // LL contains single node
        {
            first = null;
            last = null;
        }
        else        // LL contains more than one node
        {
            first = first.next;
            last.next= first;
        }
        Count--;
    }
    
    public void DeleteLast()
    {
        node temp = first;
       
        if((first == null)&&(last==null))       // LL is empty
        {
            return;
        }
        else if(first == last) // LL contains single node
        {
            first = null;
            last = null;
        }
        else        // LL contains more than one node
        {
            while(temp.next != last)
            {
                temp = temp.next;
            }
           last= temp;
           last.next= first;
        }
        Count--;
    }
    
    public void Display()
    {
        System.out.println("Elements of the Linked List are : ");
     
     if((first != null) &&(last != null))
     {
       
        do
        {
                System.out.print("| "+ first.data +" |->");
                first = first.next;
        }while(first != last.next);

        System.out.println("null");
    }
    }

    public int Count()
    {
        return Count;
    }

    public void InsertAtPos(int no, int ipos)
    {
        node temp  = first;

        if((ipos < 1) || (ipos > (Count+1)))
        {
            System.out.println("Invalid position");
            return;
        }

        if(ipos == 1)
        {
            InsertFirst(no);
        }
        else if(ipos == Count+1)
        {
            InsertLast(no);
        }
        else
        {   
            node newn = new node(no);
            newn.data = no;
            newn.next= null;

            for(int i = 1; i< ipos-1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;

            Count++;
        }
    }

    public void DeleteAtPos(int ipos)
    {
        if((ipos < 1) || (ipos > (Count)))
        {
            System.out.println("Invalid position");
            return;
        }

        if(ipos == 1)
        {
            DeleteFirst();
        }
        else if(ipos == Count)
        {
            DeleteLast();
        }
        else
        {
            node temp = first;
            node targetednode = null;

            for(int i = 1; i< ipos-1; i++)
            {
                temp = temp.next;
            }

        targetednode = temp.next;
        temp.next= temp.next.next;
        
            Count--;
        }
    }
}

