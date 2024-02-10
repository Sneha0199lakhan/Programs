#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE Head, int no)
{
   PNODE newn = NULL;
   PNODE temp = *Head;

   newn = (PNODE)malloc(sizeof(NODE));
   newn->data = no;
   newn->lchild = NULL;
   newn->rchild = NULL;

   if(*Head == NULL)
   {
      *Head = newn;
   }
   else
   {
      while(1)
      {
        if(no == temp->data)
        {
            printf("Unable to insert as data is already present\n");
            free(newn);
            break;
        }
        else if(no > temp->data)
         {
            if(temp->rchild==NULL)
            {
                temp->rchild= newn;
                break;
            }
            temp = temp->rchild;
         }
         else if(no < temp->data)
         {
            if(temp->lchild==NULL)
            {
                temp->lchild= newn;
                break;
            }
             temp = temp->lchild;
         }
      }
   }
}

int main()
{
   PNODE first = NULL;

 Insert(&first,21);
 Insert(&first,11);
 Insert(&first,51);

   return 0;
}