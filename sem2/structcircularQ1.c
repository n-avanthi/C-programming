/*Write a C Program to implement the basic PUSH and POP operation of a Circular Queue using array of structures. Display the stack after every PUSH and POP.*/

#include <stdio.h>

#define MAX 5 // Maximum size of the queue

struct queue {
    int data;
};

struct queue q[MAX];
int front = -1, rear = -1;

// Function to check if the queue is full
int isFull()
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
        return 1;
    else
        return 0;
}

// Function to check if the queue is empty
int isEmpty()
{
    if (front == -1)
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
        if (front == -1)
            front = 0;
        rear = (rear + 1) % MAX;
        q[rear].data = element;
        printf("\nElement %d is inserted into the queue.", element);
        printf("\nCurrent queue elements: ");
        for(int i = front; i != (rear+1)%MAX; i = (i+1)%MAX)
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
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }
        printf("\nElement %d is removed from the queue.", element);
        printf("\nCurrent queue elements: ");
        for(int i = front; i != (rear+1)%MAX; i = (i+1)%MAX)
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