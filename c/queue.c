#include <stdio.h>
# define SIZE 100
void insertion();
void deletion();
void show();
int queue[SIZE];
int Rear = - 1;
int Front = - 1;
main()
{
    int ch;
    while (1)
    {
        printf("1.insertion \n");
        printf("2.delection \n");
        printf("3.Display \n");
        printf("4.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            insertion();
            break;
            case 2:
            deletion();
            break;
            case 3:
            show();
            break;
            case 4:
            
            default:
            printf("Incorrect choice \n");
        } 
    } 
} 
 
void insertion()
{
    int item;
    if (Rear == SIZE - 1)
       printf("Overflow \n");
    else
    {
        if (Front == - 1)
      
        Front = 0;
        printf("enter the term\n : ");
        scanf("%d", &item);
        Rear++;
        queue[Rear] = item;
    }
} 
 
void deletion()
{
    if (Front == - 1 || Front > Rear)
    {
        printf("Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", queue[Front]);
        Front = Front + 1;
    }
} 
 
void show()
{
    
    if (Front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
} 