/*
//Write a program to find sum of two fractions

//Function Declaration

void input(int *num1, int *den1, int *num2, int *den2); 
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den); 
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

//Input
1 4
1 2

//Output
1/2 + 1/4 = 3/4
*/

#include<stdio.h>

void input(int *num1, int *den1, int *num2, int *den2); 
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den); 
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main()
{
    int n1, d1, n2, d2;
    int nres, dres;
    input(&n1, &d1, &n2, &d2);
    add(n1, d1, n2, d2, &nres, &dres);
    output(n1, d1, n2, d2, nres, dres);

    return 0;
}

void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("\nEnter numerator of first number: ");
    scanf("%d", &*num1);
    printf("\nEnter denominator of first number: ");
    scanf("%d", &*den1);
    printf("\nEnter numerator of second number: ");
    scanf("%d", &*num2);
    printf("\nEnter denominator of second number: ");
    scanf("%d", &*den2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
    *res_num = (num1 * den2) + (num2 * den1);
    *res_den = den1 * den2;
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
    printf("\n%d/%d + %d/%d = %d/%d", num1, den1, num2, den2, res_num, res_den);
}
