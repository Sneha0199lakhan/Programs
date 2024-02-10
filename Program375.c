#include<stdio.h>

void Factor(int iNo)
{
     int iCnt = 1;

    while(iCnt<=(iNo/2))
     {
        if((iNo%iCnt)==0)
        {
        printf("%d\n",iCnt);
       
        }
         iCnt++;
     }
}


int main()
{
  int iValue = 0; 

  printf("Enter the number :\n");
  scanf("%d", &iValue);

  Factor(iValue);
  
  return 0;
}