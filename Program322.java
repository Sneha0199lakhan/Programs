import java.util.*;

class Program322
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol= 0;

        System.out.println("Enter umber of  Rows:");
        iRow = sobj.nextInt();

       System.out.println("Enter umber of  Colunms:");
       iCol = sobj.nextInt();

       int Arr[][]= new int [iRow][iCol];
       int i = 0, j= 0;
       

       System.out.println("Enter the elements:");
       for( i = 0; i<iRow; i++)
       {
         for(j = 0; j<iCol; j++)
         {
            Arr[i][j]= sobj.nextInt();
         }
       }
      
       Matrix mobj= new Matrix();
       mobj.Display(Arr);
       int iRet = 0;

       iRet = mobj. Summetion(Arr);
       System.out.println("Summetion of matrix is "+iRet);
       

}
}
class Matrix
{
     public void Display(int Arr[][])
    {
      int i = 0, j = 0;

      System.out.println("Entered elements are:");
     for( i = 0; i<Arr.length; i++)
       {
         for(j = 0; j<Arr[i].length; j++)
         {
            System.out.print(Arr[i][j]+"\t");
         }
        System.out.println();
       }

    }

    public int  Summetion(int Arr[][])
    {
        
      int i = 0, j = 0;
      int iSum = 0;

      
     for( i = 0; i<Arr.length; i++)
       {
         for(j = 0; j<Arr[i].length; j++)
         {
            iSum= iSum + Arr[i][j];
         }
    
       }
       return iSum;


    }
}
