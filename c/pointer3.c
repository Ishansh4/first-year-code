
#include<stdio.h>
int main()
{
int a[5]={0,15,17,19,13};

int *p=a;



int i;
for ( i = 0; i < 5; i++)
{
   printf("%d\n",p[i]);
}



return 0;
}

