//write a program which number from user and print that number of $ & * Screen.

#include<stdio.h>
 
 void Pattern(int iNo)
 { 
    int icnt=0;
     for( icnt= 1 ;icnt<=iNo ;icnt++)
     {
        printf( "$\t *\t");
     }
 }
 int main()
 {
    int iValue= 0;
    printf("Enter number");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0; 
 }
 /*
 Input:5
 output:$  *  $ * $ * $ * $  * 

  Input:3
 output:$  *  $ * $ *

 Input:-3
 output:$  *  $ * $ *  

 */
 //Time complexity: 0(N)