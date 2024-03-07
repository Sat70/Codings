//
//  ss.c
//  even
//
//  Created by SATYAM GUPTA on 21/08/23.
//

#include "ss.h"
//#include "stack.h"
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define max 10
int isempty(int);
int isfull(int);
void push();
void pop();
void traverse();
void display();
int st[max],top=0;
int main()
{
    for(int i=0;i<max;i++)
    {
        st[i]=0;

    }
    int ch;
    do{
        printf("Main Menu :\n");
        printf("1 for Push\n");
        printf("2 for Pop/n");
        printf("3 for Traverse\n");
        printf("Enter other numbers to exit\n");
        scanf("%d",&ch);
        switch(ch){
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
                exit(0);
        }
    }while(1);
    return 0;
}
int isempty(int n)
{
    if(st[top]==n)
    {
        return 1;
    }
    return 0;

}
int isfull(int e)
{
    if(e==max-1 && st[max-1]!=0)
    {
        return 0;
    }
    return 1;
    
}
void traverse()
{

}
void push()
{
    if(isfull(top))
    {
        printf("Enter the number to insert :");
        int n;
        scanf("%d",&n);
        st[top]=n;
        top++;
        printf("Element inserted successfully\n");
    }
    else
    {
        printf("Stack is full\n");
    }
}
void pop()
{
    printf("Enter the element to delete:\n");
    int n;
    scanf("%d",&n);
    if(isempty(n))
    {
        st[top]=0;
        top--;
        printf("Element pop successfully \n ");
        return;

    }
    else{
        printf("Element not present \n");
        return;
    }
}
void display()
{
    printf("The Stack is\n");
    for(int i=top-1;i>=0;i--)
    {
        printf("%d \n",st[i]);
    }
    return;
}
