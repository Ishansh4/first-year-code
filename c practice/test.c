#include<stdio.h>
int main()
{
int sal,sum,tax,pal;
printf("enter your salary \n");
scanf("%d",&sal);
if(sal<=20000){
   sum = sal;
   printf("as per your salary 0%% tax will be deducted \n");
   printf("your net amount is %d",sum);
}

else if(20001<=sal && sal<=30000){
   sum = (sal/100)*10;
   tax=sal-sum;
   printf("as per your salary 10%% tax will be deducted \n");
   printf("your net amount is %d",tax);
}   
else if(30001<=sal && sal<=40000){
   sum = (sal/100)*20;
   tax=sal-sum;
   printf("as per your salary 20%% tax will be deducted \n");
   printf("your net amount is %d",tax);
}   
else if(sal>=40001){
   sum = (sal/100)*30;
   tax=sal-sum;
    if(tax>40001){
     printf(" the additional 4%% eduation tax will be dudcted");
     pal=tax-((tax/100)*4);
     printf("the final net amount will be %d",pal);
     }
   else {printf(" the amount will be %d",tax);}
   
   
}   

return 0;
}