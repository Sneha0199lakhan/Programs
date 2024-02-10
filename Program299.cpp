#include<iostream>
using namespace std;

template<class T>
 T Addition( T No1, T No2)
{
    T Ans = 0.0;
     Ans = No1 + No2;
     return Ans;
}
int main()
{
  double dValue1 = 10.9, dValue2 = 11.6, dRet = 0.0;
  int    iValue1 = 10, iValue2 = 11, iRet = 0;
  float fValue1 = 10.9, fValue2 = 11.6, Ret = 0.0;
 
 iRet = Addition(iValue1, iValue2);
 cout<<"Addition is : "<<iRet<<"\n";

  dRet = Addition(dValue1, dValue2);
 cout<<"Addition is : "<<dRet<<"\n";

  Ret = Addition(fValue1, fValue2);
 cout<<"Addition is : "<<Ret<<"\n";


  return 0;

}