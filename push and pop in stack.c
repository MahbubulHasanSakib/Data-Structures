#include<stdio.h>
#define max 4
int stack[max],top=-1;
void  push(int num)
{
    if(top>=max-1)
    {
        printf("Overflow\n");
    }
    else
    {
        top=top+1;
        stack[top]=num;
    }
}
void pop()
{
    int item;
    if(top==-1)
        printf("Underflow\n");
    else
    {
        item=stack[top];
        top--;
    }
}
void showValue()
{
    int i;
    if(top==-1)
    printf("Stack is empty\n");
    else{
    for(i=0;i<=top;i++)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
    }
}
int main()
{
    int select;
       do
       {
           int i,item;
           int go;
            printf("If you want to continue click 1:");
            scanf("%d",&go);
            if(go!=1)
                break;
       printf("Select 1 to push,2 to pop and 3 to display:");
       scanf("%d",&select);
           if(select==1)
           {
               printf("Enter value:");
               scanf("%d",&item);
               push(item);
           }
           if(select==2)
            pop();
           if(select==3)
            showValue();
       }while(select<4);
        return 0;
}
