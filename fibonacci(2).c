#include<stdio.h>
int fibo(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n,fib=0,i,f1=0,f2=1;
    printf("nth term:");
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {
        fib=f1+f2;
        f1=f2;
        f2=fib;
    }
    printf("without recursion:%d\n",fib);
    printf("Using recursion:%d\n",fibo(n));
    return 0;
}
