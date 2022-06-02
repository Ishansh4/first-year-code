#include<stdio.h>
int main()
{
int arr1[5],i;
printf("enter the values for first array\n");
for ( i = 0; i < 5; i++)
{
    scanf("%d",&arr1[i]);
}




printf("the values for second array are:\n");
for ( i = 4; i>=0; i--)
{
    printf("%d\n",arr1[i]);
}
return 0;
}