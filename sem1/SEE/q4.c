/*
WAP using functions to check your final test score. (4 Marks)
void inputMarks(float T1, float T2);
float checkBestofTwo(float T1, float T2);
Explanation: Enter the marks of two tests in ‘main’. Pass them by value to
‘inputMarks’. Call ‘checkBestofTwo’ from ‘main’ and print the result in ‘main’
*/

#include<stdio.h>

void inputMarks(float T1, float T2);
float checkBestofTwo(float T1, float T2);

int main()
{
    float test1, test2;
    printf("\nEnter marks of test 1: ");
    scanf("%f", &test1);
    printf("\nEnter marks of test 2: ");
    scanf("%f", &test2);
    inputMarks(test1, test2);
    float ans = checkBestofTwo(test1, test2);
    printf("\nThe best of two tests is %f", ans);

    return 0;
}

void inputMarks(float T1, float T2)
{
    printf("\nMarks for test 1 are %f and marks for test 2 are %f", T1, T2);
}

float checkBestofTwo(float T1, float T2)
{
    if(T1 > T2)
    {
        return T1;
    }
    else if(T2 > T1)
    {
        return T2;
    }
    else
    {
        return T1;
    }
}