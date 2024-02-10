//Accept N number from user  and  accept  one another number  as No, check whether No is present  or not.
/*
Input :   N: 6
          No: 66
          elements : 85 66 11 80 93 68 
Output:   No is present
Input :   N: 6
          No : 12
          elements : 85 66 3 80 93 68 
Output: No is absent
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 0
#define FALSE 1

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{  
    int iCnt = 0;
     
     for(iCnt = 0; iCnt<iLength; iCnt++)
     {
        if(Arr[iCnt]==iNo)
        {
           return  TRUE;
        }
     }
     return FALSE;

}
int main()
{
    int iSize= 0, iCnt= 0, iValue= 0;
    int *p= NULL;
    BOOL bRet= FALSE;

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

    bRet= Check(p,iSize,iValue);
    if(bRet== TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is absent");
    }
    free(p);

    return 0;


}