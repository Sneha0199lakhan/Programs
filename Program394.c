#include<stdio.h>
int CountEven( int Arr[], int iSize)
{
   int iCnt = 0;
   int iEven = 0;

   while( iCnt < iSize)
   {
     if((Arr[iCnt]%2)==0 )
    { 
        iEven++;
    } 
     iCnt++;
   }
   return iEven;

}
int main()
{
  
  int Arr[5] = {10,21,33,40,50};
  int iRet = 0;


  iRet = CountEven(Arr,5);
  printf("Even count of array : %d\n",iRet);
  return 0;
}