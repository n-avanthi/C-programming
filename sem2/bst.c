#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *lchild;
    struct node *rchild;
}node;

node *search(struct node *p, int key) {
    while(p!=NULL) {
        if(key < p->val) {
            p = p->lchild;
        }
        else if (key > p->val) {
            p = p->rchild;
        }
        else {
            return p;
        }
    }
    return NULL;
}

node* create_node() {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->val = 0;
    new_node->lchild = NULL;
    new_node->rchild = NULL;
    return new_node;
}

void insert(struct node *root, int ele) {
    if(root==NULL) {
        node *root = create_node();
        root->val = ele;
        return;
    }
    while(root!=NULL) {
        if(ele < root->val) {
            root = root->lchild;
        }
        else if (ele > root->val) {
            root = root->rchild;
        }
        else {
            node *new_node = create_node();
            new_node->val = ele;
            return;
        }
    }
}

int main() {
    node *root = create_node();  
    int ch;    
    for(;;) {
        printf("\n\nMENU\n");
        printf("1. Add to the tree\n");
        printf("2. Search the tree\n");
        printf("7. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);

        switch(ch) {

        }
    }
}