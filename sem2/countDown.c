#include<stdio.h>

void countDown(int n)
{
    if(n == 0)
    {
        printf("\nCountdown complete");
    }
    else
    {
        printf("%d", n);
        countDown(n-1);
    }
}

int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    countDown(num);
    return 0;
}