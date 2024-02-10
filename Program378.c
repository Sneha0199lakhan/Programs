#include<stdio.h>

int SumFactorR(int iNo)
{
  static int iCnt = 1;
   static int iSum= 0;

    if(iCnt<=(iNo/2))
     {
        if((iNo%iCnt)==0)
        {

          iSum = iSum +iCnt;        
        
        }
         iCnt++;
         SumFactorR(iNo);
    }
    return iSum;
}


int main()
{
  int iValue = 0; 
  int iRet = 0;

  printf("Enter the number :\n");
  scanf("%d", &iValue);

  iRet = SumFactorR(iValue);
  printf("Addition of Factor is : %d\n",iRet);

  

  return 0;
}