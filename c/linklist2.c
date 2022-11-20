#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int value;
    struct student *next;
} node;

node*createnode();
node*insertion();
node*delection();
node*display();


node *createnode()
{
    int roll;
    node *new_node;
    new_node = (node *)malloc(sizeof(node));
    printf("\n enter the term to be inserted");
    scanf("%d", &roll);
    new_node->value = roll;
    new_node->next = NULL;
    return new_node;
} 

node *display(node *start)
{
    node *temp;
    temp = start;
    while (temp != NULL)
    {
        printf("%d->", temp->value);
        temp = temp->next;
    } 
}
node *insertion(node *start)
{
    node *new_node;
    new_node = createnode();                    
    int choice;
    printf("\nwhere do you want to insert the term\n");
    printf("\n press 1 to insert at start\n");
    printf("\n press 2 to insert at end\n");
    printf("\n press 3 to insert at the middle\n");
    scanf("%d",&choice);
if (choice ==1)
{
    
    new_node->next = start;
    start = new_node;
    return start;
}
else if (choice ==2)
{

node *temp;
temp=start;
while(temp->next == NULL){
  temp = temp->next;
}

temp->next = new_node;
new_node->next=NULL;


    
}
else if (choice ==3 )
{

   









}

}

int main()
{
    int choice;
    int ch = 0;

    node *newnode;
    node *start = NULL;
    node *end = NULL;
    while (ch == 0)
    {
        printf("\n1. Insertion");
        printf("\n2. delection");
        printf("\n3. display");
        printf("\n4. exit\n");

        printf("\nenter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            start = insertion(start);
            break;

        case 2:
            //start = deletion(start);
            break;
        case 3:
            display(start);
            break;
        case 4:
            ch++;
            break;

        default:
            printf("Invalid choice");
            break;
        }


        
    }
    return 0;
}



