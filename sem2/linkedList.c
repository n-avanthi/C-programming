#include<stdio.h>

struct node
{
    int value;
    struct node *next;
};
typedef struct node node;

struct list
{
    node *head;
    int num_ele;
};
typedef struct list list;

list* createlist()
{
    list *lst = (list*)malloc(sizeof(list));
    (*lst).head = NULL;
    lst->num_ele = 0;
    printf("\nSize of the linked list is: %d", lst->num_ele);
    return lst;
}

void add_front(list *lst, int elem)
{
    node *new_node = malloc(sizeof(node));
    new_node->value = elem;
    new_node->next = lst->head;
    lst->head = new_node;
    lst->num_ele++;
}

void traversing(list *lst)
{
    node *current = lst->head;
    while(current != NULL)
    {
        printf("%d/n", current->value);
        current = current->next;
    }
}

int main()
{
    list *lst = createlist();
    add_front(lst, 10);
    traversing(lst);

}