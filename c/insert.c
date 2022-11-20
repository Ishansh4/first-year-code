#include<stdio.h>
void dipslay();
void insert(int item);
void del(int);
void update(int);


int maxsize = 10;
int size = 0;
int A[10];
int item;

void insert(int item){
if( size < maxsize )
  {
      A[size]=item;
      size++;
}


else {
    printf("array is full");
}

}

void delete(int item)
{
    int i,j;
    for ( i = 0; i < size; i++)
    {
       if (A[i]==item)
       {
           for ( j = 0; j < size; j++)
           {
               A[j]=A[j+1];
           }
           size--;
       } break;
       
    }
    
}
void display()
{
    int i;
    for ( i = 0; i <=size; i++)
    {
        printf("_%d_",A[i]);
    }
    
}
void exit(){
    int exit;
    printf("if you want to continue press 1 to exit press 2");
scanf("%d",&exit);
if (exit==2);
{
    return 0;
}
}



void main()
{    
    char r='a';
    while (r=='a')
    {
    
    

     int choice;

    printf("1.insertion\n");
    printf("2.deletion\n");
    printf("3.display\n");
    printf("enter your choice\n");
    scanf("%d",&choice);

if (choice==1)
{
    printf("enter an item to be interseted\n");
    scanf("%d",&item);
    insert(item);
    display();
    exit();

}
else{ if(choice==2);
      {
          printf("enter the item");
          scanf("%d",&item);
          delete(item);
          display();
      }
      

}


   
  
}  
}













