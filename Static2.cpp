#include<iostream>
using namespace std;

class Demo
{
   public :
     int i;
     int j;
     static int K;


     Demo (int a = 10, int b= 20)
     {

            i= a;
            j= b;              
     }

     void Display()
     {
        cout<<"Value of i"<<i<<"\n";  
        cout<<"Value of j"<<j<<"\n";
     } 
};

int Demo::K = 111;


int main()   
{

  cout<<"Value of k is :"<<Demo::K<<"\n" ;
      Demo obj1;(11,21);
      Demo obj2(51,101);
      Demo obj3(121,151);

cout<<"Size od object is :"<<sizeof(obj1)<<"\n";

      obj1.Display(); 
      obj2.Display();
      obj3.Display();    
    return 0;
}