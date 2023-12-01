/*Write a C Program to implement the basic PUSH and POP operation of a Stack using arrays. Display the stack after every PUSH and POP. Using Pen & Paper trace the execution of this. Also draw the elements of the stack while they are being pushed and popped.*/

#include<stdio.h>
#include<stdlib.h>
#define size 5

int top = -1, ch, ele;
int stk[size];

void push();
void pop();
void display();

int main(void)
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
                scanf("%d", &ele);
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nProgram exiting!!");
                exit(0);
        }
    }
}

void push()
{
    if(top >= size - 1)
    {
        printf("\nStack Overflow!!!");
    }
    else
    {
        stk[++top] = ele;
        printf("\nElement has been pushed into stack and value of top is %d", top);

    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nStack Underflow!!!");
    }
    else
    {
        int del;
        del = stk[top];
        top --;
        printf("\n%d has been popped out of the stack and value of top is %d", del, top);

    }
}

void display()
{
    if(top == -1)
    {
        printf("\nStack is empty!!!");
    }
    else
    {
        printf("\nThe stack is: ");
        for(int i = top; i >= 0; i--)
        {
            printf("\n%d", stk[i]);
        }
        printf("\n");
    }
}