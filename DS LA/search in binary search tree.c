#include<stdio.h>
#include<stdlib.h>
struct bst
{
    int num;
    struct bst *left;
    struct bst *right;
};
typedef struct bst node;
node *create()
{
    node *temp;
    int item;
    temp=(node *)malloc(sizeof(node));
    printf("Enter the item:");
    scanf("%d",&item);
    temp->num=item;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void insert(node *root,node *temp)
{
    if(temp->num<root->num)
    {
        if(root->left==NULL)
        {
            root->left=temp;
        }
        else
            insert(root->left,temp);
    }
    if(temp->num>root->num)
    {
        if(root->right==NULL)
            root->right=temp;
    else
        insert(root->right,temp);
    }
}
int count=0;
int loc=0;
void preorder(node *root,int item)
{
    if(root!=NULL)
    {
        count++;
        printf("%d ",root->num);
        if(root->num==item)
        loc=count;
        preorder(root->left,item);
        preorder(root->right,item);
    }
}
int main()
{
    node *temp,*root;
    root=NULL;
    int choice,n;
    printf("Enter 1 to create bst,2 to search:");
    scanf("%d",&choice);
    while(choice ==1)
    {
        temp=create();
        if(root==NULL)
        {
            root=temp;
        }
        else
            insert(root,temp);
         printf("Enter 1 to create bst ,2 to search:");
    scanf("%d",&choice);
    }
    int item;
    printf("Enter the searching item:");
    scanf("%d",&item);
    printf("Preorder:");
    preorder(root,item);
    printf("\n");
    if(loc!=0)
    printf("Find at %dth position in preorder",loc);
    else
        printf("Not found");
    return 0;
}
