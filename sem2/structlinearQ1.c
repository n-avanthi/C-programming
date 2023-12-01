/*Write a C Program to implement the basic PUSH and POP operation of a Linear Queue using array of structures.*/

#include <stdio.h>

#define MAX 5

struct queue
{
    int data;
};

struct queue q[MAX];
int front = -1, rear = -1;

// Function to check if the queue is full
int isFull()
{
    if (rear == MAX - 1)
        return 1;
    else
        return 0;
}

// Function to check if the queue is empty
int isEmpty()
{
    if (front == -1 || front > rear)
        return 1;
    else
        return 0;
}

// Function to insert an element at the rear end of the queue
void enqueue(int element)
{
    if (isFull())
    {
        printf("\nQueue is full. Overflow condition!");
    }
    else
    {
        rear++;
        q[rear].data = element;
        if (front == -1)
            front = 0;
        printf("\nElement %d is inserted into the queue.", element);
        printf("\nCurrent queue elements: ");
        for(int i = front; i <= rear; i++)
        {
            printf("%d ", q[i].data);
        }
    }
}

// Function to remove an element from the front end of the queue
int dequeue()
{
    int element;
    if (isEmpty())
    {
        printf("\nQueue is empty. Underflow condition!");
        return (-1);
    }
    else
    {
        element = q[front].data;
        front++;
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
        printf("\nElement %d is removed from the queue.", element);
        printf("\nCurrent queue elements: ");
        for(int i = front; i <= rear; i++)
        {
            printf("%d ", q[i].data);
        }
        return (element);
    }
}

int main()
{
    int choice, element;
    do
    {
        printf("\n\n1. Insert element into the queue");
        printf("\n2. Delete element from the queue");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the element to be inserted: ");
            scanf("%d", &element);
            enqueue(element);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            printf("\nExiting from the program.");
            break;
        default:
            printf("\nInvalid choice. Please enter a valid choice.");
        }
    } while (choice != 3);
    return 0;
}