/*
WAP that stores the name of a TV series, the name of an actor /actress you like
in it, its ranking in the TV channel, and the minimum age to watch it.
*/

#include<stdio.h>
int main()
{
    struct tv
    {
        char series[50];
        char actor[50];
        int age;
    }show;

    printf("\nEnter name of the TV series: ");
    scanf("%s", show.series);
    printf("\nEnter name of actor/actress: ");
    scanf("%s", show.actor);
    printf("\nEnter minimum age required to watch: ");
    scanf("%d", &show.age);

    printf("\nThe name of the TV show played by %s is %s and the minimum age required to watch it is %d", show.actor, show.series, show.age);

    return 0;
}