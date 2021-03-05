#include<stdio.h>
void hanoi(int n,char src,char aux,char des)
{
    if(n==1)
    printf("Move disk %d from %c to %c\n",n,src,des);
    else{
    hanoi(n-1,src,des,aux);
    printf("Move disk %d from %c to %c\n",n,src,des);
    hanoi(n-1,aux,src,des);
    }
}
int main()
{
    int n;
    printf("How many disks:");
    scanf("%d",&n);
    hanoi(n,'A','B','C');
    return 0;
}
