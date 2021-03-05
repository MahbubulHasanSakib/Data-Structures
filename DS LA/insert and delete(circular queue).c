#include<stdio.h>
#define max 5
int CQ[max],front=-1,rear=-1;
void Qinsert()
{
    if((front==0 && rear==max-1)||(front==rear+1))
    {
        printf("Overflow\n");
    }
    else
    {
        int item;
        printf("Enter the item:");
        scanf("%d",&item);
        if(front==-1 && rear==-1)
        {
            front=rear=0;
        }
        else if(rear==max-1)
        {
            rear=0;
        }
        else
        {
            rear++;
        }
         CQ[rear]=item;
    }

}
void Qdelete()
{
    int itm;
  if(front==-1)
  {
      printf("Underflow\n");
  }
  else
  {
     itm=CQ[front];
     printf("The deleted item is:%d\n",itm);
     if(front==rear)
     {
         front=rear=-1;
     }
     else if(front==max-1)
     {
         front=0;
     }
     else
     {
         front++;
     }
  }
}
void Qdisplay()
{
    if(front==-1)
        printf("Empty queue\n");
    else
    {
        if(rear<front)
        {
            for(int i=front;i<=max-1;i++)
            {
                printf("%d ",CQ[i]);
            }
            for(int i=0;i<=rear;i++)
            {
                printf("%d ",CQ[i]);
            }
        }
        else
        {
            for(int i=front;i<=rear;i++)
            {
                printf("%d ",CQ[i]);
            }
        }
    }
}
int main()
{
    int choice;
    do{
    printf("\nEnter 1 to insert,2 to delete,3 to display:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        Qinsert();
        break;
    case 2:
        Qdelete();
        break;
    case 3:
        Qdisplay();
        break;

    }
    }while(choice<4);
    return 0;
}
