#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,K,L,len;
    char T[50],S[40];
    printf("Enter the string:");
    gets(T);
    printf("Enter index and length of deletion string:");
    scanf("%d%d",&K,&L);
    len=strlen(T);
    for(j=0,i=K;i<K+L;i++,j++)
    {
        S[j]=T[i];
    }
    for(i=K+L;i<=len;i++)
    {
        T[i-L]=T[i];
    }
    printf("%s",T);
    return 0;
}
