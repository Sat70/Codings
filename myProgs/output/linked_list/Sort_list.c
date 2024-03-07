#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
    int data;
    struct list *next;
}list;

list* insert(list*p)
{
    int d ; printf("\nDATA ") ; scanf("%d",&d);
    list *k=p, *j=(list*)malloc(sizeof(list));
    j->data=d;
    while(k->next != NULL)
    {
        k=k->next;
    }
    k->next=j;
    j->next=NULL;
    return p;
}
list * sort(list *p)
{
    list *j=p, *index=NULL;
    int temp;
    while(j!=NULL)
    {
        index=j->next;
        while(index!=NULL)
        {
            if(j->data > index->data)
            {
                temp=j->data;
                j->data=index->data;
                index->data=temp;
            }
            index=index->next;
        }
        j=j->next;
    }
    return p;
}
void display(list *p)
{
    while(p!=NULL)
    {
        printf("\n Display %d",p->data);
        p=p->next;
    }
}
int main()
{
    list *p=(list*)malloc(sizeof(list));
    printf("\nEnter the data "); int val ; scanf("%d",&val);
    p->data=val;
    p->next=NULL;
    for(int i=0;i<5;i++)
    {
        p= insert(p);
    }
    display(p);
    printf("\nSORTED IS");
    p=sort(p);
    display(p);
    
}