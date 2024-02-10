
class Program343
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

      public void InsertLast(int no){}
      public void InsertAtPos(int no , int ipos){}
      public void DeleteFirst(){}
      public void DeleteLast(){}
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