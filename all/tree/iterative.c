#include<stdio.h>
#include<stdlib.h>
typedef struct TreeNode
{
    int key;
    struct TreeNode * left;
    struct TreeNode * right;
    
}node;
node *create(int key)
{
    node* new=(node*)malloc(sizeof(node));
    new->key=key;
    new->right=NULL;
    new->left=NULL;
    return new;
}
node* insert(node *root,int key)
{
    if(root==NULL)
    {
        return create(key);
    }
    if(key<root->key)
    {
        root->left=insert(root->left,key);
    }
    else if(key>root->key)
    {
        root->right=insert(root->right,key);
    }
    return root;
}
void inorder(node* root)
{
    if(root!=NULL){
        printf("%d ",root->key);
    inorder(root->left);
    inorder(root->right);
    }
}
node* findMin(node* root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}
node* delete(node* root,int key)
{
    if(root==NULL)
    {
        return root;
    }
    if(key<root->key)
    {
        root->left=delete(root->left,key);
    }
    else if(key>root->key)
    {
        root->right=delete(root->right,key);
    }
    else
    {
        if(root->right==NULL)
        {
            node* temp=root->left;
            free(root);
            return temp;
        }
        else if(root->left==NULL)
        {
            node* temp=root->right;
            free(root);
            return temp;
        }
        node* temp=findMin(root->right);
        root->key=temp->key;
        root->right=delete(root->right,temp->key);
    }
    return root;
}
int main()
{
    node* root=NULL;
    int a[]={1,2,3,4,5,6,7};
    for(int i=0;i<7;i++)
    {
        root =insert(root,a[i]);
    }
    root=delete(root,4);
    inorder(root);
    return 0;
}