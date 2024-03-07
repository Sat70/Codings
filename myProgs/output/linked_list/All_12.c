#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool isempty();
bool search();
static int num_of_nodes=0;
typedef struct Node
{
    int data;
    struct Node* next;
}sn;

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
        printf("Memory is not Available.\n");
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
    if(isempty())
    {
        insertInFront();
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
    sn* ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }   
    ptr->next=new_node;
    new_node->next=NULL;
    printf("\n");
    printf("Insetion Successfull.\n");
}
void insertBeforeNode()
{
    if(isempty())
    {
        printf("\n");
        printf("Node Not Present.\n");
        return;
    }
    int num;
    printf("\n");
    int node;
    printf("Enter the nth Node to insert :");
    scanf("%d",&node);
    if(node==1)
    {
        insertInFront();
        return;
    }
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
    printf("\n");
    printf("Insetion Successfull.\n");
}
void insertAfterNode()
{
    if(isempty())
    {
        insertInFront();
        return;
    }
    int num;
    printf("\n");
    int node;
    printf("Enter the nth Node to insert :");
    scanf("%d",&node);
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
    printf("\n");
    printf("Insetion Successfull.\n");
}
void insertBeforeData()
{
    if(isempty())
    {
        printf("\n");
        printf("List Is Empty.\n");
        return;
    }
    int num;
    printf("\n");
    int info;
    printf("Enter the nth Node to insert :");
    scanf("%d",&info);
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
    if(search(info))
    {
        sn *ptr1=head,*ptr2;
        while(ptr1->data!=info && ptr1!=NULL)
        {
            ptr2=ptr1;
            ptr1=ptr1->next;
        }
        new_node->data=num;
        new_node->next=ptr2->next;
        ptr2->next=new_node;
        printf("\n");
        printf("Insetion Successfull.\n");
    }
    else
    {
        printf("\n");
        printf("Data Not Present.\n");
    }
}
void insertAfterData()
{
    if(isempty())
    {
        printf("\n");
        printf("List Is Empty.\n");
        return;
    }
    int num;
    printf("\n");
    int info;
    printf("Enter the data to insert :");
    scanf("%d",&info);
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
    if(search(info))
    {
        sn *ptr=head;
        while(ptr->data!=info)
        {
            ptr=ptr->next;
        }
        new_node->data=num;
        new_node->next=ptr->next;
        ptr->next=new_node;
    }
    else
    {
        printf("\n");
        printf("Data Not Present.\n");
    }
}
void insertAtPos()
{
    if(isempty())
    {
        printf("\n");
        printf("List is Empty.\n");
        return;
    }
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
        printf("3 for Insertion Before A Node.\n");
        printf("4 for Insertion After A Node.\n");
        printf("5 for Insertion Before A Data.\n");
        printf("6 for Insertion After A Data.\n");
        printf("7 for Insertion At Position.\n");
        printf("8 for Deletion From Front.\n");
        printf("9 for Deletion From End.\n");
        printf("10 for Deletion Of A Node.\n");
        printf("11 for Deletion Of a Data.\n");
        printf("12 For Searching A Data.\n")
        printf("13 for Display.\n");
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
                insertBeforeNode();
                break;
            case 4:
                insertAfterNode();
                break;
            case 5:
                insertBeforeData();
                break;
            case 6:
                insertAfterData();
                break;
            case 7:
                insertAtPos();
                break;
            case 8:
                deleteFromFront();
                break;
            case 9:
                deleteFromEnd();
                break;
            case 10:
                deleteNode();
                break;
            case 11:
                deleteData();
                break;
            case 12:
                search();
                break;
            case 13:
                display();
                break;
            default:
                printf("EXIT>>>>\n");
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
bool search(int info)
{
    sn* ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data==info)
        {
            return true;
        }
    }
    return false;
}