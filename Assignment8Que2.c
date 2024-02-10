//Accept amount in Us  dollar and return its corresponding value in Indian currenccy.
/*
consider 1$ as 70 ruppes
Input:10
Output: 700
Input:3
Output:210
Input:1200
Output:  84000
*/

#include<stdio.h>

int DollarToINR(int iNo)
{
     int rupees= 0;
     rupees= iNo*70;
     return rupees;

}
int main()
{
    int iValue = 0, iRet= 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=DollarToINR(iValue);

    printf("Value in INR is %d ",iRet);
    
    return 0;
}