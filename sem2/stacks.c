/*
Create a number array called ‘MyNumbers’ that holds 10 elements. Create a separate array stack called ‘MyDivBy5Stack’
using ‘PUSH’ that holds only those numbers of ‘MyNumbers’ that are divisible by 5. Use ‘PEEK’ to display the top-most 
element. POP out only the elements 5 and 25 (if they exist) from the ‘MyDivBy5Stack’. Display the result of all your
operations.
*/


#include<stdio.h>
#define size 10

int top = -1;

int MyNumbers[10];
int MyDivBy5Stack[size];

void push()
{
    for(int i = 0; i < 10; i++)
    {
        if(MyNumbers[i] % 5 == 0)
        {
            if(top >= size - 1)
            {
                printf("\nOverflow!!!");
            }
            else
            {
                MyDivBy5Stack[++top] = MyNumbers[i];
            }
        }
    }
}

int pop()
{
    if(top == -1)
    {
        printf("\nUnderflow!!!");
    }
    else
    {
        int popped;
        popped = MyDivBy5Stack[top];
        top--;
        return popped;
    }
}

int peek()
{
    if(top == -1)
    {
        printf("\nEmpty stack!!!");
    }
    else
    {
        int peek;
        peek = MyDivBy5Stack[top];
        return peek;
    }
}

void display()
{
    if(top == -1)
    {
        printf("\nEmpty Stack!!!");
    }
    else
    {
        printf("\nStack with numbers divisible by 5 is: ");

        for(int i = top; i >= 0; i--)
        {
            printf("%d", MyDivBy5Stack[i]);
        }
    }
}

int main()
{
    printf("\nEnter elements into MyNumbers array: ");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &MyNumbers[i]);
    }

    push();
    printf("\nElements divisible by 5 have been pushed into stack");

    if((MyDivBy5Stack[top] == 5) || MyDivBy5Stack[top] == 25)
    {
        int popped = pop();
        printf("\n%d has been popped out of the stack", popped);
    }

    int ele = peek();
    printf("\nTopmost element of the stack is %d", ele);

    display();

    return 0;

}