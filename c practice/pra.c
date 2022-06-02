#include <stdio.h>
int main()
{
int id,pass;
  printf("enter your user id:\n");
  scanf("%d",&id);
  if(id==1000){
    printf("enter your password:\n");
    scanf("%d",&pass);
    if(pass==5000){
      printf("you are accepted\n");
    }
    else{printf("invalid password\n");}
  }
  else{printf("invalid user id\n");
  }






}






   