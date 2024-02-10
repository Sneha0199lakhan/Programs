import java.util.*;
import LB.Matrix;

 public class Assignment46Que1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);
        int iRet = 0;

        mobj.Accept();
        mobj.Display();

        iRet = mobj.AddDiagomnal();
        System.out.println("Addition of Diagonal is: "+iRet);

        mobj = null;
        System.gc();
    }
}
class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int  AddDiagomnal() 
    {
      int i = 0, j = 0, iSum= 0;

      for(i = 0; i<Arr.length; i++)
      {
        for(j = 0; j<Arr[i].length;j++)
        {
             if(i==j)
             {
                 iSum=iSum+ Arr[i][j];
             }
            return iSum;
        }
      }
    }
}
