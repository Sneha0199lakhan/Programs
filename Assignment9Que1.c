//Write a program which accept radius of circle from user and calculate its Area.
//Consider value of PI as 3.14 (Area = PI*Radius*Radius)
/*
Input: 5.3 
OutPut: 88.2026

Input: 10.4
OutPut: 339.6224
*/
#include<Stdio.h>

double CircleArea(float fRadius)
{  
   auto double dArea= 0.0;
   auto const float PI= 3.14;
   dArea =  PI* fRadius*fRadius;
   return dArea;
}

int main()
{

    float fValue= 0.0;
    double dRet= 0.0;

    printf("Enter radius ");
    scanf("%f",&fValue);

    dRet= CircleArea(fValue);

    printf("Area of circle is %lf :",dRet);
}