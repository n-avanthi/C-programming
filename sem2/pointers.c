#include<stdio.h>

void input();
int sum_num(int *, int *);
void output(int, int, int);

void input()
{
    int i, j;
    printf("\nEnter first number: ");
    scanf("%d", &i);
    printf("\nEnter second number: ");
    scanf("%d", &j);
    int sum = sum_num(&i, &j);
    output(i, j, sum);
}

int sum_num(int *x,int *y)
{
    int sum;
    sum = *x + *y;
    return sum;
}

void output(int i, int j, int sum)
{
    printf("The sum of %d and %d is %d", i, j, sum);
}

int main()
{
    input();
    return 0;
}

