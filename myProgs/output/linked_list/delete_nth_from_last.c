#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Node{
    int data;
    struct Node* next;
}sn;
sn* head=NULL;
int nth=0;
void insertInEnd()
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
    printf("Enter the number: ");
    scanf("%d",&num);
    new_node->data=num;
    if(head==NULL)
    {
        nth++;
        new_node->next=head;
        head=new_node;
        printf("\n");
        printf("Insertion Successfull.\n");
    }
    else
    {
        sn* ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        nth++;
        ptr->next=new_node;
        new_node->next=NULL;
        printf("\n");
        printf("Insertion Successfull.\n");
    }
}
void delete()
{
    int node_num;
    printf("\n");
    printf("Enter the node.\n");
    scanf("%d",&node_num);
    if(node_num>nth)
    {
        printf("\n");
        printf("Node Not Present.\n");
        return;
    }
    else
    {
        int count1 =1;
        int count2 = nth-node_num+1;
        sn* ptr1=head,*ptr2;
        while(count1<count2)
        {
            ptr2=ptr1;
            ptr1=ptr1->next;
            count1++;
        }
        ptr2->next=ptr1->next;
        free(ptr1);
        nth--;
        printf("\n");
        printf("Deletion Successful.\n");
    }
}
void display()
{
    if(head==NULL)
    {
        printf("\n");
        printf("Empty.");
    }
    else{
        printf("\n");
        sn* ptr=head;
        while(ptr!=NULL)
        {
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }
        printf("NULL.\n");
    }
}
int main()
{
    int x;
    do{
        printf("\n");
        printf("MAIN MENU.\n");
        printf("1 for Insertion.\n");
        printf("2 for deletion.\n");
        printf("3 for display.\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                insertInEnd();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            default:
            exit(0);
        }
    }while(1);
}