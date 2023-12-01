/* WAP that stores the name of the footballer, the number of goals he scored in World Cup, the country 
he has played and # of times he has participated in the world cup*/

#include<stdio.h>

int main()
{
    struct sports
    {
        char name[20];
        char country[20];
        int goals;
        int games;
    } football[3];

    for(int i = 0; i < 3; i++)
    {
        printf("\nEnter name of player: ");
        scanf("%s", football[i].name);
        printf("\nEnter name of country: ");
        scanf("%s", football[i].country);       
        printf("\nEnter no of goals scored: ");
        scanf("%d", &football[i].goals);
        printf("\nEnter no of games played: ");
        scanf("%d", &football[i].games);
    }

    for(int i = 0; i < 3; i++)
    {
        printf("\nName of player is %s ", football[i].name);
        printf("\nName of country is %s ", football[i].country);
        printf("\nNo of goals is %d ", football[i].goals);
        printf("\nNo of games is %d ", football[i].games);
    }

}