#include<stdio.h>
int main()
{

int Arr[5]={ 10, 20 ,30,40,50};

printf("Base address of array : %d\n ",Arr);

printf("First element is :%d\n",Arr[0]);

printf(" Base Address of first element :%d\n",(&Arr[0]));

printf("Base address of second element: %d\n",(&Arr[1]));

printf("size of whole Array is: %d\n",sizeof(Arr));

printf(" size of second element of array: %d\n",sizeof (Arr[1]));

return 0;  

}