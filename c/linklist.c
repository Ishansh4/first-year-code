#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int rollno;
    struct student *next;
} node;

node *createnode()
{
    int roll;
    node *new_node;
    new_node = (node *)malloc(sizeof(node));
    printf("\n enter the term to be inserted");
    scanf("%d", &roll);
    new_node->rollno = roll;
    new_node->next = NULL;
    return new_node;
} 

void display(node *start)
{
    node *temp;
    temp = start;
    while (temp != NULL)
    {
        printf("%d->", temp->rollno);
        temp = temp->next;
    } 
}

node *insertion(node *start)
{
    node *new_node;
    new_node = createnode();                    
    int choice;
    
    if (start == NULL)
    {
        start = new_node;
    }
    else
    {
        new_node->next = start;
        start = new_node;
    }

    display(start);
    return start;
}

/*node *delection(node *start)
{
    node *new_node;
    node *temp;

    int pos;
    printf("enter the term you want to delete");
    scanf("%d",&pos);

    int temp = start;
    //new_node->temp->next;
    temp->next=new_node;



    display(start);
    return start;
}*/

int main()
{
    int choice;
    char ch = 'y';

    node *newnode;
    node *start = NULL, *end = NULL;
    while (ch == 'y' || ch == 'Y')
    {
        printf("\n1. Insertion");
        printf("\n2. delection");
        printf("\n3. display");

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

        default:
            printf("Invalid choice");
            break;
        }

        printf("if you want to continue press y or Y");
        fflush(stdin);
        scanf("%c", &ch);
    }
    return 0;
}



