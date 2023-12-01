/* WAP that stores the name of the footballer, the number of goals he scored in World Cup, the country 
he has played and # of times he has participated in the world cup WITHOUT ARR OF STRUCT*/

#include<stdio.h>

int main()
{
    char name[20];
    char country[20];
    int goals;
    int games;

    for(int i = 0; i < 3; i++)
    {
        printf("\nEnter name of player: ");
        scanf("%s", name);
        printf("\nName of player is %s ", name);
        printf("\nEnter name of country: ");
        scanf("%s", country);
        printf("\nName of country is %s ", country);
        printf("\nEnter no of goals scored: ");
        scanf("%d", &goals);
        printf("\nNo of goals is %d ", goals);
        printf("\nEnter no of games played: ");
        scanf("%d", &games);
        printf("\nNo of games is %d ", games);
    }
}