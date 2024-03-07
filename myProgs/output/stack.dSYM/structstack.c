#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct stack{
    int a[MAX];
    int top;
}*st;
void initialize()
{
    st->top=-1;
}
void push()
{
    if(st->top==MAX-1)
    {
        printf("Stack Is Full\n");
        return;
    }
    int n;
    printf("enter the number to insert :");
    scanf("%d",&n);
    st->top++;
    st->a[st->top]=n;
   // return;
}
void pop()
{
    if(st->top==-1)
    {
        printf("Stack Is Empty\n");
        return;
    }
    //st->a[st->top];
    st->top--;
   // return ;
}
void display()
{
    if(st->top==-1)
    {
        printf("Stack Is Empty\n");
        return;
    }
    int temp=st->top;
    while(temp>=0)
    {
        printf("%d\n",st->a[temp]);
        temp--;
    }
    //return;
}

int main()
{
    st->top=-1;
    int ch;
    //getchar();
    //initialize();
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