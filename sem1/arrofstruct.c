#include<stdio.h>
int main()
{
    struct lonely
    {
        char name[20];
        int age;
    }friend[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter name of friend: ");
        scanf("%s", friend[i].name);
        printf("\nEnter their age: ");
        scanf("%d", &friend[i].age);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nName of friend is: %s", friend[i].name);
        printf("\nAge is: %d", friend[i].age);
    }

    return 0;
}

