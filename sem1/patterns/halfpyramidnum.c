/*
Sample output - 
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
(Half pyramid of numbers)
*/

#include<stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}