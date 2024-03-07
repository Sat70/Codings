#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}sn;
sn* insert(sn* head,int data)
{
    sn* new_node=(sn*)malloc(sizeof(sn));
    if(new_node==NULL)
    {
        printf("\n");
        printf("Memory is Full.");
        return head;
    }
    if(head==NULL)
    {
        head=new_node;
        new_node->data=data;
        new_node->next=NULL;
    }
    
}
int main()
{
    int x;
    sn* head=NULL;
    int n;
    printf("\n");
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    while(n!=0)
    {
        int num;
        printf("\n");
        printf("Enter the data : ");
        scanf("%d",&num);
        head=insert(head,num);
        n--;
    }

}