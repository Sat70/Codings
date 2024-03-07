#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Node{
    int data;
    struct Node* next;
}sn;
sn* head1=NULL;
sn* head2=NULL;
void insertInEnd(int info)
{
    //int num;
    sn* new_node=(sn*)malloc(sizeof(sn));
    if(new_node==NULL)
    {
        printf("\n");
        printf("MEMORY NOT AVAILABLE.\n");
        return;
    }
//printf("\n");
    //printf("Enter the number: ");
    //scanf("%d",&num);
    new_node->data=info;
    if(head1==NULL)
    {
       // nth++;
        new_node->next=head1;
        head1=new_node;
        printf("\n");
        printf("Insertion Successfull.\n");
    }
    else
    {
        sn* ptr=head1;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        //nth++;
        ptr->next=new_node;
        new_node->next=NULL;
        printf("\n");
        printf("Insertion Successfull.\n");
    }
}
void insertFirst()
{
    int num;
    sn* new_node=(sn*)malloc(sizeof(sn));
    if(new_node==NULL)
    {
        printf("\n");
        printf("MEMORY NOT AVAILABLE.\n");
        return;
    }
    printf("\n");
    printf("Enter the number : ");
    scanf("%d",&num);
    new_node->data=num;
    new_node->next=head1;
    head1=new_node;
}
void insertSecond()
{
    int num;
    sn* new_node=(sn*)malloc(sizeof(sn));
    if(new_node==NULL)
    {
        printf("\n");
        printf("MEMORY NOT AVAILABLE.\n");
        return;
    }
    printf("\n");
    printf("Enter the number : ");
    scanf("%d",&num);
    new_node->data=num;
    new_node->next=head2;
    head2=new_node;
}
void append()
{
    if(head2==NULL)
    {
        printf("\n");
        printf("LIST IS EMPTY.\n");
    }
    printf("\n");
    printf("Enter the nth node :");
    int nth;
    scanf("%d",&nth);
    sn* ptr=head2;
    int count =1;
    while(count<nth)
    {
        ptr=ptr->next;
        count++;
    }
    insertInEnd(ptr->data);
}
void display()
{
    sn* ptr1=head1,*ptr2=head2;
    printf("\n");
    printf("List First:\n");
    while(ptr1!=NULL)
    {
        printf("%d->",ptr1->data);
        ptr1=ptr1->next;
    }
    printf("NULL\n");
    printf("List Second:\n");
    while(ptr2!=NULL)
    {
        printf("%d->",ptr2->data);
        ptr2=ptr2->next;
    }
    printf("NULL.\n");
}
int main()
{
    int x;
    do
    {
        printf("\n");
        printf("MAIN MENU:\n");
        printf("1 to insert in first list.\n");
        printf("2 for insert in second list.\n");
        printf("3 perform apend of digits.\n");
        printf("4 for display.\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                insertFirst();
                break;
            case 2:
                insertSecond();
                break;
            case 3:
                append();
                break;
            case 4:
                display();
                break;
            default:
                printf("EXIT>>>");
                exit(0);
        }
    }while(1);
    return 0;

}
