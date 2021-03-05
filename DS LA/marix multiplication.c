#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],i,j,k,r1,r2,c1,c2,sum=0;
    printf("Enter rows and columns for first matrix:");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and columns for second matrix:");
    scanf("%d%d",&r2,&c2);
    if(c1==r2)
    {
        printf("Enter first matrix:\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
                scanf("%d",&a[i][j]);
        }
        printf("Enter second matrix:\n");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
                scanf("%d",&b[i][j]);
        }
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                for(k=0; k<c1; k++)
                {
                    sum=sum+(a[i][k]*b[k][j]);
                    c[i][j]=sum;
                }
                sum=0;
            }
            sum=0;
        }
        printf("The result matrix is:\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Multiplication is not possible");
    return 0;
}
