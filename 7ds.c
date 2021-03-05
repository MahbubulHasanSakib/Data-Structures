#include<stdio.h>
int main()
{
    int n,arr[100],i,j,item,loc=0;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the searching item:");
    scanf("%d",&item);
    i=1;
    while(loc==0 && i<=n)
    {
        if(item==arr[i])
        {
            loc=i;
        }
        i++;
    }
if(loc!=0)
    printf("The location of %d is %d",item,loc);
else
    printf("Cannot found the number");
return 0;
}
