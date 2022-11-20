#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* next;
};
struct node *head;
struct node *new_node;
struct node *temp;
int main()
{
int n,s,k;
printf("enter the total number of people");
scanf("%d",&n);
printf("enter the number to be skiped");
scanf("%d",&k);
k = k+1;

head = malloc(sizeof(struct node));
head->data=1;
temp=head;

for (int i = 2; i <= n; i++)
{
    new_node = malloc(sizeof(struct node));
    temp->next = new_node;
    new_node->data=i;
    new_node->next=head;
    temp = new_node;
}
for (int j = n; j > 1;j--)
{
    for (int r = 0; r < k-1 ; ++r)
    {
        temp = temp->next;
        temp->next = temp->next->next;

    }
    printf("the safe position is %d",temp->data);
    
    return 0;
}





return 0;
}