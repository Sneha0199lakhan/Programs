#include<iostream>
using namespace std;

class Demo
{
public:
   int i;
   int j;

    Demo() //Defalut constructor
    {
         cout<<"Inside default constructor\n";
           i= 0;
           j=0;

    }
    Demo(int A, int B)  //paramerterised constructor

    {
         cout<<"Inside parameterised constructor\n";
           i= A;
           j= B;

    }
   Demo (Demo &ref) //copy constructor

   {
        cout<<"inside Copy constructor\n";
          i= ref .i;
          j= ref .j;

   }
   ~Demo() //destructor
   {

        cout<<"Inside Destructor\n";
   }
};

int main()
{

Demo obj1;
Demo obj2(11,21);
Demo obj3(obj2); 

    return 0 ;
}