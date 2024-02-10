//Accept N number from user and display all such  elements which are divisible  by 5.
/*
Input: N:6
       Elements:85 66 3 15 93 88

Output: 15        
*/
#include<stdio.h>
#include<stdlib.h>

 void Display( int Arr[],int iLength)
{
   int iCnt = 0;

   for( iCnt = 0; iCnt<iLength; iCnt++)
   {
       if(((Arr[iCnt]%5)==0) && ( (Arr[iCnt]%3)==0))
       {
          printf(" %d\n",(Arr[iCnt]));
       }
   } 
     printf( "\n"); 
}

int main()
{

    int iSize= 0,iRet=0, iCnt=0;
    int *p= NULL;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

  printf("Enter %d elements  elements\n ",iSize);

  for(iCnt=0; iCnt<iSize; iCnt++)
  {
       printf("Enter the element %d : ",iCnt+1);
       scanf( "%d",&p[iCnt]);
  }

   Display(p, iSize);
  
  free(p);
  
  return 0;
}