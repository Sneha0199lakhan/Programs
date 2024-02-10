/*
Write a program which  return Second largest  element from singly linear linked list.

Input : |110|->|230|->|320|->|240|
 Output : 240
*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
  struct node *next;

};
 typedef struct node NODE;
 typedef struct node* PNODE;
 typedef struct node** PPNODE;
 
 void InsertFirst(PPNODE Head, int no)
  {
  
     PNODE newn = (PNODE)malloc(sizeof(NODE));

      newn->next = NULL;
      newn->data= no;

      if(*Head==NULL)
      {
        *Head = newn;
      }
      else
      {
        newn->next= *Head;
        *Head= newn;
      }
  }
  void Display(PNODE Head)
  {
      printf("Contents of linked List :\n");
       while(Head != NULL)
       {
         printf("| %d |->",Head->data);
         Head = Head->next;
       }
       printf("NULL\n");
  }
  int SecMaximum(PNODE Head)
  {
     int iMax= Head->data;
     int SecMax= Head->next->data;
    
    while(Head != NULL)
    {
       if((Head->data)>iMax)  
         {  
           SecMax = iMax;
           iMax= Head->data;
         }
         else if (Head->data>SecMax)
         {
           SecMax = Head->data;
         }
         Head= Head->next;
    } 
    return SecMax;

  }

  int main()
  {
     PNODE First = NULL;
     int iRet = 0;

     InsertFirst(&First ,240);
     InsertFirst(&First ,320);
     InsertFirst(&First ,230);
     InsertFirst(&First ,110);

     Display(First);
     iRet= SecMaximum(First);
     printf("SecMaximum is : %d\n",iRet);
     
     return 0;
  }
