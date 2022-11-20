
#include<stdio.h>
int main()
{
int a[5]={0,15,17,19,13};
int temp1;
int temp2;
int *p[5];


p[0]= &a[0];
p[1]= &a[1];
p[2]= &a[2];
p[3]= &a[3];
p[4]= &a[4];

temp1 = *p[0];
*p[0]=*p[4];
*p[4]=temp1;

temp2 = *p[1];
*p[1]=*p[3];
*p[3]=temp2;


int i;
for ( i = 0; i < 5; i++)
{
   printf("%d\n",&p[i]);
}



return 0;
}

