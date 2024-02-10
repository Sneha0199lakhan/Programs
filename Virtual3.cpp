#include<iostream>
using namespace std;

class Base
{
   public:
      int i, j, k;
   void Fun()
   {
    cout<<"Inside Base fun\n";}
   void Sun()
   {cout<<"Inside Base Sun\n"; }
   void Gun()
   {cout<<"Inside Base gun\n"; }
   void Run()
   {cout<<"Inside Base Run\n"; }
};
class Derived: public Base
{

    public:
     int a, b;
     void Gun()
     {cout<<"Inside Derived gun\n";} //rdefination
     void Run()
     {cout<<"Inside Base Run\n"; }
};

int main()
{

    Base *bp= new Derived;
     bp->Fun();
     bp-> Gun();
     bp->Sun();
     bp->Run();

     return 0;
}