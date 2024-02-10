#include<stdio.h>
int main()
{
char ch ='A';
int i= 21;
float f = 12.31f;
double d = 89.90;
printf(" size of character is  : %d bytes \n ", sizeof (ch));
printf(" size of integer is  : %d bytes \n ", sizeof (i)); 
printf(" size of float is  : %d bytes \n ", sizeof (f));
printf(" size of double  is  : %d bytes \n ", sizeof (d));

 
 printf(" Base address of character is : %u\n", &ch);
  printf(" Base address of integer is : %u\n", &i); 
   printf(" Base address of float  is : %u\n", &f);
    printf(" Base address of double is : %u\n", &d);

    return 0;
}