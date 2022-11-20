#include <stdio.h>

int a[100];
void createArray(int size){
    for(int i = 0,j = 1; i<size; i++,j++){
        a[i] = j;
    }
}
void displayArray(int size){
    for(int i = 0,j = 1; i<size; i++,j++){
        printf("%d\t",a[i]);
        
    }printf("\n");
}
int removeZero(int size,int start){
    int temp;
    for(int i = start; i<size; i++){
        a[i] = a[i+1];
    }
    a[size] = 0;
}
void iteration(int size, int k){
    int start = 0;
    while(size != 1){
        start = start + k - 1;
        if(start >= size){
            start = start%size;
        }       
        a[start]  = 0;
        size  = size - 1;
        removeZero(size,start);
    }

}

int main()
{
    int size,k,position,start;
    printf("Enter size of people: ");
    scanf("%d", &size);

    printf("Enter kth person: ");
    scanf("%d", &k);

    createArray(size);
    iteration(size,k);

    printf("\nLast person standing: %d\n",a[0]);
    

    return 0;
}
