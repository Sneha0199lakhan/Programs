#include<iostream>
using namespace std;


void Swap(  float &No1, float &No2)
{
     float Temp ;
     Temp = No1;
     No1 = No2;
     No2 = Temp; 
}
int main()
{
  float Value1 = 10.9;
  float Value2 = 20.9;

  cout<<"Value of iValue1 :"<<Value1<<"\n";
  cout<<"Value of iValue1 :"<<Value2<<"\n";

  Swap(Value1, Value2);

  cout<<"Value of iValue1 :"<<Value1<<"\n";
  cout<<"Value of iValue1 :"<<Value2<<"\n";

  return 0;

}