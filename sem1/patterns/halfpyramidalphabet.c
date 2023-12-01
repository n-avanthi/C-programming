/*
Sample output -
A
B B
C C C
D D D D
E E E E E
(Half pyramid of alphabets)
*/

#include<stdio.h>
int main()
{
    int i, j, rows;
    printf("\nEnter the rows: ");
    scanf("%d", &rows);
    char alphabet = 'A';

    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c ", alphabet);
        }
        alphabet++;
        printf("\n");
    }

    return 0;
}