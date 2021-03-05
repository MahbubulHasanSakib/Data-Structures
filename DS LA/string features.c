#include<stdio.h>
#include<string.h>
int getlength(char s[])
{
    int c=0,i;
    for(i=0; s[i]!='\0'; i++)
    {
        c++;
    }
    return c;
}
void copystring(char s[])
{
    int i=0;
    char str2[80];
    while(s[i]!='\0'){
        str2[i]=s[i];
        i++;
    }
    str2[i]='\0';
    printf("1st string is %s and copied string is %s",s,str2);
}
void concatanatestr(char s[])
{
    char s2[30],s3[60];
    printf("Enter second string:");
        fflush(stdin);
        scanf("%[^\n]s",s2);
    int i,j;
    for(i=0;s[i]!='\0';i++)
    {
        s3[i]=s[i];
    }
    for(j=0;s2[j]!='\0';j++)
    {
        s3[i]=s2[j];
        i++;
    }
    s3[i]='\0';
    printf("The result string is:%s",s3);
}
int comparestr(char s1[],char s2[])
{
    int i;
    int l1=0;
    for(i=0; s1[i]!='\0'; i++)
    {
        l1++;
    }
    int l2=0;
    for(i=0; s2[i]!='\0'; i++)
    {
        l2++;
    }
    int length=(l1<l2)?l1:l2;
    for(i=0;i<=length;i++)
    {
        if(s1[i]>s2[i])
            {
                return 1;
                break;
            }
            else if(s1[i]<s2[i])
            {
                return -1;
                break;
            }
    }
}
void reversestr(char s[])
{
    int i,j;
    char rev[30];
    int len=0;
    for(i=0; s[i]!='\0'; i++)
    {
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        rev[j]=s[i];
    }
    rev[j]='\0';
    printf("The reversed string is: %s",rev);
}
int main()
{
    int clk;
    printf("Enter 1 to find length,enter 2 to copy string,enter 3 to concatenate string,enter 4 to compare string,enter 5 to reverse a string->");
           scanf("%d",&clk);
           if(clk==1)
    {
        char str[40];
        printf("Enter the string:");
        fflush(stdin);
        scanf("%[^\n]s",str);
        int length=getlength(str);
        printf("The length is:%d",length);
    }
    if(clk==2)
    {
    char str1[30];
    printf("Enter 1st string:");
    fflush(stdin);
        scanf("%[^\n]s",str1);
    copystring(str1);
    }
    if(clk==3)
    {
      char s1[30];
      printf("Enter first string:");
      fflush(stdin);
        scanf("%[^\n]s",s1);
      concatanatestr(s1);
    }
    if(clk==4)
    {
        char st1[20],st2[20];
        printf("Enter the first string:");
        fflush(stdin);
        scanf("%[^\n]s",st1);
        printf("Enter the second string:");
        fflush(stdin);
        scanf("%[^\n]s",st2);
        int result=comparestr(st1,st2);
        if(result==1)
            printf("First string is larger");
        else if(result==-1)
            printf("Second string is larger");
        else
            printf("Both are same");
    }
    if(clk==5)
    {
        char s[30];
        printf("Enter the string:");
        fflush(stdin);
        scanf("%[^\n]s",s);
        reversestr(s);
    }
    return 0;
}






