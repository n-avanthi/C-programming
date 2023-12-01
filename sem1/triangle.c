/*
Write a program to find whether the given 3 points form a triangle

Function Declaration
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3); 
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3); 
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

Input
1 1
0 0
1 1

Output
The points (1.0, 1.0), (0.0, 0.0) and (1.0, 1.0) do not form a triangle
*/

#include<stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3); 
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3); 
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main()
{
    float a1, b1, a2, b2, a3, b3;
    input_triangle(&a1, &b1, &a2, &b2, &a3, &b3);
    int res = is_triangle(a1, b1, a2, b2, a3, b3);
    output(a1, b1, a2, b2, a3, b3, res);

    return 0;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("\nEnter x1: ");
    scanf("%f", &*x1);
    printf("\nEnter y1: ");
    scanf("%f", &*y1);
    printf("\nEnter x2: ");
    scanf("%f", &*x2);
    printf("\nEnter y2: ");
    scanf("%f", &*y2);
    printf("\nEnter x3: ");
    scanf("%f", &*x3);
    printf("\nEnter y3: ");
    scanf("%f", &*y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float res = ((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2)));
    if (res != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if(result == 1)
    {
        printf("\nThe points (%f, %f), (%f, %f) and (%f, %f) form a triangle", x1, y1, x2, y2, x3, y3);
    }
    else
    {
        printf("\nThe points (%f, %f), (%f, %f) and (%f, %f) do not form a triangle", x1, y1, x2, y2, x3, y3);
    }
}