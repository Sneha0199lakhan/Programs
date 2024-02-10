//Write a program which accept number from user and display its factor in decreasing order

#include<stdio.h>

 void FactRev(int iNo)
 {
    int iCnt= 0;
    printf("Factor of number %d are :\n",iNo);

    for(iCnt=(iNo/2); iCnt>=1;iCnt--)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
    }
 }

int main()
{
  int iValue= 0;

  printf("Enter Number:");
  scanf("%d",&iValue);
  
  FactRev(iValue);
    return 0;
}
/*
Input: 12
Output: 6 4 3 2 1

Input: 13
Output: 1

Input: 10
Output: 5 2 1
*/