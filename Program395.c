#include<stdio.h>
int CountEvenR( int Arr[], int iSize)
{
  static int iCnt = 0;
  static int iEven = 0;

   if( iCnt < iSize)
   {
     if((Arr[iCnt]%2)==0 )
    { 
        iEven++;
    } 
     iCnt++;
     CountEvenR(Arr ,iSize);
    
   }
   return iEven;

}
int main()
{
  
  int Arr[5] = {10,21,33,40,50};
  int iRet = 0;

  iRet = CountEvenR(Arr,5);
  printf("Even count of array : %d\n",iRet);
  return 0;
}