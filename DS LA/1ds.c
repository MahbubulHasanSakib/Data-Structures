#include<stdio.h>
int main()
{
    int n,arr[200],i,max,loc=1;
    printf("How many integers:");
    scanf("%d",&n);
    printf("Enter the integers:");
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[1];
    for(i=2; i<=n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            loc=i;
        }
    }
    printf("The largest integer is:%d and location is %d",max,loc);
    return 0;
}
