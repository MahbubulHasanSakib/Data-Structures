#include<stdio.h>
#include<stdlib.h>
struct linked_list
{
    int num;
    struct linked_list *next;

};
typedef struct linked_list node;
node *ptr,*start,*New;
int m;
void insfirst(struct linked_list *n,int a)
{
    n->num=a;
    n->next=start;
    start=n;
     ptr=start;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->num);
        ptr=ptr->next;
    }
}
void insloc(struct linked_list *n,int a,int Loc)
{
     n->num=a;
      ptr=start;
      node *prnode;
      int i=1;
    while(i<Loc)
    {
        prnode=ptr;
        ptr=ptr->next;
        i++;
    }
    n->next=ptr;
    prnode->next=n;
    ptr=start;
     while(ptr!=NULL)
    {
        printf("%d ",ptr->num);
        ptr=ptr->next;
    }
    printf("\n");
}
void inslast(struct linked_list *n,int a)
{
    n->num=a;
    n->next=NULL;
    ptr=start;
    for(int i=1;i<=m;i++)
    {
        if(i!=m)
            ptr=ptr->next;
    }
    ptr->next=n;
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
    New=(node *)malloc((sizeof(node)));
    New->num=800;
    switch(casE)
    {
    case 1:
        insfirst(New,New->num);
        break;
    case 2:
        printf("Enter the location:");
        scanf("%d",&loc);
        insloc(New,New->num,loc);
        break;
    case 3:
        inslast(New,New->num);
        break;
    }
    return 0;
}
