/*
Sample output -
* * * * * * * * * 
  * * * * * * *
    * * * * *
      * * *
        *
(Inverted full pyramid of stars)
*/

#include<stdio.h>
int main()
{
    int i, rows, space, k;
    printf("\nEnter rows: ");
    scanf("%d", &rows);

    for(i = rows; i >= 1; i--)
    {
        for(space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }
        for(k = 0; k != 2 * i -1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}