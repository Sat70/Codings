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
void alternate()
{
    sn* ptr=head;
    if(head==NULL || head->next==NULL)
    {
        printf("\n");
        printf("LIST IS EMPTY.\n");
        return;
    }
    while(ptr!=NULL && ptr->next!=NULL)
    {
        sn* ptr2=ptr->next;
        ptr->next=ptr->next->next;
        ptr=ptr->next;
        free(ptr2);
        //ptr2=ptr2->next;
    }
}
void printater()
{
    sn* ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        if(ptr->next==NULL)
            break;
        ptr=ptr->next->next;
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
    //alternate();
    printf("\n");
    printf("New List.\n");
    printater();
    //display();
}