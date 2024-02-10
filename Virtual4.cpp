#include<iostream>
using namespace std;

class Base
{
   public:
      int i, j, k;
 virtual  void Fun()  //1000
   {
    cout<<"Inside Base fun\n";}
   void Sun()  //2000
   {cout<<"Inside Base Sun\n"; }
    virtual void Gun()  //3000
   {cout<<"Inside Base gun\n"; }
   void Run()   //4000
   {cout<<"Inside Base Run\n"; }
};
class Derived: public Base
{

    public:
     int a, b;
virtual void Gun()   //5000
     {cout<<"Inside Derived gun\n";} //rdefination
     void Run()  //6000
     {cout<<"Inside Base Run\n"; }
         virtual  void Mun()  //7000
     {cout<<"Inside Base Mun\n"; }
};

int main()
{
   cout<<sizeof(Base)<<"\n";
   cout<<sizeof(Derived)<<"\n";
    Base *bp= new Derived;
     bp->Fun();
     bp-> Gun();
     bp->Sun();
     bp->Run();

     return 0;
}