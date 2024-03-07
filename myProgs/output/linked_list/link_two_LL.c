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
sn* store(sn* ptr)
{
    return ptr;
}
void link()
{
        int nth;
        sn* ptr1=head1,*ptr2=head2;
        if(head1==NULL || head2==NULL)
        {
            printf("\n");
            printf("Empty.\n");
        }
        else
        {
            int count=1;
            printf("\n");
            printf("Enter the Node to be linked.\n");
            scanf("%d",&nth);
            while(count<nth)
            {
                ptr2=ptr2->next;
                count++;
            }
            while(ptr1->next!=NULL)
            {
                ptr1=ptr1->next;
            }
            ptr1->next=ptr2;
        }
        store(ptr1);
}
void check()
{
    int nth=0;
    sn* ptr1=store(ptr1);
    sn* ptr2=head2;
    while(ptr2!=NULL)
    {
        nth++;
        if(ptr1==ptr2)
        {
            printf("\n");
            printf("Found At %d position.\n",nth);
            return;
        }
        ptr2=ptr2->next;
    }
    printf("\n");
    printf("Not Found.\n");
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
                link();
                break;
            case 4:
                display();
                break;
            case 5:
                check();
                break;
            default:
                printf("EXIT>>>");
                exit(0);
        }
    }while(1);
    return 0;

}
