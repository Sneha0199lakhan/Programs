#include<iostream>
using namespace std;

template<class T>
class Arithematic
{
    public:
        T No1;
        T No2;

        Arithematic(T A, T B);
        T Multiply();
};

template<class T>
Arithematic <T>:: Arithematic(T A, T B)
{
    this->No1 = A;
    this->No2 = B;
}

template<class T>
T Arithematic<T> :: Multiply()
{
    T Ans ;
    Ans = No1 * No2;
    return Ans;
}


int main()
{
    Arithematic<int> obj1(10,20);
    int Ret = 0;

    Ret = obj1.Multiply();
    cout<<"Multiplication is : "<<Ret<<"\n";

    Arithematic<float> obj2(10.0f,20.0f);
    float fRet = 0.0f;

    fRet = obj2.Multiply();
    cout<<"Multipication is : "<<fRet<<"\n";   
    
    return 0;
}