#define max 10
#include<stdio.h>
#include<stdlib.h>
typedef struct cqueue
{
    int arr[max];
    int front;
    int rear;
}cq;
void insert(cq *q1, int item)
{
    if(q1->front==(q1->rear+1)%max)
    printf("queue is full");
    else if(q1->rear==-1)
    {
    q1->front=q1->rear=0;
    q1->arr[q1->rear]=item;
    }
    else
    {
    q1->rear=(q1->rear+1)%max;
    q1->arr[q1->rear]=item;
    } 
}
void delete(cq *q1)
{
    if(q1->front==-1)
    printf("queue is empty");
    else if(q1->front==q1->rear)
    q1->front=q1->rear=-1;
    else
    q1->front=(q1->front+1)%max;
}

void display(cq *q1)
{
    if(q1->front==-1)
    printf("queue is empty");
    else
    {
        for(int i=q1->front;i!=q1->rear;i=(i+1)%max)
        printf("%d\n",q1->arr[i]);
    }
    
}
int main()
{
    int ch,item;

    cq q2;
    q2.front=-1;
    q2.rear=-1;
    do{
        printf("enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter the value");
            scanf("%d",&item);
            insert(&q2,item);
            break;
            case 2:
            delete(&q2);
            break;
            case 3:
            display(&q2);
            break;
            default:
            printf("Wrong choice");
            exit(0);
            
        }
    }while(1);
return 0;
}