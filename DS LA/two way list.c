#include<stdio.h>
#include<stdlib.h>
struct doubly_list
{
    int num;
    struct doubly_list *back;
    struct doubly_list *forward;
};
typedef struct doubly_list n;
int main()
{
    n *ptr,*start,*prev,*last;
    int m,i;
    printf("How many numbers:");
    scanf("%d",&m);
    start=(n *)malloc(sizeof(n));
    ptr=start;
    for(i=1;i<=m;i++)
    {
        printf("Enter the number:");
        scanf("%d",&ptr->num);
        if(i==1)
        {
            ptr->back=NULL;
        }
        else{
            ptr->back=prev;
        }
        if(i!=m)
        {
           prev=ptr;
           ptr->forward=(n *)malloc((sizeof(n)));
           ptr=ptr->forward;
        }
    }
    last=ptr;
    ptr->forward=NULL;
    ptr=start;
    printf("From forward:");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->num);
        ptr=ptr->forward;
    }
    printf("\n");
    ptr=last;
    printf("From backward:");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->num);
        ptr=ptr->back;
    }
    printf("\n");
    return 0;
}
