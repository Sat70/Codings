#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void display()
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;

    }
    printf("NULL\n");
    return;
}
void insert(int data)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=ptr;
    ptr=NULL;
}
int main()
{
    int n;
    printf("enter the number of element to be inserted :");
    scanf("%d",&n);
    printf("enter the values to insert :");
    scanf("%d",&a);
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    struct node *fourth=(struct node*)malloc(sizeof(struct node));
    struct node *fiveth=(struct node*)malloc(sizeof(struct node));
    struct node *sixth=(struct node*)malloc(sizeof(struct node));

    new_node->data=data;
    new_node->next=head;
    head=new_node;
    return 0;
}