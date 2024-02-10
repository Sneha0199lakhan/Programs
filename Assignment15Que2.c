//Accept N number from user  accept one another number as No , return index of first  occurence of that No.
/*
Input :   N: 6
          No: 66
          elements : 85 66 11 80 93 68 
Output:   1
Input :   N: 6
          No : 12
          elements : 85 66 3 80 93 68 
Output: -1

*/

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength,int iNo)
{  
    int iCnt = 0;
    int iFirst= -1;

     
     for(iCnt = 0; iCnt<iLength; iCnt++)
     {
        if(iNo == Arr[iCnt])
        {
           return iCnt;
        }

     }
      return iFirst;         

}
int main()
{
    int iSize= 0, iCnt= 0, iValue= 0;
    int *p= NULL;
    int iRet = 0;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    printf("Enter the number ");
    scanf("%d",&iValue);

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
    
    iRet = FirstOcc(p,iSize,iValue);

    if(iRet == -1)
     {
       printf("There is no such number ");
     }
     else
     {
        printf("First occurence of number is %d",iRet);
     }

    
    free(p);

    return 0;


}
