//Write a program  which accept number from user and display its table in reverse order.

/*
Input: 2
Output: 20 18 16 12 10 8 6 4 2 4

Input: 5
Output:  50 45 40 35 30 25 20 15 10  

Input: -5
Output: 50 45 40 35 30 25 20 15 10 
*/

#include<stdio.h>

void Table(int iNo)
{
   auto int icnt= 0;
   auto int Table = 0;
   if (iNo<0)
   {
      iNo = -iNo;
   }
   for(icnt= 10; icnt>=1;icnt--)
   {
     Table = iNo*icnt;
     printf("%d\t",Table);
   } 
}
int main()
{

     auto int iValue= 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Table(iValue);

    return  0;
} 
//Time complexity: 0(N)