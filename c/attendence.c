#include <stdio.h>
void display();
void insert();




char *arr[100];
int sel,n;

int main()
{
    int loop = 1;
    printf("enter number of students");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Term %d : ",i+1);
        scanf("%s",&arr[i]);      
    }

    while(loop==1){
    printf("\n\n1 - Insertion\n");
    printf("4 - Display\n");
    printf("5 - Exit");
    printf("Selection\n");
    scanf("%d",&sel);

    if (sel == 1)
    {
    insert(n);    
    }
   
    else if(sel== 4){
    display(n);
    }
    else if(sel== 5){
     loop++;
    }
    else{
    printf("invalid choice");}
    }
}




void insert(int n){
    
    
    int i, pos;
     char x;
    printf("enter teh term");
    scanf("%s",&x);
    printf("enter teh postion");
    scanf("%d",&pos);
 
    // initial array of size 10
    for (i = 0; i < 10; i++)
        arr[i] = i + 1;
 
    
 
    // element to be inserted
    
 
    // position at which element
    // is to be inserted
    
 
    // increase the size by 1
    n++;
 
    // shift elements forward
    for (i = n-1; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    // insert x at pos
    arr[pos - 1] = x;
 
    // print the updated array
    for (i = 0; i < n; i++)
        printf(" %s \n", arr[i]);
    printf("\n");
 
    
}


void display(int n){
    //for ( int i = 0; i <= n; i++)
   // {
        printf(" %s \n",arr[0]);
   // }
    
}




