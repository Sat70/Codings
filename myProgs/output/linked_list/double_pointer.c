#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Node
{
    int data;
    struct Node* next;
}sn;
bool isempty();
void insertInFront(sn** head)
{
    int num;
    printf("\n");
    printf("Enter the number to insert : ");
    scanf("%d",&num);
    sn* new_node=(struct Node*)malloc(sizeof(struct Node));
    if(new_node==NULL)
    {
        printf("\n");
        printf("Memory is not Available.\n");
        return;
    }
    new_node->data=num;
    new_node->next=*head;
    *head=new_node;
    printf("\n");
    //printf("Inserted Element Is :%d\n",head->data);
    printf("Insetion Successfull.\n");
}
void insertInEnd(sn** head)
{
    if(*head==NULL)
    {
        insertInFront(head);
        return;
    }
    int num;
    printf("\n");
    printf("Enter the number to insert : ");
    scanf("%d",&num);
    sn* new_node=(struct Node*)malloc(sizeof(struct Node));
    if(new_node==NULL)
    {
        printf("\n");
        printf("Memory is not Available.\n");
        return;
    }
    new_node->data=num;
    sn* ptr=*head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }   
    ptr->next=new_node;
    new_node->next=NULL;
    printf("\n");
    printf("Insetion Successfull.\n");
}
void deleteFromFront(sn** head)
{
    if(*head==NULL)
    {
        printf("\n");
        printf("List Is Empty.\n");
        return;
    }
    sn* ptr=*head;
    *head=ptr->next;
    free(ptr);
    printf("\n");
    printf("Deletion Successful.\n");
}
void deleteFromEnd(sn** head)
{
    if(*head==NULL)
    {
        printf("\n");
        printf("List Is Empty.\n");
        return;
    }
    sn* ptr1=*head,*ptr2;
    while(ptr1->next!=NULL)
    {
        ptr2=ptr1;
        ptr1=ptr1->next;
    }    
    ptr2->next=ptr1->next;
    free(ptr1);
}
void display(sn** head)
{
    if(*head==NULL)
    {
        printf("\n");
        printf("List Is Empty./n");
        return;
    }
    printf("\n");
    printf("The Linked List is :\n");
    sn* ptr=*head;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
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
    return 0;
}