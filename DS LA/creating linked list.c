#include<stdio.h>
#include<stdlib.h>
struct linked_list
{
    int num;
    struct linked_list *next;
};
typedef struct linked_list node;

int main()
{
    int n,i;
    node *start,*ptr;

    start =(node *) malloc(sizeof(node));
    ptr=start;

    printf("How many elements: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {

        printf("Input a number: ");
        scanf("%d",&ptr->num);
        if(i!=n)
        {
            ptr->next=(node *)malloc(sizeof(node));
            ptr=ptr->next;
        }
    }
    ptr->next=NULL;

    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->num);
        ptr=ptr->next;
    }
    return 0;
}
