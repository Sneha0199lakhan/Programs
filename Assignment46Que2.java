import java.util.*;
import LB.Matrix;

 public class Assignment46Que2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;
        int value = 0;

        System.out.println("Enter the number :");
        value  = sobj.nextInt();

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);
        int iRet = 0;

        mobj.Accept();
        mobj.Display();

        iRet = mobj.Frequency();
        System.out.println("frequency  of  number is: "+iRet);

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

    public int Frequency( int iNo) 
    {
      int i = 0, j = 0, iFreqeuncy =  0;

      for(i = 0; i<Arr.length; i++)
      {
        for(j = 0; j<Arr[i].length;j++)
        {
             if(Arr[i][j]==iNo)
             {
                 iFreqeuncy++;
             }
            return iFreqeuncy;
        }
      }
    }
}
