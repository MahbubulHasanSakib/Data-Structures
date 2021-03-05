#include<stdio.h>
#include<string.h>
int is_Substring(char s1[], char s2[])
{
    int r = strlen(s1);
    int s = strlen(s2);
    int max=r-s;
    for (int i = 0; i <= max; i++) {
        int j;
        for (j = 0; j < s; j++)
            if (s1[i + j] != s2[j])
                break;
        if (j == s)
            return i;
    }
    return -1;
}
int main()
{
    char S[40],P[30];
    printf("Enter main string:");
   scanf("%s",S);
   printf("Enter substring:");
   scanf("%s",P);
    int result = is_Substring(S, P);
    if (result == -1)
       printf("The substring not present");
    else
       printf("The substring present at index:%d",result);
    return 0;
}
