#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node *next;
}node;

node *cnode(node *head){
int come;
node *createnode;
createnode = (node*)malloc(sizeof(node));
printf("enter the term ot inserted");
scanf("%d",&come);
createnode->data=come;
createnode->next=NULL;
return createnode;
}
node *display(node *head){

node *temp;
    temp = head;
    while (temp-> next!= NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    } 


}

node *insertion(node *head){

 node *createnode;
createnode = cnode(createnode);

createnode->next=head;
head=createnode;

return head;

}

node *rinsertion(node *head){

node *newnode;
newnode = (node*)malloc(sizeof(node));
newnode->data = 90;
newnode->next = NULL;


node *temp;
temp =head;
while (temp->next!=NULL)
{
  temp=temp->next;
}
temp->next=newnode;
}

node *minsertion(node *head){

node *newnode;
newnode = (node*)malloc(sizeof(node));
newnode->data = 100;
newnode->next = NULL;


node *temp;
temp =head;
for (int i = 0; i < 1; i++)
{
  if (temp->next!=NULL)
  {
    temp = temp->next;
  }
  
}
newnode->next = temp->next;
temp->next = newnode;
}

node *fdelete(node *head){
  head=head->next;
  return head;
  
}




int main()
{

  node *head;
  head = (node*)malloc(sizeof(node));
  node *second;
  second = (node*)malloc(sizeof(node));
  node *third;
  third = (node*)malloc(sizeof(node*));

head->data=10;
head->next=second;

second->data=20;
second->next=third;

third->data=30;
third->next=NULL;


head = insertion(head);


head = rinsertion(head);

head = minsertion(head);


head = display(head);

head = fdelete(head);


}
