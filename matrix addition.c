#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],i,j,rows,cols;
    printf("Enter total rows:");
    scanf("%d",&rows);
    printf("Enter total columns:");
    scanf("%d",&cols);
    printf("Enter the first matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The sum matrix is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
