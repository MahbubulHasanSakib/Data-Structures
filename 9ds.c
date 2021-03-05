#include<stdio.h>
int main()
{
    int a[35000],n,i,j,number;
    printf("Enter the number:");
    scanf("%d",&number);
    for(i=2;i<35000;i++)
    {
        a[i]=i;
    }
    for(i=2;i<35000;i++)
    {
        if(a[i]!=0)
        {
            for(j=2*i;j<35000;j=j+i)
            {
                if(a[j]!=0)
                {
                    a[j]=0;
                }
            }
        }
    }
    if(a[number]!=0)
        printf("Prime");
    else
        printf("Not prime");
    return 0;
}
