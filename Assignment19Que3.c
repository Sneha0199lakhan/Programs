//Accept number of row and number of column from user  and display below  pattern.
/*
Input: iRow = 3  iCol=4

Output:  A  A  A  A  A
         B  B  B  B  B 
         C  C  C  C  C
         
*/  
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0,  j = 0;
   char ch ='\0';

   for(i = 1 , ch = 'A'; i<=iRow; i++,ch++)
   {
    for(j= 1, ch ='A'; j<=iCol; j++,ch++)
    {
       printf("%c\t",i);  
    }
     
    printf("\n\n");
    }     
 }
  
int main()
{
  int iValue1 = 0, iValue2= 0;

  printf("Enter the number of rows and columns:");
  scanf("%d %d",&iValue1,&iValue2);

  Pattern(iValue1,iValue2);
  
  return 0;
} 