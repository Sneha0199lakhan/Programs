#include<stdio.h>

void FactorR(int iNo)
{
   static  int iCnt = 1;

    if(iCnt<=(iNo/2))
     {
        if((iNo%iCnt)==0)
        {
        printf("%d\n",iCnt);
        
        
        }
         iCnt++;
         FactorR(iNo);
     }
}


int main()
{
  int iValue = 0; 

  printf("Enter the number :\n");
  scanf("%d", &iValue);

  FactorR(iValue);
  
  return 0;
}