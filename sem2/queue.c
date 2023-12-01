#include<stdio.h>
#include<stdlib.h>
#define size 5

int ch, ele, front = -1, rear = -1;

int myQueue[size];

void enqueue();
int dequeue();

int main()
{ 
    for(; ;)
    {
        printf("\n1.Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("\nEnter element to be enqueued: ");
                scanf("%d", &ele);
                enqueue();
                break;
            case 2:


        }

    }
    
}