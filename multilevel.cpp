#include<iostream>
using namespace std;

class Demo
{
   public:
       int x,y;
       Demo()
       {
         cout<<"Inside Demo contructor\n";
         x= 10;
         y= 20;
       }
      ~Demo()
      {
        cout<<"Inside Demo destructor\n";
      }
      void fun()
      {
        cout<<"Inside fun of Demo\n";
      }
};

//class Hello extends Demo    
class Hello:public Demo
{
  public:
      int a,b,c;
      Hello()
      {

         cout<<"Inside Hello contructor\n";
         a= 30;
         b= 40;
         c= 50;
      }
      ~Hello()
      {
        cout<<"Inside Hello destructor\n";

      }
      void gun()
      {
        cout<<"Inside gun of hello\n";

      }
};

class Marvellous :public Hello
{
    public :
      int p;

      Marvellous()
      {

        cout<<"Inside constuctor of Marvellous\n";
        p= 60;
      } 
      ~Marvellous()
      {
        cout<<"Inside destuctor of Marvellous\n";
      }
      void sun()
      {
        cout<<"Inside sun of Marvellous\n";
      }
};

int main()
{
   
Marvellous mobj;
  cout<<sizeof(mobj)<<"bytes\n";

 cout<<mobj.x<<"\n"; 
 cout<<mobj.y<<"\n";
 cout<<mobj.a<<"\n";
 cout<<mobj.b<<"\n";
 cout<<mobj.c<<"\n";
 cout<<mobj.p<<"\n";


 mobj.fun();
 mobj.gun();
 mobj.sun();
    return 0;
}