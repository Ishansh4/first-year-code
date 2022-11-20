#include<stdio.h>
#include <stdlib.h>

void push(int x);
void pop();

int top = -1;
int stack[5];


void push (int x){
    top ++;
    if (top<5)
    {
        stack[top]=x;
    }
    else{
        printf("in overflow");
    }
}

void pop(){
    if (top>-1){
        top--;
    }
    else{
        printf("in underflow");
    }
}

void display(){
    int temp = top;
    while(temp>-1){
        printf("%d->",stack[temp]);
    temp--;}
}


int main()
{
push (5);
push (10);
push (15);
push (20);
push (25);

display();

pop();
pop();
pop();
pop();
pop();

display();
}