#include<stdio.h>
int GCD(int x,int y)
{
    int m=x;
    int n=y;
    if(n==0)
        return m;
    else
        return GCD(n,(m%n));
}
int main()
{
    int n,arr[100],i,a,b,c,d,gcd;
    printf("How many integers:");
    scanf("%d",&n);
    printf("Enter the integers:");
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    int x=arr[0];
    int y=arr[1];
    gcd=GCD(x,y);
    for(i=2;i<n;i++)
    {
       gcd=GCD(gcd,arr[i]);
    }
    printf("The gcd is:%d\n",gcd);
    return 0;
}
