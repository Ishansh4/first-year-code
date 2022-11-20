#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;



    


int main()
{
  struct node *head;
  head = (struct node*) malloc (sizeof(struct node));

  struct node *second;
  second = (struct node*) malloc (sizeof(struct node));

  struct node *third;
  third = (struct node*) malloc (sizeof(struct node));

  struct node *forth;
  forth = (struct node*) malloc (sizeof(struct node));


  head->data=10;
  head->next=second;

  second->data=20;
  second->next=third;

  third->data=30;
  third->next=forth;

  forth->data=40;
  forth->next=NULL;



node *temp;
    
    temp = forth->next ;
    temp = head;
    do
    {
        printf("%d->",temp->data);
        temp = temp->next;} 
    while (temp->next!=head);






 

    









return 0;
}




