#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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
    new_node->data=num;
    new_node->next=head;
    head=new_node;
    printf("\n");
    printf("Insetion Successfull.\n");
}
void insertAfterNode()
{
    int num;
    printf("\n");
    int node;
    printf("Enter the nth Node to insert :");
    scanf("%d",&node);
    printf("\n");
    printf("Enter the number to insert : ");
    scanf("%d",&num);
    sn* new_node=(struct Node*)malloc(sizeof(struct Node));
    sn *ptr=head;
    int count =1;
    while(count<node)
    {
        ptr=ptr->next;
        count++;
    }
    new_node->data=num;
    new_node->next=ptr->next;
    ptr->next=new_node;
    printf("Insetion Successfull.\n");
}
void insertAfterData()
{
    int num;
    printf("\n");
    int info;
    printf("Enter the data to insert :");
    scanf("%d",&info);
    printf("\n");
    printf("Enter the number to insert : ");
    scanf("%d",&num);
    sn* new_node=(struct Node*)malloc(sizeof(struct Node));
    sn *ptr=head;
    flag=0;
    while(ptr!=NULL)
    {
        if(ptr->data==info)
        {
            break;
            flag=1;
        }
        ptr=ptr->next;
    }
    printf("\n");
    if(flag==1)
    {
        new_node->data=num;
        new_node->next=ptr->next;
        ptr->next=new_node;
        printf("Insetion Successfull.\n");
    }
    else
    {
        printf("No Such Element Found.\n");
    }
}
void insertAfter()
{
    printf("\n");
    printf("Press 1 for Insert After A Node.\n");
    printf("Press 2 for Insert After A Data.\n");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            insertAfterNode();
            break;
        case 2:
            insertAfterData();
            break;
        default:
            printf("Invalid Choice.\n");
            break;
    }
}
void insertBeforeNode()
{
    int num;
    printf("\n");
    int node;
    printf("Enter the nth Node to insert :");
    scanf("%d",&node);
    printf("\n");
    printf("Enter the number to insert : ");
    scanf("%d",&num);
    sn* new_node=(struct Node*)malloc(sizeof(struct Node));
    sn *ptr=head;
    count=2;
    while(count<node)
    {
        ptr=ptr->next;
        count++;
    }
    new_node->data=num;
    new_node->next=ptr->next;
    ptr->next=new_node;
    printf("Insetion Successfull.\n");
}
void insertBeforeData()
{
    int num;
    printf("\n");
    int info;
    printf("Enter the nth Node to insert :");
    scanf("%d",&info);
    printf("\n");
    printf("Enter the number to insert : ");
    scanf("%d",&num);
    sn* new_node=(struct Node*)malloc(sizeof(struct Node));
    sn *ptr1=head,*ptr2;
    while(ptr1->data==info)
    {
        ptr2=ptr1;
        ptr1=ptr1->next;
    }
    new_node->data=num;
    new_node->next=ptr2->next;
    ptr2->next=new_node;
    printf("Insetion Successfull.\n");
}
void insertBefore()
{
    printf("\n");
    printf("Press 1 for Insert Before A Node.\n");
    printf("Press 2 for Insert Bfter A Data.\n");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            insertBeforeNode();
            break;
        case 2:
            insertBeforeData();
            break;
        default:
            printf("Invalid Choice.\n");
            break;
    }
}
void display()
{
    printf("\n");
    printf("The Linked List is :\n");
    sn* ptr=head;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL");
}
int main()
{
    int x;
    do 
    {
        printf("Menu : \n");
        printf("1 for Insertion in front.\n");
        printf("2 for Insertion in end before NULL.\n");
        printf("3 for Insertion After a Node OR After a Data.\n");
        printf("4 for Insertion Before a Node Or Before a Data.\n");
        printf("5 for Display.\n");
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
                insertAfter();
                break;
            case 4:
                insertBefore();
                break;
            case 5:
                display();
                break;
            default:
                printf("EXIT.....\n");
                exit(0);
        }
    }while(1);
    return 0;
}