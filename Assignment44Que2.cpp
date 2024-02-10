#include<iostream>
using namespace std;

template<class T>
class Arithematic
{
    public:
        T No1;
        T No2;
        T No3,

        Arithematic(T A, T B, T C);
        T Max();
};

template<class T>
Arithematic <T>:: Arithematic(T A, T B,T C)
{
    this->No1 = A;
    this->No2 = B;
    this->No3 = C;
}

template<class T>
T Arithematic<T> :: Max()
{
    if( No1 < No2)
    {
        return No1;
    }
   else if (No2< No3) 
    {
        return No3;
    }
    else
    {
        return No1;
    }
    
}


int main()
{
    Arithematic<int>obj1(10,20,30);
    int Ret = 0;

    Ret = obj1.Max();
    cout<<"Multiplication is : "<<Ret<<"\n";
    
    return 0;
}