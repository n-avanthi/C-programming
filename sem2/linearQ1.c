/*Write a C Program to implement the basic PUSH and POP operation of a Linear Queue using arrays. Display the stack after every PUSH and POP. Using Pen & Paper trace the execution of this. Also draw the elements of the stack while they are being pushed and popped.*/

#include<stdio.h>
#include<stdlib.h>
#define size 5

int Q[size];
int front = -1, rear = -1, ele;

void enQueue()
{
    printf("\nEnter element to enqueue: ");
    scanf("%d", &ele);

    if(rear == size -  1)
    {
        printf("\nQueue is FULL!!");
    }
    else
    {
        if(front == -1)
        {
            front = 0;
            Q[++rear] = ele;
            printf("\n Enqueued by adding element %d in %d position which is value of rear", ele,rear);
            printf("\n Queue has %d elements", rear+1);
        }
    }
}

void deQueue()
{
    if(front == -1 || front > rear)
    {
        printf("\n Sorry cannot dequeue - Queue Empty!!");
    }
    else
    {
        ele = Q[front++];
        printf("\nElement %d in %d position(front)of queue deleted", ele,front-1);
        printf("\n Queue start shifted to position %d which is value of front", front);
        if(front == rear+1)
        {
        front = -1;
        rear = -1;
        }
    }
}

void display()
{
    if(front == -1 || front > rear)
    printf("\n Queue is Empty!!");
    else
    {
        printf("\n Displaying Queue Elements:");
        for(int i = front; i <= rear; i++)
        printf("\n %d ", Q[i]);
    }   
}

int main()
{
    int choice;
    
    while(1)
    {
        printf("\n Press 1. To Insert into Queue");
        printf("\n Press 2. To Delete from Queue");
        printf("\n Press 3. To Display Queue\t");
        printf("\n Press 4. To Exit Menu\t");
        scanf("%d", &choice);
        
        if(choice == 1)enQueue();
        else if(choice == 2)deQueue();
        else if(choice == 3) display();
        else if(choice == 4) exit(0);
        else printf("\nWrong entry : Press either 1, 2 or 3");
        
    }
}