
class Program344
{
   public static void main (String arg[])
   {
      SinglyLL obj = new SinglyLL();
      int iRet= 0;

      obj.InsertFirst(51);
      obj.InsertFirst(21);
      obj.InsertFirst(11);

      obj.Display();
      
      iRet = obj.Count();
      System.out.println("Number of elements:"+iRet);
      
      obj.InsertLast(101);
      obj.InsertLast(111);
      obj.InsertLast(121);

      obj.Display();
      
      iRet = obj.Count();
      System.out.println("Number of elements:"+iRet);
      
      obj.DeleteFirst();
      obj.Display();
      
      iRet = obj.Count();
      System.out.println("Number of elements:"+iRet);

      obj.DeleteLast();
      obj.Display();
      
      iRet = obj.Count();
      System.out.println("Number of elements:"+iRet);
   }
}
class node
{
   public int data;
   public node  next;

   public node (int no)
   {
      data = no;
      next = null;
   }
}
class SinglyLL
{
      private node first;
      private int Count;
     
      public SinglyLL()
      {
         first = null;
         Count = 0;
      }
      
      public void InsertFirst(int no)
      {
         node newn = new node(no);
         
         if(first ==null)
         {
           first = newn;
         }
         else
         {
             newn.next= first;
             first= newn;
         }
         Count++;
      }

      public void InsertLast(int no)
      { 
          node newn = new node(no);
         
         if(first ==null)
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
         Count++;
      }

      public void InsertAtPos(int no , int ipos){}
     
      public void DeleteFirst()
      {
        if(first == null)
        {
           return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            first = first.next;
        }
        Count--;
      }


      public void DeleteLast()
      {
         if(first == null)
        {
           return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            node temp = first;
            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;

        }
        Count--;
      }

      public void DeleteAtPos(int ipos){}
      
      public void Display()
      {
        node temp = first;

        System.out.println("Elements of the linked list are:");
        while(temp != null)
        {
           System.out.print("|"+temp.data +" |->");
           temp = temp.next;
        }
        System.out.println("null");
      }

      public int Count()
      {
        return Count;
      }
      
}