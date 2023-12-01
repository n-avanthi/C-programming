/*
Write a C program to compare three numbers using pass by reference
int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
*/

#include<stdio.h>
void input(float *a, float *b, float *c);
void compare(float a, float b, float c, float *largest);
void output(float a, float b, float c, float largest);

int main()
{
    float a, b, c;
    input(&a, &b, &c);
    float largest;
    compare(a, b, c, &largest);
    output(a, b, c, largest);

    return 0;
}

void input(float *a, float *b, float *c)
{
    printf("\nEnter a: ");
    scanf("%f", &*a);
    printf("\nEnter b: ");
    scanf("%f", &*b);
    printf("\nEnter c: ");
    scanf("%f", &*c);
}

void compare(float a, float b, float c, float *largest)
{
   *largest = a;
    if(b > *largest)
    {
        *largest = b;
        if(c > *largest)
        {
            *largest = c;
        }
    }
    else if(c > *largest)
    {
        *largest = c;
        if(b > *largest)
        {
            *largest = b;
        }
    }
    else
    {
        *largest = a;
    }

}

void output(float a, float b, float c, float largest)
{
    printf("\nThe largest of %f, %f and %f is %f", a, b, c, largest);
}
