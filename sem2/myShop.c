/*
1. WAP to declare a structure called ‘myShop’. It contains variables to store the name of one item you sell in the shop, as well as the unit-price and quantity. 
Do the following: 
Declare an instance of this structure called ‘bakery’.
Enter the name of item as ‘Cake’, quantity as 10, unit-price as 12.50
Display the item details entered 
Calculate the total price to be paid by the customer
2. Write a C Program to implement the basic PUSH and POP operation of a Stack using Array of Structures(‘myShopArray’ ). Display the stack after every PUSH and POP.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 5

int ch, quantity_push, quantity_pop, top = -1;
char name_push, name_pop;
float price_push, price_pop;

struct myShop
{
    char item[20];
    int quantity;
    float price;
};

typedef struct myShop myShoppy;

myShoppy myShopArray[size];


void push();
void pop();
void display();

int main()
{
    for( ; ; )
    {
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
                printf("\nExiting program");
                exit(0);
        }
    }

    return 0;
}

void push()
{
    if(top >= size - 1)
    {
        printf("\nStack Overflow!!");
    }
    else
    {
        printf("\nEnter name of item to be pushed: ");
        scanf("%s", myShopArray[++top].item);
        printf("\nEnter quantity of items to be pushed: ");
        scanf("%d", &myShopArray[++top].quantity);
        printf("\nEnter price of item to be pushed: ");
        scanf("%f", &myShopArray[++top].price);        
        printf("\nElement is pushed and top value is %d", top);
    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nStack Underflow!!");
    }
    else
    {
        strcpy(name_pop,myShopArray[top].item);
        quantity_pop = myShopArray[top].quantity;
        price_pop = myShopArray[top].price;
        top--;
        printf("\n%s is item name, %d is quantity and %f is price of item popped out", name_pop, quantity_pop, price_pop);
    }
}

void display()
{
    for(int i = top; i >=0 ; i--)
    {
        printf("\nItem name: %s", myShopArray[i]);
        printf("\nQuantity: %d", myShopArray[i]);
        printf("\nPrice: %f", myShopArray[i]);
    }
}