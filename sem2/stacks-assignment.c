#include<stdio.h>
#include<stdlib.h>
#define SIZE 12

int top = -1, ch, ele;
char del;
char stk[SIZE];

void push();
char pop();
void display();

int main()
{
    for(; ;)
    {
        printf("\nSTACKS - OPERATIONS");
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. DISPLAY");
        printf("\n4. EXIT");

        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
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
    if(SIZE - 1 == top)
    {
        printf("\nStack Overflow!!");
        printf("\nPlease pop some items to continue!!");
    }
    else
    {
        printf("\nEnter element to be pushed into stack of USN: ");
        scanf(" %c", &ele);
        stk[++top] = ele;
        printf("\nElement %c has been pushed into stack and value of top is %d", ele, top);
    }
}

char pop()
{
    if(top == -1)
    {
        printf("\nStack Underflow!!");
        printf("\nPlease push some items to continue!!");
    }
    else
    {
        del = stk[top];
        top--;
        printf("\nElement popped out is %c and value of top is %d", del, top);
        return del;
    }
}

void display()
{
    if(top == -1)
        {
            printf("\nStack Underflow!!");
            printf("\nPlease push some items to continue!!");
        }
        else
        {
            printf("\nElements of stack are: ");
            for(int i = top; i >= 0; i--)
            {
                printf("\n%c", stk[i]);
            }
            printf("\n");
        }
}





