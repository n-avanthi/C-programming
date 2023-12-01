#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int data;
    struct node* next;
    struct node* prev;
}node;

typedef struct list 
{
    node *head;
    int size;                                                                              
}list;

list* create_list() 
{
    list *lst = (list *)malloc(sizeof(list));
    (*lst).head = NULL;
    lst->size=0;
    printf("Size of the list is : %d\n", lst->size);
    return lst;
}

void traverse(list *lst)
{
    if(lst -> head == NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        struct node* temp;
        temp = lst -> head;
        while(temp != NULL)
        {
            printf("\n%d", temp -> data);
            temp = temp -> next; 
        }
    }
}

void insertAtFront(list *lst)
{
    int tempData;
    struct node *temp;
    temp = (node *)malloc(sizeof(node));
    printf("\nEnter data to be inserted: ");
    scanf("%d", &tempData);
    temp -> data = tempData;
    temp -> prev = NULL;
    temp -> next = lst -> head;
    lst -> head = temp;
    printf("\nElement inserted at the front is %d", (lst -> head) -> data);
}

void insertAtEnd(list *lst)
{
    int tempData;
    struct node *temp, *curr;
    temp -> prev = NULL;
    temp -> next = NULL;
    printf("\nEnter data to be inserted: ");
    scanf("%d", &tempData);
    temp->data = tempData;
    temp->next = NULL;
    curr = lst -> head;
    if(lst->head == NULL)
    {
        lst->head = temp;
    }
    else
    {
        while(curr -> next != NULL)
        {
            curr = curr -> next;
        }
        temp -> prev = curr;
        curr -> next = temp;
    }
    printf("\nElement inserted at the end is %d", temp -> data);
}

int main()
{
    int choice;
    list *lst = create_list();
    while (1) {
        printf("\nMENU");
        printf("\n1.Display");
        printf("\n2.Add to front");
        printf("\n3.Add to back");
        printf("\n4.Exit");

        printf("\nEnter Choice :\n");
        scanf("%d", &choice);
 
        switch (choice) {
        case 1:
            traverse(lst);
            break;
        case 2:
            insertAtFront(lst);
            break;
        case 3:
            insertAtEnd(lst);
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Incorrect Choice. Try Again \n");
            continue;
        }
    }
    return 0;
}