#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

char stack[MAX];
char infix[MAX];
char postfix[MAX];
int top = -1;
void pop();
void push(char c);

int main()
{
    printf("enter the infix term");
    gets(infix);

    intopost();
    return 0;
}
void push(char c){
    if(top == MAX-1){
        printf("overflow");
        return;
    }
    top++;
    stack[top] = c;
}
void pop(){
    char c;
    if(top == -1){
        printf("underflow");
        exit(1);
    }
    c = stack[top];
    top = top-1;
    return c;
}

int pre(char sym)
{
    switch (sym)
    {
    case '^':
        return 3;
    case '/':
    case '*':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        return 0;
    }
}

void intopost()
{
    int i;
    int j = 0;
    char sym;
    char next;
    for (i = 0; i < strlen(infix); i++)
    {
        sym = infix[i];
        if (sym = '(')
        {
            push(sym);
        }
        else if (sym = ')')
        {
            while ((next == pop()) != '(')
                postfix[j++] = next;
        }
        else if (sym =='+' || sym =='-' || sym =='*' || sym == '/' || sym == '^')
        {
            while (pre(stack[top]) >= pre(sym))
            {
                postfix[j++] = pop();
                push(sym);
            }
        }
        else
        {
            postfix[j++] = sym;
        }
    }
}