#include<stdio.h>
int main()
{
    int matrix[8][8],trans[8][8],rows,cols,i,j;
    printf("How many rows:");
    scanf("%d",&rows);
    printf("How many columns:");
    scanf("%d",&cols);
    printf("Enter the matrix:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
            scanf("%d",&matrix[i][j]);
    }
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
            trans[j][i]=matrix[i][j];
    }
    printf("The transpose matrix is:\n");
     for(i=0; i<cols; i++)
    {
       for(j=0; j<rows; j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
