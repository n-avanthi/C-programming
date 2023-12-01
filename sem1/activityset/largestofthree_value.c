/*
Write a C program to compare three numbers using pass by value
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
*/

#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main()
{
    int a = input();
    int b = input();
    int c = input();
    int largest = compare(a, b, c);
    output(a, b, c, largest);

    return 0;
}

int input()
{
    int num;
    printf("\nEnter a number:");
    scanf("%d", &num);
    return num;
}

int compare(int a, int b, int c)
{
    int largest = a;
    if(b > largest)
    {
        largest = b;
        if(c > largest)
        {
            largest = c;
        }
    }
    else if(c > largest)
    {
        largest = c;
        if(b > largest)
        {
            largest = b;
        }
    }
    else
    {
        largest = a;
    }
    return largest;
}

void output(int a, int b, int c, int largest)
{
    printf("\n The largest of %d, %d and %d is %d", a, b, c, largest);
}