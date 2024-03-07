#include<stdio.h>
#define max 10
#include<stdlib.h>
void push(int stk[],int *top,int val)
{
    if(*top<max)
    {
        *top=*top+1;
        stk[*top]=val;
    }
    else
    {
        printf("stack is full");
        exit(0);
    }
}
void pop(int stk[],int *top,int *val)
{
    if(*top>=0)
    {
        *val=stk[*top];
        printf("the element to be deleted is %d",*val);
        *top=*top-1;
    }
    else
    {
        printf("stack is empty");
        exit(0);
    }
}
void traverse(int stk[],int *top)
{
    while(*top>=0)
    {
        printf("%d",stk[*top]);
        *top=*top-1;
    }
    if(*top==-1)
    {
        
        exit(0);
    }
}
int main()
{
     int choice,item;
     int stk[max];
     int top=-1;
 
    do
    {
    printf("enter your choice");
    scanf("%d",&choice);
        switch(choice)
    {
        case 1:
        printf("enter the value to push");
        scanf("%d",&item);
        push(stk,&top,item);
        break;
        case 2:
        pop(stk,&top,&item);
        break;
        case 3:
        traverse(stk,&top);
        break;
        default:
        exit(0);
        
    }
    }while(1);
    return 0;
    
}