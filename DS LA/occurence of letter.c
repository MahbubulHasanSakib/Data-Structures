#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[30],ch;
    int i,j,count[1000]={0};
    printf("Enter the string:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if((tolower(str[i]))>='a' && (tolower(str[i]))<='z')
        {
            count[(int)tolower(str[i])]++;
        }
    }
    for(i='a';i<='z';i++)
    {
        printf("The frequency of %c is %d\n",(char)i,count[i]);
    }
    return 0;
}
