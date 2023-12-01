/*
Sample output - 
* * * * 
* * * *
* * * *
* * * *
(Sqaure of stars)
*/

#include<stdio.h>
int main()
{
    int i, j, rows;
    printf("\nEnter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i < rows; i++)
    {
        for(j = 1; j < rows; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}