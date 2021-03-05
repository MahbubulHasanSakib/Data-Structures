#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0;
    printf("How many students:");
    scanf("%d",&n);
    printf("Enter the marks:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]>=40)
            c++;
    }
    printf("%d student/students has/have passed",c);
    return 0;
}
