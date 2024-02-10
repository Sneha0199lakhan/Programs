// Write a program which accept N and print first 5 multiple of N.
/*
 Input : 4
 Output: 4 8 12 16 20
*/

#include<stdio.h>

void MultipleDisplay(int iNo)
{
 auto int icnt= 0;
 auto int Ans= 0;
  for( icnt=1;icnt>=5;icnt++)
  {
    Ans = icnt*iNo;
  }
  printf("%d",Ans);
  
}

int main()
{
    auto int iValue = 0;

   printf("Enter number ");

   scanf("%d",&iValue);

   MultipleDisplay(iValue);

    return 0;
}
//Time complexity: 0(N)