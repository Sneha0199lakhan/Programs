// Write a program which accept number from and if number is than 50 then print small , 
//if it is greater than 50 and less than 100 then print  medium ,if it is greater than 100 then print large .
/*
Input : 75
Output : Medium
*/

#include<stdio.h>

void Number(int iNo)
{
  if(iNo>=50)
  {
    printf("small");
  }
  else(iNo<=100)
  {
    printf("Medium");
  }
  else if(iNo<100)
  { 
    printf("Large");
  }

} 
int main()
{

   auto int iValue=0;

    printf("Enter number");
    
    scanf("%d",&iValue);

    Number(iValue);
    
    return 0;
}