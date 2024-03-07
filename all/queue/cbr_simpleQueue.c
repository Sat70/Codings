#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define max 5
int front=-1;
int rare =-1;
int a[max];
bool isfull(int*);
bool isempty(int*);
void push(int*,int*);
void pop(int*,int*);
void display(int*);
int main()
{
    int *f=&front;
    int *r=&rare;
    int ch;
    do
    {
        printf("\n");
        printf("Menu :\n");
        printf("1 for Push.\n");
        printf("2 for Pop.\n");
        printf("3 for Display.\n");
        printf("4 for Exit.\n");
        printf("Enter your choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push(f,r);
                break;
            case 2:
                pop(f,r);
                break;
            case 3:
                display(r);
                break;
            default:
                printf("Done->");
                exit(0);
        }
    }while(1);
}
bool isfull(int *r)
{
    if((*r)==max-1)
    {
        return false;
    }
    return true;
}
bool isempty(int *r)
{
    if((*r)==-1)
    {
        return false;
    }
    return true;
}
void push(int *f,int *r)
{
    if(isfull(r))
    {
        int n;
        if((*f) ==-1)
        {
            printf("\n");
            printf("Enter the number to be pushed :");
            scanf("%d",&n);
            *f=(*f)+1;
            *r=(*r)+1;
            a[*r]=n;
        }
        else
        {
            printf("\n");
            printf("Enter the number to be pushed :");
            scanf("%d",&n);
            *r=(*r)+1;
            a[*r]=n;
        }
    }
    else
    {
        printf("\n");
        printf("Sorry, Stack is Full.\n");
    }
    return;
}
void pop(int *f,int *r)
{
    if(isempty(r))
    {
        if((*f)<(*r))
        {
           printf("\n");
           printf("The Poped element is : %d\n",a[*f]);
           *f=(*f)+1;
        }
        else if((*r)==(*f))
        {
           printf("\n");
           printf("The Poped element is : %d\n",a[*f]);
           *r=-1;
           *f=-1;
       }
     }
    else
    {
        printf("\n");
        printf("Sorry, Stack is Empty.\n");
    }
    return;
}
void display(int *r)
{
    printf("\n");
    if(isempty(r))
    {
        for(int i=front;i<=rare;i++)
        {
            printf("%d ",a[i]);
        }
    }
    else
    {
        printf("\n");
        printf("Sorry, Stack is Empty.\n");
    }
    return;
}










