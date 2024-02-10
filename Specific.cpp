#include<iostream>
using namespace std;

int AdditionI (int no1,int no2)
{
   int Ans= 0;
   Ans = no1+no2;
   return Ans;
}

float AdditionF (float no1,float no2)
{
   float Ans= 0;
   Ans = no1+no2;
   return Ans;
}

double AdditionD (double no1,double no2)
{
   Double Ans= 0;
   Ans = no1+no2;
   return Ans;
}
int main()
{
  int iRet =0;
  float fRet = 0.0f;
  double dRet = 0.0;

  iRet = AdditionI(10,11);
  fRet= AdditionF(10.0f,11.0f);
  dRet= AdditionD(10.0,11.0);

  cout<<iRet<<"\n";
  cout<<fRet<<"\n";
  cout<<dRet<<"\n";  
  
    return 0;
}