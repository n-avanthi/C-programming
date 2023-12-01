/*
WAP that stores using structure, the name of the footballer, the number of goals
he scored in World Cup, the country he has played and # of times he has
participated in the world cup.
a) Enter the data for 3 Football Players using the concept of Array of Structures
b) Display the details entered
*/

#include<stdio.h>

int main()
{
    struct sports
    {
        char name[50];
        int goals;
        char country[50];
        int worldcup;
    }football[3];

    for(int i = 0; i < 3; i++)
    {
        printf("\nEnter name of football player: ");
        scanf("%s", football[i].name);
        printf("\nEnter number of goals scored: ");
        scanf("%d", &football[i].goals);
        printf("\nEnter name of country played for: ");
        scanf("%s", football[i].country);
        printf("\nEnter number of world cups participated in: ");
        scanf("%d", &football[i].worldcup);
    }

    for(int i = 0; i < 3; i++)
    {
        printf("\n%s played for %s and scored %d goals in %d matches", football[i].name, football[i].country, football[i].goals, football[i].worldcup);
    }

    return 0;

}

