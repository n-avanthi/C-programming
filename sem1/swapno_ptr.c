#include<stdio.h>
void swap(int *n1, int *n2);

int main()
{
   /*
   int a = 4, b = 3, temp;
    printf("\nA is %d and B is %d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\nA is %d and B is %d", a, b);
   */ 
    int *num1, *num2;
    int a = 5, b = 10;
    num1 = &a;
    num2 = &b;
    printf("\nnum1 is %d and num2 is %d", *num1, *num2);
    swap(num1, num2);
    printf("\nnum1 is %d and num2 is %d", *num1, *num2);

    return 0;
}

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;

    return;
}