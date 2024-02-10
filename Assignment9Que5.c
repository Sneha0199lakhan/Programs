//write  a program which accept area in square feet and conver  it into square meter ( 1 square feet = 0929 square meter) 
/*
Input : 5
Output : 0.4645115

Input : 7
Output : 0.650321
*/

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSquaremeter= 0.0;
    dSquaremeter= iValue* 0.0929;
    return dSquaremeter;

}
int main()
{

    int iValue= 0;
    double dRet= 0.0;

    printf("Enter area in square feet");
    scanf("%d",&iValue);

    dRet= SquareMeter(iValue);

    printf("Merter is SquarMeter is:%f", dRet);

    return 0;

}