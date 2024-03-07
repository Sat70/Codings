#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node* next;
}sn;
sn* head=NULL;
void insertAtFront()
{
    int num;
    sn* new_node=(sn*)malloc(sizeof(sn));
    if(new_node==NULL)
    {
        printf("\n");
        printf("Memory Not Available.\n");
        return;
    }
    printf("\n");
    printf("Enter the Number : ");
    scanf("%d",&num);
    new_node->data=num;
    new_node->next=head;
    head=new_node;
}
void reverse()
{
    sn* cur,*prev;
    if(head!=NULL)
    {
        prev=head;
        cur=head->next;
        head=head->next;
        prev->next=NULL;
        while(head!=NULL)
        {
            head=head->next;
            cur->next=prev;
            prev=cur;
            cur=head;
        }
        head=prev;
        printf("Reverse Successfully.\n");
    }
}
void display()
{
    sn* ptr=head;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}
int main()
{
    int n;
    printf("Enter the number of Nodes :");
    scanf("%d",&n);
    while(n!=0)
    {
        insertAtFront();
        n--;
    }
    printf("Previos List : ");
    display();
    reverse();
    printf("\n");
    printf("New List.\n");
    display();
}