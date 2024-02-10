//Write a program which accept N from user and print all odd numbers up to N.
/*
Input :18
Output: 1 3 5 7 9 11 13
*/ 
#include<stdio.h>
 void OddDisplay(int iNo)
 { 
    int icnt= 0;
     
   for (icnt=1 ;icnt<=iNo;icnt++)
   {
    if ((iNo%2)!=0)
    {
        printf("%d",icnt);
    }
   }
 }
 int main()
 {
    int iValue= 0;
    
    printf("Enter number ");

    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;

 }
 //Time complexity: 0(N)