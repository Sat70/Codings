 #include<stdio.h>
 #include<stdlib.h>
 struct node
 {
    int data;
    struct node* next;
 }*head=NULL;
 void insertb(struct node** p)
 {
     struct node*temp;
     struct node* q= *p;
     temp=(struct node*)malloc(sizeof(struct node));
     if(temp==NULL)
     {
        printf("the memory is not allocated");
     }
     printf("enter the data\n");
     scanf("%d",&temp->data);
     temp->next=NULL;
     if((*p)==NULL)
     {
         (*p)=temp;
         temp->next=*p;
         return;
     }
     while (q->next!= *p)
    {
        q = q->next;
    }
    q->next = temp;
    temp->next=(*p);
    *p=temp;
    
 }
 void insertl(struct node** p)
 {
     struct node*temp;
     struct node* q= *p;
     temp=(struct node*)malloc(sizeof(struct node));
     if(temp==NULL)
     {
        printf("the memory is not allocated");
     }
     printf("enter the data\n");
     scanf("%d",&temp->data);
     temp->next=NULL;
     if((*p)==NULL)
     {
         (*p)=temp;
         temp->next=*p;
         return;
     }
     while (q->next!=(*p))
     {
        q=q->next ;
     }
     q->next =temp;
     temp->next=(*p);
 }
 void insertp(struct node** p)
 {
        int index;
        int i;
        struct node* temp;
        struct node* q=(*p);
        temp=(struct node*)malloc(sizeof(struct node*));
        if(temp==NULL)
        {
            printf("the memory is not allocated");
        }
        printf("enter the data\n");
        scanf("%d",&temp->data);
        temp->next=NULL;
        printf("enter the index\n");
        scanf("%d",&index);
        if(index==0)
        {
           (*p)=temp;
           temp->next=*p;
           return;
        }
        for(i=0;i<index-1;i++)
        {
              q=q->next;
        }
        temp->next=q->next;
        q->next=temp;
 }
 void deleteb(struct node** p)
 {
     struct node* q=*p;
     struct node* r=*p;
     while(r->next!=(*p))
      {
           r=r->next;
      }
      (*p)=q->next;
      free(q);
      r->next=(*p);
 }
 void deletep(struct node** p)
 {
      int index,i;
      struct node*q=*p;
      struct node*r=*p;
      printf("enter the index");
      scanf("%d",&index);
      if(index==0)
      {
        while(r->next!=(*p))
        {
           r=r->next;
        }
       (*p)=q->next;
       free(q);
       r->next=(*p);
      }
       struct node* w=NULL;
       for(i=1;i<index;i++)
       {
            w=q;
            q=q->next; 
       }
       r->next=q->next;
       free(q);
      
 }
 void deletel(struct node** p)
 {
       struct node* r=NULL;
       struct node* q=*p;
       while(q->next!=(*p))
       {
          r=q;
          q=q->next;
       }
       r->next=*p;
       free(q);
 }
 void display(struct node* p)
 {
      struct node* q=p;
      do
      {
        printf("%d", q->data);
        q=q->next;
      }while(q!=p);
      printf("\n");
 }
 int main()
 {
      int choice,d;
      do
      {
          printf("enter 1 for insertion at begining and last\n");
          printf("enter 2 for display\n");
          printf("enter your choice\n");
          scanf("%d",&choice);
          switch(choice)
          {
                    case 1:
                            insertb(&head);
                            break;
                    case 2:
                            display(head);
                            break;
                    case 3:
                            insertl(&head);
                            break;
                    case 4:
                            insertp(&head);
                            break;
                    case 5:
                            deleteb(&head);
                            break;
                    case 6:
                             deletep(&head);
                             break;
                    case 7:
                             deletel(&head);
                             break;
                    default:
                              break;
          };
          printf(" do you want to continue(o,1)");
          scanf("%d",&d);
      }while(d);
      return 0;
 }
     