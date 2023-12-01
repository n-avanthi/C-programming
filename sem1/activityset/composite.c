/*
Write a program find whether a number is a composite number
int input_number();
int is_composite(int n);
void output(int n, int result);
*/

#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
    int n = input_number();
    int res = is_composite(n);
    output(n, res);

    return 0;
}

int input_number()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    return num;
}

int is_composite(int n)
{
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    if(count > 2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void output(int n, int result)
{
    if(result == 0)
    {
        printf("\n%d is a composite number", n);
    }
    else
    {
        printf("\n%d is not a composite number", n);

    }
}