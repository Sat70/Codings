#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool isempty();
typedef struct Node
{
    int data;
    struct Node* next;
}sn;
sn* head =NULL;
void insertInFront()
{
    int num;
    printf("\n");
    printf("Enter the number to insert : ");
    scanf("%d",&num);
    sn* new_node=(struct Node*)malloc(sizeof(struct Node));
    if(new_node==NULL)
    {
        printf("\n");
        printf("Memory is not available./n");
        return;
    }
    new_node->data=num;
    new_node->next=head;
    head=new_node;
    printf("\n");
    printf("Insetion Successfull.\n");
}
void insertInEnd()
{
    int num;
    printf("\n");
    printf("Enter the number to insert : ");
    scanf("%d",&num);
    sn* new_node=(struct Node*)malloc(sizeof(struct Node));
    if(new_node==NULL)
    {
        printf("\n");
        printf("Memory is not available./n");
        return;
    }
    if(isempty())
    {
        head=new_node;
        new_node->data=num;
        new_node->next=NULL;
        printf("\n");
        printf("Insertion Successfull.\n");
        return;
    }
    sn* ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    new_node->data=num;
    new_node->next=NULL;
    ptr->next=new_node;
    printf("\n");
    printf("Insertion Successfull.\n");
}
void deleteFromFront()
{
    if(head==NULL)
    {
        printf("\n");
        printf("List Is Empty./n");
        return;
    }
    head=head->next;
    printf("\n");
    printf("Deletion Successfull.\n");
}
void deleteFromEnd()
{
    if(head==NULL)
    {
        printf("\n");
        printf("List Is Empty./n");
        return;
    }
    sn* ptr1=head,*ptr2;
    while(ptr1->next!=NULL)
    {
        ptr2=ptr1;
        ptr1=ptr1->next;
    }
    ptr2->next=NULL;
    printf("\n");
    printf("Deletion Successfull.\n");
}
void distinct()
{
    if(isempty())
    {
        printf("\n");
        printf("List Is Empty.\n");
        return;
    }
    if(head->next==NULL)
    {
        printf("\n");
        printf("List Is Distinct.\n");
        return;
    }
    sn* p1=head,*p2,*p3;
    while(p1!=NULL)
    {
        p2=p1;
        p3=p2->next;
        while(p3!=NULL)
        {
            if(p3->data==p1->data)
            {
                p2->next=p3->next;
                free(p3);
            }
            else
            {
                p2=p2->next;
                p3=p2->next;
            }
        }
        p1=p1->next;
    }
}
void display()
{
    if(head==NULL)
    {
        printf("\n");
        printf("List Is Empty./n");
        return;
    }
    printf("\n");
    printf("The Linked List is :\n");
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
    int x;
    do 
    {
        printf("\n");
        printf("Menu : \n");
        printf("1 for Insertion in front.\n");
        printf("2 for Insertion in end before NULL.\n");
        printf("3 for Deletion from front.\n");
        printf("4 for Deletion from end.\n");
        printf("5 for Distinct.\n");
        printf("6 for Display.\n");
        printf("Any other number to EXIT.\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                insertInFront();
                break;
            case 2:
                insertInEnd();
                break;
            case 3:
                deleteFromFront();
                break;
            case 4:
                deleteFromEnd();
                break;
            case 5:
                distinct();
                break;
            case 6:
                display();
                break;
            default:
                printf("EXIT.....\n");
                exit(0);
        }
    }while(1);
    return 0;
}
bool isempty()
{
    if(head==NULL)
    {
        return true;
    }
    return false;
}