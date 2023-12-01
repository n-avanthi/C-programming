/*
Write a program to check if the given number is prime

Function Declaration

int input_number(); 
int is_prime(int n); 
void output(int n, int result);

Input
3

Output
3 is a prime number
*/

#include<stdio.h>

int input_number(); 
int is_prime(int n); 
void output(int n, int result);

int main()
{
    int num = input_number();
    int prime = is_prime(num);
    output(num, prime);

    return 0;
}

int input_number()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    return num;
}

int is_prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if(n%i != 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

void output(int n, int result)
{
    if (result == 1)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
}
