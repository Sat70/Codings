#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    /* data */
    int data;
    struct Node* next;
    
}sn;
sn* insert(sn* head,int key)
{
    sn* new_node=(sn*)malloc(sizeof(sn));
    if(!new_node)
    {
        printf("\n");
        printf("Memory Unavailable...");
        return head;
    }
    else
    {
        new_node->data=key;
        new_node->next=head;
        head=new_node;
        return head;
    }
}
sn* join(sn* head1,sn* head2)
{
    if(head1==NULL || head2==NULL)
    {
        printf("\n");
        printf("One Of The List Is Empty....");
        return head1;
    }
    else{
        sn* ptr=head1;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=head2;
        return head1;
    }
}
void display(sn* head)
{
    if(head==NULL)
    {
        printf("\n");
        printf("One Of The List Is Empty....");
        return;
    }
    else{
        sn* ptr=head;
        printf("\n");
        while(ptr!=NULL)
        {
            printf("%d -> ",ptr->data);
            ptr=ptr->next;
        }
        printf("NULL\n");
    }
}
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={5,4,3,2,1};
    int i=0;
    sn* head1=NULL;
    sn* head2=NULL;
    while(i<5)
    {
        head1=insert(head1,a[i]);
        i++;
    }
    i=0;
    while(i<5)
    {
        head2=insert(head2,b[i]);
        i++;
    }
    printf("\n");
    printf("The previos list are : \n");
    display(head1);
    display(head2);
    printf("\n");
    printf("The joined list are : \n");
    join(head1,head2);
    display(head1);
    return 0;
}
