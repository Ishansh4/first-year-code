#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
} node;








    

int main()
{
    struct node *head;
    head = (node *)malloc(sizeof(node *));
    struct node *second;
    second = (node *)malloc(sizeof(node *));
    struct node *third;
    third = (node *)malloc(sizeof(node *));

    head->prev = NULL;
    second->prev = head;
    third->prev = second;

    head->data = 20;
    second->data = 30;
    third->data = 40;

    head->next = second;
    second->next = third;
    third->next = NULL;

    
    
struct node *newnode;
      newnode = (node *)malloc(sizeof(node *));
      
      newnode->data=50;
      newnode->next=head;
      newnode->prev=NULL;
      
      head->prev=newnode;
      head=newnode;

    
    struct node *ptr;
    printf("\n printing values...\n");
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}

