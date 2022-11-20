#include <stdio.h>  
#define SIZE 20  
 int array[SIZE];  // declaration of array type variable.  
int top1 = -1;  
int top2 = SIZE;  
   
//Function to push data into stack1  
void push1 (int data)  
{  
// checking the overflow condition  
  if (top1 < top2 - 1)  
  {  
      top1++;  
    array[top1] = data;  
  }  
  else  
  {  
    printf ("Stack is full");  
  }  
}  
// Function to push data into stack2  
void push2 (int data)  
{  
// checking overflow condition    
if (top1 < top2 - 1)  
  {  
    top2--;  
    array[top2] = data;   
  }  
  else  
  {  
    printf ("Stack is full..\n");  
  }  
}  
   
//Function to pop data from the Stack1  
void pop1 ()  
{  
// Checking the underflow condition   
 if (top1 >= 0)  
  {  
    int popped_element = array[top1];  
    top1--;  
     
    printf ("%d \n", popped_element);  
  }  
  else  
  {  
    printf ("Stack is Empty \n");  
  }  
}  
// Function to remove the element from the Stack2  
void pop2 ()  
{  
// Checking underflow condition    
if (top2 < SIZE)  
  {  
      int popped_element = array[top2];  
    top2--;  
     
    printf ("%d \n", popped_element);  
  }  
  else  
  {  
    printf ("Stack is Empty!\n");  
  }  
}  
   
//Functions to Print the values of Stack1  
void display_stack1 ()  
{  
  int i;  
  for (i = top1; i >= 0; --i)  
  {  
    printf ("%d ", array[i]);  
  }  
  printf ("\n");  
}  
// Function to print the values of Stack2  
void display_stack2 ()  
{  
  int i;  
  for (i = top2; i < SIZE; ++i)  
  {  
    printf ("%d ", array[i]);  
  }  
  printf ("\n");  
}  
   
int main()  
{  
  int ar[SIZE];  
  int i;  
  int num_of_ele;  
   
  
printf("stack 1\n");   
push1(1);
push1(2);
push1(3);
push1(4);
push1(5);
push1(6);
push1(7);
push1(8);
push1(9);
push1(10);

display_stack1 ();  
  printf("\n");
  printf("stack 2\n");   
 
  
push2(11);
push2(12);
push2(13);
push2(14);
push2(15);
push2(16);
push2(17);
push2(18);
push2(19);
push2(20);

 display_stack2 ();  
   
 pop1(); 
  pop1(); 
 pop1(); 
 pop1(); 
 pop1(); 
 pop1(); 
 pop1(); 
 pop1(); 
 pop1(); 
 pop1(); 


pop2();
pop2();
pop2();
pop2();
pop2();
pop2();
pop2();
pop2();
pop2();
pop2();

  
  
 
   
  
   
  return 0;  
}  