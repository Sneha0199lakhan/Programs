//Write a program Which accept from user and count Frequency of 2 in it .
/*
Input:2395
Output:1
Input:1018
output:0
Input:9000
Output:0
Input:9224432
Output:3
*/

#include<stdio.h>

int CountTwo(int iNo)
{
  int  iCnt= 0;
  int iDigit =0;
  int iFrequency= 0;


  while(iNo!=0)
  { 
    iDigit= iNo%10;
    iNo=iNo/10;
    if(iDigit==2)
     iFrequency++;
    
  }
  return  iFrequency;
}
int main()
{
    int iValue= 0;
    int iRet= 0;

    printf("Enter Number");
    scanf("%d",&iValue);
    
    iRet=CountTwo(iValue);

    printf("%d",iRet);
    return 0;


}
