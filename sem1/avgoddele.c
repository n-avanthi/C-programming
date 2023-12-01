/*
WAP to find the average of all the odd elements in an array

void input(int n, int a[n]); //This function to enter elements into array 

float odd_average(int n, int a[n]); //Use this to find the average of odd elements in the array 

void output(float avg); //Display the average in tis function 
*/

#include<stdio.h>

void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    input(n, &a[n]); //PASS THE ADDRESS BECAUSE ARRAYS ARE PASS BY REF
    int avg = odd_average(n, &a[n]);
    output(avg);

    return 0;
}

void input(int n, int a[n])
{
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter element: ");
        scanf("%d", &a[i]);
    }
}

float odd_average(int n, int a[n])
{
    
    float sum = 0, count = 0;
    for(int i = 0; i < n; i++)
    {
        if ((a[i])%2 != 0)
        {
            sum += a[i];
            count ++;
        }
    }
    printf("\nSum is %f", sum);
    printf("\nCount is %f ", count);
    float avg = (sum/count);
    return avg;
}

void output(float avg)
{
    printf("\nThe average of odd elements is: %f", avg);
}
