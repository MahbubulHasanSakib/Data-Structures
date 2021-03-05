#include<stdio.h>
#include<string.h>
int main()
{
    int len1,len2,i,j,K;
    char T[50],S[40];
    printf("Enter main string:");
    gets(T);
    printf("Enter another string:");
    gets(S);
    printf("Enter the index:");
    scanf("%d",&K);
    len1=strlen(T);
    len2=strlen(S);
    for(i=len1;i>=K;i--)
    {
        T[i+len2]=T[i];
    }
    for(j=0;j<len2;j++)
    {
        T[K+j]=S[j];
    }
    printf("%s",T);
    return 0;
}
