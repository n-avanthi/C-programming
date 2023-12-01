//WAP to print the square number series
//output should be: 1, 4, 9, 16, 25, 36, 49...

#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of terms: ");
    scanf("%d",&n);
    
    printf("\nThe series of squares: ");
    int i = 1;
    while (i <= n)
    {
        printf("%d, ", i * i);
        i++;
    }

    return 0;
}