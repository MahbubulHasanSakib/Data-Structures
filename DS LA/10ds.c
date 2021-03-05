#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int i,num;
    char ch;
    fp=fopen("RAND.txt","w");
    for(i=1;i<=100;i++)
    {
      num=rand();
      fprintf(fp,"%d\n",num);
    }
    fclose(fp);
    fp=fopen("RAND.txt","r");
    int n=getc(fp);
    while(n!=EOF)
    {
        putchar(n);
        n=getc(fp);
    }
    fclose(fp);
    return 0;
}
