#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char* decimalToany(int num,int bs)
{
    int j=0,sum=0,r1,i,t;
    char *arr;
    arr=(char*)malloc(20*sizeof(char));
    sum=num;
    while(sum!=0)
    {
        r1=sum%bs;
        if(r1>9)
        arr[j]=(char)(r1+55);
        else
        arr[j]=(char)(r1+48);
        sum=sum/bs;
        j++;
    }
    arr[j]='\0';
    strrev(arr);
    return arr;
}
int anyTodecimal(char a[20],int bs)
{
    int k=0,sum=0,j=0,i;
    strupr(a);
    int len=strlen(a);
    for(i=len-1;i>=0;i--)
    {
        if(isupper(a[i]))
        sum=sum+((a[i]-55)*pow(bs,j));
        else
        sum=sum+((a[i]-48)*pow(bs,j));
        j++;
    }
    return sum;
}
int main()
{
    int dec,bin,oct,hexa,base,clk,n,bs;
    char str[20],b[20];
    printf("If decimal to others then enter 1,if others to decimal then enter 2,if from any to non-decimal enter 3:");
    scanf("%d",&clk);
    if(clk==1){
    printf("Enter the decimal number:");
    scanf("%d",&dec);
    printf("Enter the base to convert:");
    scanf("%d",&base);
    strcpy(b,decimalToany(dec,base));
    printf("%s",b);
    }
    if(clk==2){
    printf("Enter the  number:");
    scanf("%s",&str);
    printf("tell the base of the given number:");
    scanf("%d",&base);
    int d=anyTodecimal(str,base);
    printf("The result is:%d",d);
    }
    if(clk==3){
    printf("Enter the  number:");
    scanf("%s",&str);
    printf("tell the base of the given number:");
    scanf("%d",&base);
    int d=anyTodecimal(str,base);
    printf("Enter the base to converted:");
    scanf("%d",&bs);
    strcpy(b,decimalToany(d,bs));
    printf("The result is %s",b);
    }
    return 0;
}
