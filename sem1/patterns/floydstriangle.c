/*
Sample output - 
1
2 3
4 5 6
7 8 9 10
(Floyd's triangle)
*/

#include<stdio.h>
int main()
{
    int i, j, rows;
    int number = 1;
    printf("Enter rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }

    return 0;
}