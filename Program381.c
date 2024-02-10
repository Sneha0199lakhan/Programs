#include<stdio.h>

  void  SumDigitsR(int iNo)
{
     int iDigit  = 0;
     static int iSum   =0;
     
     if (iNo != 0)
     {
        iDigit = iNo %10;
        printf("%d\n",iDigit);
        iSum = iSum + iDigit;
        iNo = iNo/10;
        SumDigitsR(iNo);
     }
     

}

int main()
{
  int iValue = 0; 
  int iRet = 0;

  printf("Enter the number :\n");
  scanf("%d", &iValue);

iRet= SumDigitsR(iValue);
 printf("summtion of Digits : %d\n",iRet); 

  

  return 0;
}