#include<stdio.h>
#include<math.h>
int main()
{
    double D,x1,x2,x;
    int a,b,c;
    printf("Enter a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
    {
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("x1=%.2lf and x2=%.2lf",x1,x2);
    }
    else if(D==0)
    {
        x=-b/(2*a);
        printf("x=%.2lf is the unique solution",x);
    }
    else
        printf("No real solution");
    return 0;
}
