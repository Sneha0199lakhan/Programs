//write a pogram which accept two numbers and check whether number are equal or not .
/*
Input :10 10
Output: equal

Input :10 12
Output: Not equal 

Input: 10 -10
Output: Not equal
*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{
 if(iNo1==iNo2)
 {
    return TRUE;
 }
 else
 {
    return FALSE;
 }

}
int main()
{
    int  iValue1= 0;
    int iValue2= 0;
    BOOL bRet= FALSE;

    printf(" Please enter two numbers ");
    scanf("%d %d",&iValue1, &iValue2);

    bRet= ChkEqual(iValue1,iValue2);
    if(bRet==TRUE)
    {
      printf("Equal");

    }
    else
    {
      printf("Not equal");
    }
    return 0;
}