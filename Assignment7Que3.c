//write a program to find factorial of given number
/*
Input : 5
Output: 120

Input:-5
Output:120

Input : 4
Output : 24
*/

#include<stdio.h>
int Factorial(int iNo)
{   
  auto int icnt=0;
  auto int  Fact= 1;
 if (iNo<0)
   {
      iNo = -iNo;
   }
  for(icnt= 1; icnt<=iNo;icnt++)
   {
       Fact=Fact*icnt; 
   }
      return Fact;
}
int main()
{
  int iValue = 0, iRet=0;

printf("Enter number");
scanf("%d",&iValue);

iRet= Factorial(iValue);

printf("Factorial of number is %d",iRet);

return 0;
    
}
//Time complexity: 0(N)