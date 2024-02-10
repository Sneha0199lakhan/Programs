     
//write a program which accept number from user and return the count of Odd Digit.
/*
Input:2395
Output:3
Input:1018
Output:2
Input:-1018
Output:2
Input:8462
Output:0
*/
#include<stdio.h>

int CountOdd(int iNo)
{
  int  iCnt= 0;
  int iDigit =0;


  while(iNo!=0)
  { 
    iDigit=(iNo%10);
    iNo=iNo/10;
    if(iDigit % 2 != 0)
    iCnt++;
  }
  return iCnt;  
}
 
int main()
{

    int iValue= 0;
    int iRet= 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet= CountOdd(iValue);
    printf("%d",iRet);
    return 0;
} 