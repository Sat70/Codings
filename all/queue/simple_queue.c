#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define max 5
int front=-1;
int rare =-1;
int a[max];
bool isfull();
bool isempty();
void push();
void pop();
void display();
int main()
{
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
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            default:
                printf("Done->");
                exit(0);
        }
    }while(1);
}
bool isfull()
{
    if(rare==max-1)
    {
        return false;
    }
    return true;
}
bool isempty()
{
    if(rare==-1)
    {
        return false;
    }
    return true;
}
void push()
{
    if(isfull())
    {
        int n;
        if(front ==-1)
        {
            printf("\n");
            printf("Enter the number to be pushed :");
            scanf("%d",&n);
            front++;
            rare++;
            a[rare]=n;
        }
        else
        {
            printf("\n");
            printf("Enter the number to be pushed :");
            scanf("%d",&n);
            rare++;
            a[rare]=n;
        }
    }
    else
    {
        printf("\n");
        printf("Sorry, Stack is Full.\n");
    }
    return;
}
void pop()
{
    if(isempty())
    {
        if(front<rare)
        {
           printf("\n");
           printf("The Poped element is : %d\n",a[front]);
           front++;
        }
        else if(rare==front)
        {
           printf("\n");
           printf("The Poped element is : %d\n",a[front]);
           rare=-1;
           front=-1;
       }
     }
    else
    {
        printf("\n");
        printf("Sorry, Stack is Empty.\n");
    }
    return;
}
void display()
{
    printf("\n");
    if(isempty())
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










