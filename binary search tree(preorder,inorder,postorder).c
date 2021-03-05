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
    printf("Enter the value:");
    scanf("%d",&item);
    temp->num=item;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void insert (node *root,node *temp)
{
    if(temp->num<root->num)
    {
        if(root->left==NULL)
        root->left=temp;
        else
            insert(root->left,temp);
    }
    else if(temp->num>root->num)
    {
       if(root->right==NULL)
        root->right=temp;
        else
            insert(root->right,temp);
    }
}
void preorder(node *root)
{

    if(root!=NULL){
    printf("%d ",root->num);
    preorder(root->left);
    preorder(root->right);
    }
}
void inorder(node *root)
{

    if(root!=NULL){
    preorder(root->left);
    printf("%d ",root->num);
    preorder(root->right);
    }
}
void postorder(node *root)
{

    if(root!=NULL){
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->num);
    }
}
int main()
{
    node *temp,*root;
    root=NULL;
    int choice;
    printf("Enter 1 to create binary tree and 2 to display:");
    scanf("%d",&choice);
    while(choice==1)
    {
        temp=create();
        if(root==NULL){
        root=temp;
        }
        else
            insert(root,temp);
    printf("Enter 1 to create binary tree and 2 to display:");
    scanf("%d",&choice);
    }
    printf("Preorder:");
    preorder(root);
    printf("\n");
    printf("Inorder:");
    inorder(root);
    printf("\n");
    printf("postorder:");
    postorder(root);
    return 0;
}
