/*
//Write a program to find the greatest of three fractions

//Function Declaration
typedef struct 
{
int num, den; 
} Fraction;

//Input
1 2
1 3
1 4

//Output
The greatest of 1/2, 1/3 and 1/4 is 1/2
*/

#include<stdio.h>

typedef struct
{
int num, den; 
}Fraction;

int main()
{
    Fraction input[3];
    float f1, f2, f3;
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter numerator: ");
        scanf("%d", &input[i].num);
        printf("\nEnter denominator: ");
        scanf("%d", &input[i].den);
    }

    f1 = (((float)(input[0].num))/((float)(input[0].den)));
    f2 = (((float)(input[1].num))/((float)(input[1].den)));
    f3 = (((float)(input[2].num))/((float)(input[2].den)));

    if((f1 > f2) && (f1 > f3))
    {
        printf("\n%d/%d is the greatest of all three", input[0].num, input[0].den);
    }
    else if((f2 > f1) && (f2 > f3))
    {
        printf("\n%d/%d is the greatest of all three", input[1].num, input[1].den);
    }
    else if((f3 > f1) && (f3 > f2))
    {
        printf("\n%d/%d is the greatest of all three", input[2].num, input[2].den);
    }
    else
    {
        printf("\nAll three are equal");
    }

    return 0;
}