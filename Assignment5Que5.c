//write a program which accept total marks & obtained marks from user and calculate percentage .

#include<stdio.h>

float  Percentage(int iMarks, int iTotal)
{
    float fPercentage= 0.0f;
fPercentage= (((float)iMarks /(float)iTotal)*100);
  return  fPercentage;

}
int main()
{
   int iValue1= 0; 
   int iValue2= 0;
   float fRet= 0.0;

   printf("Please enter total marks ");
   scanf("%d",&iValue1);

   printf("Please enter obtained marks ");
   scanf("%d",&iValue2);

   fRet= Percentage(iValue1,iValue2);
   printf("Percentage is %f :",fRet);
    return 0;
}
/*
Input :  745 1000
Output : 74.5 
*/