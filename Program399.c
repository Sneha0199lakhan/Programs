#include<stdio.h>

 int CountCapitalR(char *str)
 {
     static int iCnt  = 0;

    if(*str != '\0')
    {
        if(*str >= 'A'   && *str<= 'Z' )
        {
           iCnt++;
        }
        str++;
        CountCapitalR(str);
    }
    return iCnt;
 }
int main()
{
  
  char Arr[20];
  int iRet = 0;

  printf("Enter the string : \n");
  scanf("%[^'\n']s",Arr);


iRet = CountCapitalR(Arr);
printf("Capital letter of string is : %d\n",iRet);
  return 0;
}