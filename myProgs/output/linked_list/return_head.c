#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Node
{
    int data;
    struct Node *next;
}sn;
bool isempty(sn* head)
{
    if(head==NULL)
    {
        return true;
    }
    return false;
}
sn* insertAtFront(sn* head)
{
    int num;
    sn* new_node=(sn*)malloc(sizeof(sn));
    if(new_node==NULL)
    {
        printf("\n");
        printf("Memory Not Available.\n");
        return head;
    }
    printf("\n");
    printf("Enter the number to insert:");
    scanf("%d",&num);
    new_node->data=num;
    new_node->next=head;
    head=new_node;
    return head;

}
sn* insertInEnd(sn* head)
{
    if(isempty(head))
    {
        head=insertAtFront(head);
        return head;
    }
    int num;
    sn* new_node=(sn*)malloc(sizeof(sn));
    if(new_node==NULL)
    {
        printf("\n");
        printf("Memory Not Available.\n");
        return head;
    }
    printf("\n");
    printf("Enter the number to insert:");
    scanf("%d",&num);
    new_node->data=num;
    sn* ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    new_node->next=ptr->next;
    ptr->next=new_node;
    return head;
}
sn* deleteFromFront(sn* head)
{
    if(isempty(head))
    {
        printf("\n");
        printf("Linked List Is Empty.\n");
        return head;
    }
    sn* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
sn* deleteFromEnd(sn* head)
{
    if(isempty(head))
    {
        printf("\n");
        printf("Linked List Is Empty.\n");
        return head;
    }
    sn* ptr1=head,*ptr2;
    while(ptr1->next!=NULL)
    {
        ptr2=ptr1;
        ptr1=ptr1->next;
    }
    ptr2->next=ptr1->next;
    free(ptr1);
    return head;
}
sn* insertAfterNode(sn* head)
{
    if(isempty(head))
    {
        head=insertAtFront(head);
        return head;
    }
    int num,nth;
    sn* new_node=(sn*)malloc(sizeof(sn));
    if(new_node==NULL)
    {
        printf("\n");
        printf("Memory Not Available.\n");
        return head;
    }
    printf("\n");
    printf("Enter the number to insert:");
    scanf("%d",&num);
    printf("\n");
    printf("Enter the node : ");
    scanf("%d",&nth);
    int count=1;
    sn* ptr=head;
    while(count<nth)
    {
        ptr=ptr->next;
        count++;
    }
    new_node->data=num;
    new_node->next=ptr->next;
    ptr->next=new_node;
    return head;
}
void display(sn* head)
{
    if(isempty(head))
    {
        printf("\n");
        printf("Linked List Is Empty.\n");
        return;
    }
    sn* ptr=head;
    printf("\n");
    while(ptr!=NULL)
    {
        printf(" %d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}
int main()
{
    int x;
    sn* head=NULL;
    do
    {
        printf("\n");
        printf("Main Menu.\n");
        printf("1 for Insertion in Front.\n");
        printf("2 for insertion in End.\n");
        printf("3 for Deletion from Front.\n");
        printf("4 for Deletion from End.\n");
        printf("5 for Insert after a node.\n");
        printf("6 for Display.\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                head=insertAtFront(head);
                break;
            case 2:
                head=insertInEnd(head);
                break;
            case 3:
                head=deleteFromFront(head);
                break;
            case 4:
                head=deleteFromEnd(head);
                break;
            case 5:
                head=insertAfterNode(head);
                break;
            case 6:
                display(head);
                break;
            default:
                printf("EXIT......");
                exit(0);
        }
    }while(1);
    return 0;
}