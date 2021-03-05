#include<stdio.h>
int main()
{
    int array[3][4],rows,cols,i,rowsum,sum=0,j;
    printf("How many rows:");
    scanf("%d",&rows);
    printf("How many columns:");
    scanf("%d",&cols);
    printf("Enter the matrix:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
            scanf("%d",&array[i][j]);
    }
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            sum=sum+array[i][j];
        }
        printf("Sum of %dst row is  %d\n",i+1,sum);
        sum=0;

    }
    sum=0;
    for(j=0; j<cols; j++)
    {
        for(i=0; i<rows; i++)
        {
            sum=sum+array[i][j];
        }
        printf("Sum of %dst column is %d\n",j+1,sum);
        sum=0;

    }
    return 0;
}
