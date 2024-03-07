#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
}sn;
sn* insertAtFirst(sn* head)
{
    int num;
    sn* new_node=(sn*)malloc(sizeof(sn));
    if(new_node==NULL)
    {
        printf("\n");
        printf("Memory Not Available.");
        return head;
    }
    printf("\n");
    printf("Enter the number : ");
    scanf("%d",&num);
    new_node->data=num;
    if(head==NULL)
    {
        new_node->prev=NULL;
        head=new_node;
        new_node->next=head;
    }
    else if(head->next==head)
    {
        sn* ptr=head;
        head->prev=new_node;
        new_node->prev=NULL;
        new_node->next=head;
        head=new_node;
        ptr->next=head;
    }
    else
    {
        sn* ptr=head;
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        head->prev=new_node;
        new_node->prev=NULL;
        new_node->next=head;
        head=new_node;
        ptr->next=head;
    }
    return head;
}
sn* insertAtEnd(sn* head)
{
    if(head==NULL)
    {
        head=insertAtFirst(head);
        return head;
    }
    else
    {
        int num;
        sn* new_node=(sn*)malloc(sizeof(sn));
        if(new_node==NULL)
        {
            printf("\n");
            printf("Memory Not Available.");
            return head;
        }
        printf("\n");
        printf("Enter the number : ");
        scanf("%d",&num);
        new_node->data=num;
        sn* ptr=head;
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        new_node->prev=ptr;
        ptr->next=new_node;
        new_node->next=head;
        return head;
    }
}
sn* deleteFromFront(sn* head)
{
    if(head==NULL)
    {
        printf("\n");
        printf("List Is Empty.\n");
        return head;
    }
    else if(head->next==head)
    {
        sn* ptr =head;
        head=NULL;
        free(ptr);
        return head;
    }
    else
    {
        sn* p=head;
        while(p->next!=head)
        {
            p=p->next;
        }
        sn* ptr=head;
        head=head->next;
        head->prev=NULL;
        p->next=head;
        free(ptr);
        return head;        
    }
}
sn* deleteFromLast(sn* head)
{
    if(head==NULL)
    {
        printf("\n");
        printf("List Is Empty.");
        return head;
    }
    else
    {
        sn* ptr1=head,*ptr2;
        while(ptr1->next!=head)
        {
            ptr2=ptr1;
            ptr1=ptr1->next;
        }
        ptr2->next=head;
        free(ptr1);
        return head;
    }
}
void display(sn* head)
{
    if(head==NULL)
    {
        printf("\n");
        printf("List is empty.\n");
    }
    else
    {
        printf("\n");
        printf("The List Is : ");
        sn* ptr=head;
        do
        {
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }while(ptr!=head);
        printf("NULL\n");
    }
}
int main()
{
    sn* head=NULL;
    int x;
    do
    {
        printf("\n");
        printf("Main Menu : \n");
        printf("Insert At Beg.\n");
        printf("Insert At Last.\n");
        printf("Delete From Beg.\n");
        printf("Delete From End.\n");
        printf("Display.\n");
        printf("Enter Your Choice : ");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                head=insertAtFirst(head);
                break;
            case 2:
                head=insertAtEnd(head);
                break;
            case 3:
                head=deleteFromFront(head);
                break;
            case 4:
                head=deleteFromLast(head);
                break;
            case 5:
                display(head);
                break;
            default:
                printf("\n");
                printf("Exit......");
                exit(0);
        }
    }while(1);
    return 0;
}