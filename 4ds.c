#include<stdio.h>
int main()
{
    int n,arr[100],i,j,k,item;
    printf("How many elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter k'th position:");
    scanf("%d",&k);
    printf("Enter the item:");
    scanf("%d",&item);
    for(j=n;k<=j;j--)
    {
        arr[j+1]=arr[j];
    }
    arr[k]=item;
    n=n+1;
    for(i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
