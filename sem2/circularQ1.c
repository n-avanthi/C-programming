#include<stdio.h>
#define SIZE 5

void enQueue();
void deQueue();
void display();

int myCQ[SIZE]; 
int front = -1;
int rear = -1;
int element;

int main()
{
    int choice;
   
    while(1){
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:enQueue();
            break;
            case 2: deQueue();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            default: printf("\nPlease select the correct choice!!!\n");
        }
    }
}
void enQueue()
{
    printf("\nEnter the value to be inserted:  ");
    scanf("%d",&element);
    
    printf("\nelement is enQueued. front is %d rear is %d", front, rear); 
    
    if((front == 0 && rear == SIZE - 1) || (front == rear+1))
    {
        printf("\nCircular Queue is Full, Insertion not possible!\n");

    }
    
    else
    {   
        if(rear == SIZE-1 && front != 0) 
        rear = -1;
        myCQ[++rear] = element;
        printf("\nInserted %d Successfully!\n", myCQ[rear]);
        if(front == -1)
        front = 0;
    }
    
    printf("\n In enQueue exit front %d rear %d", front, rear); 
}

void deQueue()
{
    printf("\nelement is deQueued front %d rear %d", front, rear); 
    
    if(front == -1 && rear == -1)
    {
        printf("\nCircular Queue is Empty. Therefore deletion is not possible!\n");

    }
    
    else
    {
        element = myCQ[front++];
        printf("\nDeleted element is : %d\n",element);
       
        if(front-1 == rear)
            front = rear = -1;
        
        if(front == SIZE )
            front = 0;
    }
    
    printf("\nIn deQueue exit front %d rear %d", front, rear);
}

void display()
{
    if(front == -1)
    printf("\nCircular Queue is Empty!\n");
    else
    {
        int i;
        printf("\nCircular Queue Elements are : \n");
        if(front <= rear)
        {
            
            for (i=front; i <= rear; i++)
            printf("%d\t",myCQ[i]);
        }
        
        else
        {
            
            for (i = 0;i <= rear; i++) \
            printf("%d\t",myCQ[i]);
            
            for (i = front;i <= SIZE - 1; i++) 
            printf("%d\t", myCQ[i]);
            
            
        }
    }
}



