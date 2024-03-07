#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Node{
    int data;
    struct Node* next;
}sn;
sn* head1=NULL;
sn* head2=NULL;
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
int multiplication()
{
    if(head1==NULL || head2==NULL)
    {
        printf("\n");
        printf("LIST IS EMPTY.\n");
    }
    int mul=0;
    int sum1=0;
    int sum2=0;
    sn* ptr1=head1,*ptr2=head2;
    while(ptr1!=NULL)
    {
        sum1=sum1*10+ptr1->data;
        ptr1=ptr1->next;
    }
    while(ptr2!=NULL)
    {
        sum2=sum2*10+ptr2->data;
        ptr2=ptr2->next;
    }
    printf("\n");
    printf("The result is : %d and %d",sum1,sum2);
   // printf("\n");
    //printf("The Multiplication is : %d",sum1*sum2);
    return (sum1*sum2);
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
    printf("NULL\n");
    printf("Result is : %d",multiplication());
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
        printf("3 perform multiplication of digits.\n");
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
                multiplication();
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
