/* WAP that stores the name of the footballer, the number of goals he scored in World Cup, the country 
he has played and # of times he has participated in the world cup WITHOUT ARR OF STRUCT*/

#include<stdio.h>

int main()
{
    struct sports
    {
        char name[20];
        char country[20];
        int goals;
        int games;
    } football;

    for(int i = 0; i < 3; i++)
    {
        printf("\nEnter name of player: ");
        scanf("%s", football.name);
        printf("\nName of player is %s ", football.name);
        printf("\nEnter name of country: ");
        scanf("%s", football.country);
        printf("\nName of country is %s ", football.country);
        printf("\nEnter no of goals scored: ");
        scanf("%d", &football.goals);
        printf("\nNo of goals is %d ", football.goals);
        printf("\nEnter no of games played: ");
        scanf("%d", &football.games);
        printf("\nNo of games is %d ", football.games);
    }
}