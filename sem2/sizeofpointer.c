#include<stdio.h>
int main()
{
    char c, carr[10], *pc;
    int i, iarr[10], *pi;
    float f, farr[10], *pf;
    double d, darr[10], *pd;

    pc = &c;
    pi = &i;
    pf = &f;
    pd = &d;

    printf("\nsize of char is %d", sizeof(c));
    printf("\nsize of int is %d", sizeof(i));
    printf("\nsize of float is %d", sizeof(f));
    printf("\nsize of double is %d", sizeof(d));
    printf("\n");

    printf("\nsize of char arr is %d", sizeof(carr));
    printf("\nsize of int arr is %d", sizeof(iarr));
    printf("\nsize of float arr is %d", sizeof(farr));
    printf("\nsize of double arr is %d", sizeof(darr));
    printf("\n");

    printf("\nsize of char pointer is %ld", sizeof(*pc));
    printf("\nsize of int pointer is %ld", sizeof(*pi));
    printf("\nsize of float pointer is %ld", sizeof(*pf));
    printf("\nsize of double pointer is %ld", sizeof(*pd));
    printf("\n");

}