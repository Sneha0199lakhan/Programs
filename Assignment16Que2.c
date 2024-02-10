//Accept N number from user return  the smallest number  
/*
Input :   N: 6
          elements : 85 66 3 66 93 88 
Output:   3

*/
#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{  
    int iCnt = 0;
    int iMin= Arr[0];

     
     for(iCnt = 0; iCnt<iLength; iCnt++)
     {
       if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
     }
      return iMin;         

}
int main()
{
    int iSize= 0, iCnt= 0;
    int *p= NULL;
    int iRet = 0;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p= (int*) malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter %d elements ",iSize);

    for( iCnt= 0; iCnt< iSize; iCnt++)
    {
        printf("Enter element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    iRet = Minimum(p,iSize);

    printf("Smallest  number is %d",iRet);

    free(p);

    return 0;


}




