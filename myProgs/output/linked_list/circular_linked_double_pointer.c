#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct cNode
{
    int data;
    struct cNode* next;
}sn;
bool isempty(sn** head)
{
    if(*head==NULL)
    {
        return true;
    }
    return false;
}
void insertInFront(sn** head)
{
    int num;
    sn* new_node=(sn*)malloc(sizeof(sn));
    if(new_node==NULL)
    {
        printf("\n");
        printf("MEMORY NOT AVAILABLE.");
        return;
    }
    printf("\n");
    printf("Enter the number to insert : ");
    scanf("%d",&num);
    new_node->data=num;
    if(isempty(*head))
    {
        *head=new_node;
        new_node->next=*head;
        printf("\n");
        printf("INSERTION SUCCESSFULY.");
    }
    else
    {
        new_node->next=*head;
        *head=new_node;
        printf("\n");
        printf("INSERTION SUCCESSFULY.");
    }
}
void insertInEnd(sn** head)
{
    if(isempty(*head))
    {
        insertInFront(*head);
        return;
    }
    int num;
    sn* new_node=(sn*)malloc(sizeof(sn));
    if(new_node==NULL)
    {
        printf("\n");
        printf("MEMORY NOT AVAILABLE.");
        return;
    }
    printf("\n");
    printf("Enter the number to insert : ");
    scanf("%d",&num);
    new_node->data=num;
    sn* ptr=*head;
    while(ptr->next!=(*head))
    {
        ptr=ptr->next;
    }
    new_node->next=ptr->next;
    ptr->next=new_node;
    printf("\n");
    printf("INSERTION SUCCESSFULY.");
}
void deleteFromFront(sn** head)
{
    if(isempty(*head))
    {
        printf("\n");
        printf("LINKED LIST IS EMPTY.");
        return;
    }
    if(*head==(*head)->next)
    {
        sn* ptr=*head;
        *head=NULL;
        printf("\n");
        printf("DELETION SUCCESSFULY.");
        return;
    }
    sn* ptr=*head;
    *head=(*head)->next;
    free(ptr);
}
void deleteFromEnd(sn** head)
{
    if(isempty(*head))
    {
        printf("\n");
        printf("LINKED LIST IS EMPTY.");
        return;
    }
    if(*head==(*head)->next)
    {
        deleteFromFront(*head);
        printf("\n");
        printf("DELETION SUCCESSFULY.");
        return;
    }
    sn* ptr1=*head,*ptr2;
    while(ptr1->next!=(*head))
    {
        ptr2=ptr1;
        ptr1=ptr1->next;
    }
    ptr2->next=ptr1->next;
    free(ptr1);
}
void display(sn** head)
{
    if(isempty(*head))
    {
        printf("\n");
        printf("LINKED LIST IS EMPTY.");
        return;
    }
    sn* ptr=*head;
    printf("\n");
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
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
                insertInFront(&head);
                break;
            case 2:
                insertInEnd(&head);
                break;
            case 3:
                deleteFromFront(&head);
                break;
            case 4:
                deleteFromEnd(&head);
                break;
            case 5:
                display(&head);
                break;
            default:
                printf("EXIT.....\n");
                exit(0);
        }
    }while(1);
}