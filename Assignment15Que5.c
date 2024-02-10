//Accept N number from user return product of  all odd elements 
/*
Input :   N: 6
          elements : 15 66 3 70 10 88 
Output:   45

Input :   N: 6
          elements : 44 66 72 70 10 88 
Output:   0

*/
#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{  
    int iCnt = 0;
    int iAns= 0;

     
     for(iCnt = 0; iCnt<iLength; iCnt++)
     {
       if((Arr[iCnt]%2) != 0)
        {
            iAns = iAns * Arr[iCnt];
        }
     }
      return iAns;         

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
    
    iRet = Product(p,iSize);

    printf("Product is %d",iRet);

    free(p);

    return 0;


}




