#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
int val;
struct node* next;
}node;
struct node* display();

struct node* createnode(){
    struct node *new_node;
    new_node = (node*)malloc(sizeof(node));
    int value;
    printf("enter the value to want to insert");
    scanf("%d",&value);

    new_node->val=value;
    new_node->next=NULL;
    return new_node;

}

node* insertion(node *start){
 node *new_node;
 new_node=createnode();

 if (start==NULL)
    {
        start =new_node;
        new_node->next =start;
    }
else 
{
    node *temp;
    temp =start;
    while(temp->next != start)    
                temp = temp->next;    
            new_node->next = start;     
            temp -> next = new_node;     
            start = new_node;    
    

}

struct node* display(node *start){

node *temp;
temp = start;
    do
    {
        printf("%d->",temp->val);
        temp = temp->next;} 
    while (temp->next!=start)
}
}
}










int main()
{
    int choice;

struct node *start=NULL;
struct node *end = NULL;
struct node *new_node;

while (choice !=4)
{
printf("\n1 insertion");
printf("\n2  display");
printf("\n3 delection");
printf("\n4 exit");
scanf("%d",&choice);

if (choice ==1)
{
    start = insertion(start);
}
else if (choice ==2){
    display(start);
}
}


