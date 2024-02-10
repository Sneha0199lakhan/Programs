/*
  Complete below code sinppet by writing defination of below function 
  1. SearchLast()- Search last occurance of number.
  2. EvenCount()- Count even elements
  3. OddCount()- Count odd elements 
  4. SumAll() - sum of all elements
*/
#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int Size;
     public:
        Array(int value = 10)
        {
            cout<<"Inside Consturctor\n";
             
             this->size = value;
             this->Arr = new int[size];
        }
         Array(Array &ref)
         {
             cout<<"Inside copy constructor\n";
              
              this ->size = ref.size;
              this->Arr= new int[this->size];
               for (int i = 0; i<size;i++)
               {
                 this->Arr[i]= ref.Arr[i];
               }
         }
        ~Array()
        {
             cout<<"Inside Destructor\n";
              delete[]Arr;

        }
        inline void Accept();
        inline void Display();
};

int Array::SearchFirst(int value)
{
    int i = 0;
    for (i = 0; i<size; i++)
    {
        if (Arr[i] == value)
        {
            break;
        }
    }
    if(i ==size)
    {
        return -1;
    }
    else 
    {  
        return i+1;
    
    }
}
int Array::Frequency(int value)
{

}


int Array :: SumAll()
{
    int Sum = 0, iCnt = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int Array::EvenCount()
{
      int iCnt = 0;
     int Count= 0;
     for( iCnt = 0; iCnt<Size; iCnt++)
     {
         if(Arr[iCnt]%2==0)
         {
             Count++;
         }
     }
     return Count++;
}
int Array::OddCount()
{
     int iCnt = 0;
     int Count= 0;
     for( iCnt = 0; iCnt<Size; iCnt++)
     {
         if((Arr[iCnt]%2)!=0)
         {
             Count++;
         }
     }
     return Count++;
}

void Array :: Accept()
{
   cout<<"Please enter the values\n";
    int iCnt = 0;

    for(iCnt = 0; iCnt < size; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void Array :: Display()
{
    cout<<"Elements of the array are : \n";
    int iCnt = 0;

    for(iCnt = 0; iCnt < size; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int Ret = 0; 
    int No = 0;
    cout<<"Enter number"<<No<<'\n';
    cin>>No;

    Array obj(5);

    obj.Accept();
    obj.Display();
    
    Ret = obj.SumAll();

    cout<<"Addition is : "<<Ret<<"\n";
    
    Ret =obj.EvenCount();
    cout<<"Even Count is : "<<Ret<<"\n";

     Ret =obj.OddCount();
    cout<<"Odd Count is : "<<Ret<<"\n";

    return 0;
}
