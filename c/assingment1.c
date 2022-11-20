#include <stdio.h>
void display();
void insert();
void delete();
void search();



int arr[100];
int sel,n;

int main()
{
    int loop = 1;
    printf("No. of terms in array : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Term %d : ",i+1);
        scanf("%d",&arr[i]);      
    }

    while(loop==1){
    printf("\n\n1 - Insertion\n");
    printf("2 - Deletion\n");
    printf("3 - Search\n");
    printf("4 - Display\n");
    printf("5 - Exit");
    printf("Selection\n");
    scanf("%d",&sel);

    if (sel == 1)
    {
    insert(n);    
    }
    else if(sel == 2)
    {
    delete(n);
    }
    else if(sel == 3){
      search(n); 
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

void display(int n){
    for ( int i = 0; i <= n; i++)
    {
        printf(" %d ",arr[i]);
    }
    
}



void insert(int n){
    int i, x, pos;

    printf("enter teh term");
    scanf("%d",&x);
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
        printf(" %d ", arr[i]);
    printf("\n");
 
       
}

void delete(int n){
    
    int pos;
    
    
    printf("enter the postiton you delete\n ");
    scanf("%d",&pos);
        for (int i = pos-1; i<n; i++)
       {
        arr[i]=arr[i+1];
       }
    arr[pos-1]=0;
       
}
void search(int n){
    int se;
    int i;
    int count=1;
    int num;

    printf("enter the term to want search");
    scanf("%d",&se);

    for (i = 0; i < n; i++)
    {
        if (se == arr[i])
        {
            count ++;
            num = i+1;
        }
        
        }
        if (count>1)
        {
            printf("the term enter is present it is the %d term",num);
        }
        else{
            printf("the term is not present");
        }
        
    
}







