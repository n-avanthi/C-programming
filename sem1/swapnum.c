//WAP to swap two numbers using call by reference in functions

#include<stdio.h>

void swap(int *a, int *b);

int main()
{
    int x = 10;
    int y = 20;
    printf("Unchanged x is %d and unchanged y is %d", x, y);
    swap(&x, &y);
    //printf("\nChanged x is %d and changed y is %d", x, y); //no need of return as pointer does not make copy
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    //printf("\nChanged x is %d and changed y is %d", a, b); // prints address
    printf("\nChanged x is %d and changed y is %d", *a, *b);
}
