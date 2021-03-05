#include<stdio.h>
int main()
{
    int n,arr[100],i,j,temp;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
