#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;

}sn;
sn* insert(sn* front)
{
    int num;
    sn* new_node=(sn*)malloc(sizeof(sn));
    if(new_node==NULL)
    {
        printf("\n");
        printf("Memory is Full.");
        return front;
    }
    else
    {
        new_node->prev=NULL;
        new_node->next=NULL;
        printf("\n");
        printf("Enter the number to insert : ");
        scanf("%d",&num);
        new_node->data=num;
    }
    if(front==NULL)
    {
        front=new_node;
        new_node->prev=NULL;
        new_node->next=NULL;
    }
    else if(front->next==NULL)
    {
        new_node->prev=front;
        front->next=new_node;
    }
    else
    {
        sn* ptr=front;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        new_node->prev=ptr;
        ptr->next=new_node;
    }
    return front;
}
int findMinimum(sn* front)
{
    sn* ptr=front;
    int min=ptr->data;
    while(ptr!=NULL)
    {
        if(min>ptr->data)
        {
            min=ptr->data;
        }
        ptr=ptr->next;
    }
    return min;
}
sn* delete(sn* front)
{
    //int min;
    if(front==NULL)
    {
        printf("\n");
        printf("Queue is Empty.");
        return front;
    }
    else if(front->next==NULL)
    {
        sn* ptr=front;
        free(ptr);
        front=NULL;
        return front;
    }
    else if(front->data==findMinimum(front))
    {
        sn* ptr=front;
        front=ptr->next;
        front->prev=NULL;
        free(ptr);
        return front;
    }
    else
    {
        int min=findMinimum(front);
        sn* ptr=front;
        while(ptr->data!=min)
        {
            ptr=ptr->next;
        }
        sn* ptr2=ptr->prev;
        ptr2->next=ptr->next;
        free(ptr);
        printf("\n");
        printf("Deletion Successful.");
    }
    return front;
}
void display(sn* front)
{
    sn* ptr=front;
    printf("\n");
    printf("The Queue is : ");
    while(ptr!=NULL)
    {
        printf("%d -> ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}
int main()
{
    sn* front=NULL;
    //int min=0;
    int x;
    do
    {
        printf("\n");
        printf("Main Menu.\n");
        printf("1 for insert in Queue.\n");
        printf("2 for serve in Queue.\n");
        printf("3 for display the Queue.\n");
        printf("Any other number to Exit.\n");
        printf("Enter the choice :");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                front=insert(front);
                break;
            case 2:
                front=delete(front);
                break;
            case 3: 
                display(front);
                break;
            default:
                printf("\nEXIT....");
                exit(0);
        }
    }while(1);
    return 0;
}