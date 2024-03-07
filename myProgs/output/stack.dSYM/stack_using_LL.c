#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define max 5
int num_of_nodes=0;
typedef struct stack
{
    int data;
    struct stack* next;
}sk;
bool isempty(sk* top)
{
    if(top==NULL)
    {
        return true;
    }
    return false;
}
bool isfull()
{
    if(num_of_nodes==max)
    {
        return true;
    }
    return false;
}
sk* push(sk* top)
{
    if(isfull())
    {
        printf("\n");
        printf("STACK IS FULL.");
        return top;
    }
    int num;
    sk* new_node=(sk*)malloc(sizeof(sk));
    if(new_node==NULL)
    {
        printf("\n");
        printf("MEMORY IS FULL.");
        return top;
    }
    printf("\n");
    printf("Enter the element to push : ");
    scanf("%d",&num);
    new_node->data=num;
    num_of_nodes++;
    new_node->next=top;
    top=new_node;
    return top;
}
sk* pop(sk* top)
{
    if(isempty(top))
    {
        printf("\n");
        printf("STACK IS EMPTY.");
        return top; 
    }
    num_of_nodes--;
    sk* ptr=top;
    top=top->next;
    free(ptr);
    return top;
}
void display(sk* top)
{
    if(isempty(top))
    {
        printf("\n");
        printf("STACK IS EMPTY.");
        return;
    }
    sk* ptr=top;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    int x;
    sk* top=NULL;
    do
    {
        printf("\n");
        printf("Menu : \n");
        printf("1 for PUSH.\n");
        printf("2 for POP.\n");
        printf("3 for DISPLAY.\n");
        printf("Any other number to EXIT.\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                top=push(top);
                break;
            case 2:
                top=pop(top);
                break;
            case 3:
                display(top);
                break;
            default:
                printf("EXIT.....\n");
                exit(0);
        }
    }while(1);
}