/*
WAP using number arrays to do the following: (4 Marks)
a) Ask the user to enter the # of digits of a number
b) Enter each digit of a number, element by element using ‘while’ loop (OR)
‘do-while’ loop into this number array
c) Find the sum of all the digits entered into this number array.
d) Find the sum of the first and last digit. Check if this sum is divisible by 5.
*/

#include<stdio.h>

int main()
{
    int size;
    printf("\nEnter number of digits: ");
    scanf("%d", &size);

    int num[size], i;
    printf("\nEnter number:");

    do
    {
        printf("\nnum[%d]: ", i);
        scanf("%d", &num[i]);
        i ++;
    }while(i < size);
    
    int sum_arr = 0, sum_firstlast = 0;

    for(int j = 0; j < size; j++)
    {
        sum_arr += num[j];
        if(j == 0)
        {
            sum_firstlast += num[0];
        }
        if(j == (size - 1))
        {
            sum_firstlast += num[(size - 1)];
        }
    }

    printf("\nSum of all digits entered is: %d", sum_arr);

    if(sum_firstlast % 5 == 0)
    {
        printf("\nSum of all the first and last digits entered is %d and it is divisible by 5", sum_firstlast);
    }
    else
    {
        printf("\nSum of all the first and last digits entered is %d and it is not divisible by 5", sum_firstlast);
    }

    return 0;
}

/*
e) Observe and Answer Orally: What is the significance of the ‘&’ operator in the ‘scanf’
statement you just used?

f) Think and Answer Orally: Can the size of the array be declared at compile time for
such a situation? Justify your answer weighing the pros and cons.

g) Think and Answer Orally: Is it appropriate use #define preprocessor directive for this
question? Justify your answer weighing the pros and cons.

h) Think and Answer Orally: What is a preprocessor directive? At what stage of a
program is it executed - At runtime OR before,during, after compilation?

i) Answer Orally: Give at least one difference between an array and a structure.
*/