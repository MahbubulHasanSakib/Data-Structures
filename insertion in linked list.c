#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* display(struct node *start)
{
    if(start == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d\n", start -> data);
        display(start->next);
    }
}
struct node* begin(struct node *start,int value)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=value;
    p->next=start;
    return (p);
}
struct node* end(struct node *start,int value)
{
    struct node *p,*q;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=value;
    p->next=NULL;
    q=start;
    while(q->next!=NULL)
    {
        q = q->next;
    }
    q->next = p;
}
struct node *at_position(struct node *a, int value)
{
    if (a->next != NULL)
    {
        struct node *p;
        p = (struct node*)malloc(sizeof(struct node));
        p->data = value;
        p->next = a->next;
        a->next = p;
    }
    else
    {
        printf("Use end function to insert at the end\n");
    }
}
int main()
{
    struct node *prev,*start, *p;
    int n,i;
    printf ("number of elements:");
    scanf("%d",&n);
    start=NULL;
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        p=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(start==NULL)
            start=p;
        else
            prev->next=p;
        prev=p;
    }
    start= begin(start,10);
    end(start,20);
    at_position(start->next->next,30);
    display(start);
    return 0;
}
