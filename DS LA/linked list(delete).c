#include<stdio.h>
#include<stdlib.h>
struct linked_list
{
    int num;
    struct linked_list *next;

};
typedef struct linked_list node;
node *ptr,*start,*delNode;
int m;
void delfirst()
{
 delNode=start;
 start=start->next;
 free(delNode);
 ptr=start;
 while(ptr!=NULL)
 {
     printf("%d ",ptr->num);
     ptr=ptr->next;
 }
}
void delloc(int Loc)
{
    node *prev;
   int i;
   ptr=start;
    for(i=1;i<Loc;i++)
    {
        prev=ptr;
        ptr=prev->next;
    }
    prev->next=ptr->next;
    delNode=ptr;
    free(delNode);
    ptr=start;
 while(ptr!=NULL)
 {
     printf("%d ",ptr->num);
     ptr=ptr->next;
 }
}
int main()
{
    int i,n,casE,loc;
    start=(node *)malloc(sizeof(node));
    ptr=start;
    printf("How many numbers:");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        printf("Enter the number:");
        scanf("%d",&ptr->num);
        if(i==m)
        {
            ptr->next=NULL;
        }
        else
        {
            ptr->next=(node *)malloc(n*sizeof(node));
            ptr=ptr->next;
        }
    }
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->num);
        ptr=ptr->next;
    }
    printf("\n");
    printf("Enter case:");
    scanf("%d",&casE);
    switch(casE)
    {
    case 1:
        delfirst();
        break;
    case 2:
        printf("Enter the location:");
        scanf("%d",&loc);
        delloc(loc);
        break;
    }
    return 0;
}
