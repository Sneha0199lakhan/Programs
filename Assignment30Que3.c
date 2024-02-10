/*
Write a program which  return Addition of even element from singly linear linked list.

Input : |11|->|20|->|32|->|41|
 Output : 52
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
  int EvenAddition(PNODE Head)
  {
     int iSum= 0;
    
    while(Head != NULL)
    {
       if(((Head->data)%2)==0)
          { 
            iSum= iSum+( Head->data);
          }
          Head= Head->next;

    } 
    return iSum;

  }

  int main()
  {
     PNODE First = NULL;
     int iRet = 0;

     InsertFirst(&First ,41);
     InsertFirst(&First ,32);
     InsertFirst(&First ,20);
     InsertFirst(&First ,11);

     Display(First);
     iRet= EvenAddition(First);
     printf(" EvenAddition is : %d\n",iRet);
     
     return 0;
  }
