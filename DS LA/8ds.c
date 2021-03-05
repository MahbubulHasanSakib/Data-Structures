#include<stdio.h>
int main()
{
    int start,end,mid,key,i,a[100],n;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("Enter the numbers:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key:");
    scanf("%d",&key);
    start=1;
    end=n;
    do{
        mid=(start+end)/2;
        if(a[mid]==key){
           printf("Find it at:%d",mid);
           break;
        }
        else if(a[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }while(start<=end);
    if(start>end){
        printf("Failed,not found\n");
    }
    return 0;
}


