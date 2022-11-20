#include<stdio.h>
#include<stdlib.h>
struct node dequeue{
    int data;
    struct dequeue*next;

}

struct dequeue*ptr=NULL;
struct dequeue*temp=NULL;
struct dequeue*rear=NULL;
struct dequeue*front=NULL;


struct dequeue* NewNode()
{
	struct list* node;
	node=(struct list*)malloc(sizeof(struct list));
    node->data=NULL;
	node->next=NULL;
	if(node!=NULL)
		return node;
	else{
		printf("\nOverflow");
		exit(1);
	}
}

int deletefront(){
    int item;
	if(front==NULL)
	{
		printf("\nQueue Underflow");
		exit(1);
	}
	temp=front;
	item=temp->data;
	front=front->next;
	free(temp);
	return item;
}

int DeleteLast()        //inefficient
{
    struct dequeue*ptr=NULL;
    ptr=front;
    if(front==rear)
    {
        free(front);
        front=NULL;
        rear=NULL;
        return;
    }
    while(ptr->next!=rear)
    {
        ptr=ptr->next;
    }
    temp=rear;
    rear=ptr;
    ptr->next=NULL;
    free(temp);
}

void InsertFirst(int item)
{
    struct dequeue*node=NewNode();
    node->info=item;
    if(front==NULL)
    {
		front=node;
		rear=node;
		return;
	}
    node->next=front;
    front=node;
}


int main()
{
	int data,choice;
	while(1)
	{
		printf("\n1.Enqueue(InsertLast)
        \n2.Dequeue(DeleteFirst)
        \n3.Insert First\n4.Delete Last\n5.Display\n6.Exit\n");
		printf("\nEnter ur choice:");
		switch(getch())
		{
		case '1':
			printf("\nEnter a item you want to Insert :");
			scanf("%d",&data);
			Enqueue(data);
			break;
		case '2':
			Dequeue();
			break;
        case '3':
			printf("\nEnter a item you want to Insert :");
			scanf("%d",&data);
			InsertFirst(data);
			break;
		case '4':
			DeleteLast();
			break;
		case '5':
			print();
			break;
		case '6':
			exit(0);
		default:
			printf("\nEnter a valid choice");
			break;
		}
	}
	return 0;