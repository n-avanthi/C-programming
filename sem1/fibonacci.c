//WAP to print the fibonacci series
//output should be: 0, 1, 1, 2, 3, 5, 8, 13...

#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of terms: ");
    scanf("%d",&n);

    int t1 = 0, t2 = 1;
    int t3 = t1 + t2;
    printf("\nFibonacci series: %d, %d, ", t1, t2);

    int i = 1;
    while (i <= (n - 2))
    {
        printf("%d, ", t3);
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;
        i++; 
    }
    
    return 0;
}