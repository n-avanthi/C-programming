/*
WAP to do the following using arrays:
a) Enter the name of a bakery item you like
b) Pass this array to a function called ‘changeMe’
c) Modify the first letter of this array
d) Print the result of modification in ‘main’
*/

#include<stdio.h>
void changeMe(char *arr);

int main()
{
    char arr[50];
    printf("\nEnter name of bakery: ");
    scanf("%s", arr);
    changeMe(arr);
    printf("\nNew name of bakery is: %s", arr);

    return 0;
}

void changeMe(char *arr)
{
    char c;
    printf("Enter char: ");
    scanf(" %c", &c);
    arr[0] = c;
}

