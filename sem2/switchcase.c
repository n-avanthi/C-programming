#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int ch, element, top = -1; //top is the INDEX of the top of the stack
int myStack[SIZE];
void push();
int pop();
void display();

int main()
{
    for( ; ; )
    {
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. DISPLAY");
        printf("\n4. EXIT");

        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\nEnter element to be pushed: ");
                scanf("%d", &element);
                push();
                break;
            case 2:
                int del = pop();
                printf("%d", del);
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
    }
}

void push()
{
    if(top >= SIZE - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        myStack[++top] = element;
    }
}

int pop()
{
    if(top == -1)
    {
        printf("\nUnderflow");
        //return -1;
    }
    else
    {
        int popped;
        popped = myStack[top];
        top--;
        return popped;
    }
}

void display()
{
    for(int i = top; i >= 0; i--)
    {
        printf("%d", myStack[i]);
    }
}