// Accept N number from user  and return difference  between frequency of even and odd number
/*
Input :   N: 7
          elements : 85 66 3 80 93 88 90
Output: 1          

*/ 
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
     int iCnt = 0,iEvenCnt = 0, iOddCnt= 0;
     int iDiff = 0;

     for( iCnt= 0; iCnt<iLength; iCnt++)
     {
        if((Arr[iCnt]%2)==0)
        {
            iEvenCnt++;
        }
        else 
        {
            iOddCnt++;
        }
     iDiff =   iOddCnt -iEvenCnt;
     return iDiff;   
     }

}

int main()
{
      int iSize= 0, iCnt = 0,  iRet= 0;
      int *p = NULL;
       
      printf("Enter number of elements");
      scanf("%d",&iSize);

      p= (int *)malloc(iSize * sizeof(int));

      if (p == NULL)
      {
        printf("Unable to allocate  memory ");
        return -1;
      }

      printf("Enter %d elements ",iSize);

      for( iCnt=0; iCnt<iSize ; iCnt++)
      {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
      }

      iRet = Frequency(p,iSize);

      printf("%d",iRet);

      free(p);

      return 0; 
}