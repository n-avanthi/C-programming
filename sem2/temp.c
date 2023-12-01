#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct node{
    int value;
    struct node *next;
};
typedef struct node node;

struct list{
    node *head;
    int size;
};
typedef struct list list;

list* create_list()
{
    list *l=(list *)malloc(sizeof(list));
    l->head=NULL;
    l->size=0;
    return l;
}

bool is_empty(list *list)
{
    return list->size==0;
}

void insert_front(list *l, int value)
{
    node *n;
	n=(node*)malloc (sizeof(node));
    n->value= value;
    n->next=l->head;
    l->head=n;
    l->size++;
}

int main(void)
{
    list *l=create_list();
    printf("Size of list %d\n",l->size);
    insert_front(l,20);
    insert_front(l,30);
    printf("The size of list %d",l->size);

    node *n=l->head;
    while (n != NULL)
    {
        printf("list element %d\n",n->value);
        n= n->next;
    }
    return 0;
}