#include<stdio.h>
#include<stdlib.h>
struct priority_queue
{
    int num;
    int pr;
    struct priority_queue *next;
};
typedef struct priority_queue node;
node *ptr,*start;
void *insert(node *ins,int n,int p)
{
    ins->num=n;
    ins->pr=p;
    node *prnode;
        ptr=start;
    while(ptr->pr<=ins->pr)
    {
        prnode=ptr;
        ptr=ptr->next;
        if(ptr==NULL)
            break;
    }
    if(ptr==NULL)
    {
        prnode->next=ins;
        ins->next=NULL;
    }
    else{
    node *crntnode=ptr;
    ins->next=crntnode;
    prnode->next=ins;
    }
        ptr=start;
    printf("After inserting:");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->num);
        ptr=ptr->next;
    }
    printf("\n");
}
void dElete(int delItem)
{
    node *delnode,*prnode;
    ptr=start;
    while(ptr!=NULL)
    {
        if(ptr->num==delItem)
        {
            if(ptr==start)
            {
                delnode=ptr;
                ptr=ptr->next;
                free(delnode);
                start=ptr;
            }
            else{
            delnode=ptr;
            prnode->next=ptr->next;
            free(delnode);
            }
        }
        prnode=ptr;
        ptr=ptr->next;

    }
       ptr=start;
    printf("After deleting:");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->num);
        ptr=ptr->next;
    }
}
int main()
{
    int n,i,item,del;
    printf("How many elements:");
    scanf("%d",&n);
    start=(node *)malloc(sizeof(node));
    ptr=start;
    for(i=0;i<n;i++)
    {
            printf("Enter the  items:");
            scanf("%d",&item);
            ptr->num=item;
            if(i==0 || i==1)
            ptr->pr=1;
            else if(i==2 || i==3)
            ptr->pr=2;
            else
            ptr->pr=3;
            if(i!=n-1){
            ptr->next=(node *)malloc((sizeof(node)));
            ptr=ptr->next;
            }

    }
    ptr->next=NULL;
    ptr=start;
    printf("Before inserting:");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->num);
        ptr=ptr->next;
    }
    printf("\n");
    node *nw=(node *)malloc((sizeof(node)));
    nw->num=100;
    nw->pr=2;
    insert(nw,nw->num,nw->pr);
    printf("Enter the deleting item:");
    scanf("%d",&del);
    dElete(del);
    return 0;
}
