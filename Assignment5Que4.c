//write a program  which accept three number and print its multiplication
#include<stdio.h>
 int Multiply(int iNo1,int iNo2,int iNo3 )
 {
   
    
    int iAns= 0;
    iAns = iNo1*iNo2*iNo3;
    return iAns;
 }
 int main()
 {

    int iValue1= 0, iValue2=0, iValue3= 0 ,iRet= 0;
    printf("Enter enter three number ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet= Multiply( iValue1,iValue2,iValue3);
    printf("Multiplication is :",iRet);

    return 0; 
 }
