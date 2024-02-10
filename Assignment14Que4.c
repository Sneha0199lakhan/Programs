// Accept N number from user  and  return freqeuncy of 11 form it .
/*
Input :   N: 6
          elements : 85 66 3 80 93 88 
Output: 0  
Input :   N: 6
          elements : 85 11 3 80 11 111
Output: 2            

*/ 
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
     int iCnt = 0;
     int iFrequency= 0;

     for( iCnt= 0; iCnt<iLength; iCnt++)
     {
        if(Arr[iCnt]==11)
        {
            iFrequency++;
        }
     
        }
      return  iFrequency;  

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