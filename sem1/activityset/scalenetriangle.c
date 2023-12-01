/*
Write a program to find if a triangle is scalene
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
*/

#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
    int a = input_side();
    int b = input_side();
    int c = input_side();
    int isscalene = check_scalene(a, b, c);
    output(a, b, c, isscalene);

    return 0;
}

int input_side()
{
    int side;
    printf("\nEnter value of side: ");
    scanf("%d", &side);
    return side;
}

int check_scalene(int a, int b, int c)
{
    if((a == b) && (b == c) && (c == a))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void output(int a, int b, int c, int isscalene)
{
    if(isscalene == 0)
    {
        printf("The triangle with sides %d, %d, %d is scalene", a, b, c);
    }
    else
    {
        printf("The triangle with sides %d, %d, %d is not scalene", a, b, c);
    }
}
