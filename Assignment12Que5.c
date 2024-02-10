//Write a program which accept number from user and return difference  between  summation  of even digits and summation of Odd digits.
/*
Input:2395
Output:-15
Input:1018
Output:6
Input:8440
Output:16
Input:5733
Output:-18
*/
#include<stdio.h>

int CountDiff( int iNo)
{
    int iDigit= 0;
    int iDiff= 0;
    int iEven =0;
    int iOdd= 0;

    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit%2==0)
        {
           iEven=iEven+iDigit;
        }
        else
        {
            iOdd=iOdd+iDigit;

        }
        iNo= iNo/10;
        iDiff=iEven-iOdd;

    }
    return iDiff; 
}

int main()
{
    int iValue= 0;
    int iRet= 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet= CountDiff(iValue);

    printf("%d",iRet);
    return 0;

}