#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct cNode
{
    int data;
    struct cNode* next;
}sn;
bool isempty(sn* head)
{
    if(head==NULL)
    {
        return true;
    }
    return false;
}
sn* insertInFront(sn* head)
{
    int num;
    sn* new_node=(sn*)malloc(sizeof(sn));
    if(new_node==NULL)
    {
        printf("\n");
        printf("MEMORY NOT AVAILABLE.");
        return head;
    }
    printf("\n");
    printf("Enter the number to insert : ");
    scanf("%d",&num);
    new_node->data=num;
    if(isempty(head))
    {
        head=new_node;
        new_node->next=head;
        printf("\n");
        printf("INSERTION SUCCESSFULY.");
    }
    else
    {
        sn* ptr=head;
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        new_node->next=head;
        ptr->next=new_node;
        head=new_node;
        printf("\n");
        printf("INSERTION SUCCESSFULY.");
    }
    return  head;
}
sn* insertInEnd(sn* head)
{
    if(isempty(head))
    {
        head=insertInFront(head);
        return head;
    }
    int num;
    sn* new_node=(sn*)malloc(sizeof(sn));
    if(new_node==NULL)
    {
        printf("\n");
        printf("MEMORY NOT AVAILABLE.");
        return head;
    }
    printf("\n");
    printf("Enter the number to insert : ");
    scanf("%d",&num);
    new_node->data=num;
    sn* ptr=head;
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    new_node->next=ptr->next;
    ptr->next=new_node;
    return head;
    printf("\n");
    printf("INSERTION SUCCESSFULY.");
}
sn* deleteFromFront(sn* head)
{
    if(isempty(head))
    {
        printf("\n");
        printf("LINKED LIST IS EMPTY.");
        return head;
    }
    if(head==head->next)
    {
        sn* ptr=head;
        head=NULL;
        free(ptr);
        printf("\n");
        printf("DELETION SUCCESSFULY.");
        return head;
    }
    sn* ptr=head;
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    ptr->next=head->next;
    free(head);
    head=ptr->next;
    printf("\n");
    printf("DELETION SUCCESSFULY.");
    return head;
}
sn* deleteFromEnd(sn* head)
{
    if(isempty(head))
    {
        printf("\n");
        printf("LINKED LIST IS EMPTY.");
        return head;
    }
    if(head==head->next)
    {
        head=deleteFromFront(head);
        printf("\n");
        printf("DELETION SUCCESSFULY.");
        return head;
    }
    sn* ptr1=head,*ptr2;
    while(ptr1->next!=head)
    {
        ptr2=ptr1;
        ptr1=ptr1->next;
    }
    ptr2->next=ptr1->next;
    free(ptr1);
    printf("\n");
    printf("DELETION SUCCESSFULY.");
    return head;
}
void display(sn* head)
{
    if(isempty(head))
    {
        printf("\n");
        printf("LINKED LIST IS EMPTY.");
        return;
    }
    sn* ptr=head;
    printf("\n");
    do
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
    printf("NULL.");
}
int main()
{
    int x;
    sn* head=NULL;
    do
    {
        printf("\n");
        printf("Menu : \n");
        printf("1 for Insertion In Front.\n");
        printf("2 for Insertion In End.\n");
        printf("3 for Deletion From Front.\n");
        printf("4 for Deletion From End.\n");
        printf("5 for Display.\n");
        printf("Any other number to EXIT.\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                head=insertInFront(head);
                break;
            case 2:
                head =insertInEnd(head);
                break;
            case 3:
                head=deleteFromFront(head);
                break;
            case 4:
                head=deleteFromEnd(head);
                break;
            case 5:
                display(head);
                break;
            default:
                printf("EXIT.....\n");
                exit(0);
        }
    }while(1);
}