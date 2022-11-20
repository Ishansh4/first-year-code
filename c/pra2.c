#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// void createNode()
// {
//     int value;
//     struct Node *temp, *last;
//     head = (struct Node *)malloc(sizeof(struct Node));
//     printf("Enter the element you want to enter");
//     scanf("%d", &value);
//     head->data = value;
//     head->next = NULL;
//     last = head;
// }
void traversal(struct Node *temp)
{
    // temp = (struct Node *)malloc(sizeof(struct Node));

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void insertBeg(struct Node *head, int value)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->next = head;
    temp->data = value;

    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
}

struct Node *insertAtIndex(struct Node *head, int value, int index)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    temp->data = value;
    temp->next = p->next;
    p->next = temp;

    return head;
}

struct Node *insertEnd(struct Node *head, int value)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }

    temp->data = value;
    p->next = temp;
    temp->next = NULL;

    return head;
}

struct Node *deleteFirst(struct Node *head)
{
    struct Node *temp = head;
    head = temp->next; // new head will be the next member for the prev head
    free(temp);

    return head;
}

struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *temp = head;
    struct Node *tempNext = head->next;
    int i = 0;
    while (i != index - 1)
    {
        temp = temp->next;
        tempNext = tempNext->next;
        i++;
    }

    temp->next = tempNext->next;
    free(tempNext);
    return head;
}

struct Node *deleteEnd(struct Node *head){
    struct Node *temp = head;
    struct Node *tempNext = head->next;

    while(tempNext->next!=NULL){
        temp=temp->next;
        tempNext=tempNext->next;
    }
    temp->next=NULL;
    free(tempNext);

    return head;
}

// void main()
// {
//     struct Node *head;
//     head = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *second;
//     second = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *third;
//     third = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 10;
//     head->next = second;

//     second->data = 30;
//     second->next = third;

//     third->data = 20;
//     third->next = NULL;
//     // insertBeg(head, 34);
//     insertEnd(head, 45);
//     // traversal(head);
// }

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    traversal(head);
    // head = insertAtFirst(head, 56);
    head = insertAtIndex(head, 56, 1);
    // head = insertEnd(head, 87);
    // head = insertAfterNode(head, third, 45);
    printf("\nLinked list after insertion\n");
    traversal(head);

    printf("\nLinked list after deletion\n");
    //head = deleteFirst(head);
    // head = deleteAtIndex(head, 3);
    // traversal(head);
    head = deleteEnd(head);
    traversal(head);

    return 0;
}