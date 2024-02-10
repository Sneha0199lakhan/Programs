#include<iostream>
using namespace std;

template <class T>
T Min(T Arr[], int Length)
{
    T Min = Arr[0];
    int  iCnt = 0;

    for(iCnt = 0; iCnt < Length; iCnt++)
    {
         if(Arr[iCnt] < Min)
         {
            Min = Arr[iCnt];
         }
    }
    return Min;
}

int main()
{
    int Size = 0, iCnt = 0; 
    int  Ret = 0;
    int *ptr = NULL;

    cout<<"Enter number of elements : "<<"\n";
    cin>>Size;

    ptr = new int [Size];
 
    cout<<"Enter the elements : "<<"\n";
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    Ret = Min(ptr,Size);
    cout<<" Minimum number of all elements is : "<<Ret<<"\n";
    
    delete []ptr;

    return 0;
}