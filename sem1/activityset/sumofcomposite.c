/*
Write a program to find Sum of composite number in an array of different numbers entered by the user
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
*/

#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
    int n = input_array_size();
    int a[n];
    input_array(n, a);
    int sum = sum_composite_numbers(n, a);
    output(sum);

    return 0;
}

int input_array_size()
{
    int n;
    printf("\nEnter size: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n])
{
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter element into array: ");
        scanf("%d", &a[i]);
    }
}

int sum_composite_numbers(int n, int a[n])
{
    int sum = 0;
    for(int j = 0; j < n; j++)
    {
        int count = 0;
        for(int i = 1; i <= a[j]; i++)
        {
            if(a[j] % i == 0)
            {
                count++;
            }
        }
        if(count > 2)
        {
            sum += a[j];
        }
    }
    return sum;
}

void output(int sum)
{
    printf("\nThe sum of composite numbers is %d", sum);
}
