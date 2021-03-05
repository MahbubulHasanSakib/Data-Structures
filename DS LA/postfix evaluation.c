#include <stdio.h>
#include <ctype.h>
int s[100];
int top=-1;
int flag=0;
int pop()
{
  return(s[top--]);
}

int push(int val)
{
  if(flag==1){
    int num;
    num=pop();
    s[++top]=val+10*num;
  }
  else if(flag==0){
    s[++top]=val;
    flag=1;
  }
}
int main()
{
  char postfix[100];
  int i=0,n1,n2;
  printf("Enter the Postfix Expression:");
  gets(postfix);
  while( (postfix[i]) != '\0')
  {
    if(isdigit(postfix[i])) push(postfix[i]-48);
    else if(postfix[i]==' ')
      flag=0;
    else
    {
      flag=0;
      n1=pop();
      n2=pop();
      switch(postfix[i])
      {
        case '+':push(n2+n1);break;
        case '-':push(n2-n1);break;
        case '*':push(n2*n1);break;
        case '/':push(n2/n1);break;
        default:
                 printf("Input invalid\n");
                 break;
      }
    }
    i++;
  }
  printf("Result: %d\n",s[top]);
  return 0;
}
