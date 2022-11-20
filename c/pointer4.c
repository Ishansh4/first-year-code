
#include<stdio.h>
int main()
{
int a[5]={0,15,17,19,13};
int temp1;
int temp2;
int *p[5];
int **q[5];
int j;
int k;
 

 for ( j = 0; j < 5; j++)
 {
     p[j]= &a[j];
 }
 for ( k= 0; k < 5; k++)
 {
    q[k]= &p[k];
 }
 



temp1 = *p[0];
*p[0]=*p[4];
*p[4]=temp1;

temp2 = *p[1];
*p[1]=*p[3];
*p[3]=temp2;


int i;
printf("original array\n");
for ( i = 0; i < 5; i++)
{
   printf("%d\n",p[i]);
   
}


printf("new array\n");
for ( i = 0; i < 5; i++)
{
   printf("%d\n",q[i]);
   
}





return 0;
}

