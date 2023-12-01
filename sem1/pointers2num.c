/*WAP that accepts two decimal numbers, have two pointers to these numbers and write two functions add 
and subtract, print only if it is exceeding the value 10*/

#include<stdio.h>
float add(float *a, float *b);
float subtract(float *a, float *b);

int main()
{
    float num1, num2;
    printf("Enter two decimal numbers: ");
    scanf("%f%f", &num1, &num2);
    float sum = add(&num1, &num2);
    float difference = subtract(&num1, &num2);
    if (sum > 10)
    {
        printf("\nSum is %f", sum);
    }
    else
    {
        printf("\nSum less than 10");
    }

    if (difference > 10)
    {
        printf("\nDifference is %f", difference);
    }
    else
    {
        printf("\nDifference less than 10");
    }
}

float add(float *a, float *b)
{
    float sum = *a + *b;
    return sum;
}

float subtract(float *a, float *b)
{
    float difference = *a - *b;
    return difference;
}

