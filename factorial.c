#include<stdio.h>
int factorial(int n)
{
    if(n==0 || n==1)
    return 1;
    else
     return n*factorial(n-1);
}
int main()
{
    int n,fact,i,f=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Without recursion:%d\n",f);
    fact=factorial(n);
    printf("Using recursion:%d\n",fact);
    return 0;
}
