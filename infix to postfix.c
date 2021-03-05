#include<stdio.h>
#define max 50
char stack[max],top=-1;
void push(char c)
{
    if(top>=max-1)
        printf("Overflow");
    else{
        top++;
        stack[top]=c;
    }
}
char pop()
{
    char item;

        item=stack[top];
        top--;
        return item;
}
int check_operator(char c)
{
    if(c=='^'||c=='+'||c=='-'||c=='*'||c=='/')
        return 1;
    else
        return 0;
}
int priority(char a)
{
    if(a=='^')
        return 3;
    else if(a=='*' || a=='/')
    return 2;
    else if(a=='+' || a=='-')
    return 1;
    else
        return 0;
}
int main()
{
    char infix[max],postfix[max],ch,temp;
    int i=0,j=0;
    printf("Enter the infix expression:");
    gets(infix);
    while(infix[i]!='\0')
    {
        ch=infix[i];
        if(ch=='(')
            push(ch);
        else if((ch>='A' &&ch<='Z')||(ch>='a' && ch<='z'))
                {
                    postfix[j]=ch;
                    j++;
                }
                else if(check_operator(ch)==1)
                    {
                        temp=pop();
                        while(check_operator(temp)==1 && priority(temp)>=priority(ch))
                        {
                            postfix[j]=temp;
                            j++;
                            temp=pop();
                        }
                        push(temp);
                        push(ch);
                    }
                    else if(ch==')')
                    {
                        temp=pop();
                        while(temp!='(')
                        {
                            postfix[j]=temp;
                            j++;
                            temp=pop();
                        }
                    }
                    else
                    {
                        printf("Invalid expression\n");
                        return 0;
                    }
                    i++;
    }
    while(top>-1)
                    {
                        postfix[j]=pop();
                        j++;
                    }
    postfix[j]='\0';
    printf("The postfix expression is:");
    puts(postfix);
    return 0;
}
