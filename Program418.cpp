#include<iostream>
using namespace std;

class Array
{
    private:
        int * Arr;
        int iSize;

    public:
        Array(int X)        // Parametrised Constructor
        {
            iSize = X;
            Arr = new int[iSize];
        }

        ~Array()            // Destructor
        {   
            delete []Arr;
        }

        void Accept()       // Member function
        {
            int iCnt = 0;
            cout<<"Please enter the elements : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()      // Member function
        {
            cout<<"Elements of the array are : "<<endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }
    
       bool BinarySearch(int iNo)
        {
            bool  bFlag = flase;
            int iStart = 0, iEnd = 0, iMid = 0;

            iStart = 0;
            iEnd = iSize -1;

            while(iStart <= iEnd)
            {
                 iMid = iStar +(iEnd -iStart)/2;
                 if(Arr[iMid ]== iNo)
                 {
                    bFlag = true;
                    break;
                 }
                 else if(Arr[iMid]< iNo)
                 {
                    iStart = iMid +1;
                 }
                 else if(Arr[iMid]> iNo)
                 {
                     iEnd = iMid -1;
                 }
                 return bFalg;
            }
        }
};  // End of class

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

  cout<<"Enter the element tht you want to search:"<<endl;
  cin>>iValue;

  bRet = aobj->BinarySearch(iValue);
  if(bRet ==true)
  {
    cout<<"element is present in array\n";
  }
  else 
 {
    cout<<"element is not present in array\n";
  }
  
    delete aobj;

    return 0;
}