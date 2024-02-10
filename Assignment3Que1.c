//Write a program which accept one number from user and print that number of even number on screen
#include<stdio.h>

void PrintEven(int iNo)
{
    if (iNo<= 0)
    {
        iNo = -iNo;
    }
    for(iNo=1; iNo<20; iNo++) 

    if((iNo%2)==0)
    {
        printf("%d\t",iNo);
    }

}
int main()
{
    int iValue = 0;
     
     printf("Enter number \n");
     scanf("%d",&iValue);

     PrintEven(iValue);

    return 0;

}
/*
Input: 7
Output: 1 2 4 6 8 12
*/