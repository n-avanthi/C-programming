/*
Write a program to find out if the name of the camel is a nice name.

Condition: A camel has a nice name if it has at least 2 vowels and 2 consonants in it

void input(char *name); //To enter the camel name 
int has_nice_name(char *c); //To check if it has a nice name 
void output(int res); //To display the result 
*/

#include<stdio.h>

void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main()
{
    char name[20];
    input(&name[20]);
    int res = has_nice_name(&name[20]);
    output(res);

    return 0;
}

void input(char *name)
{
    printf("Enter the name: ");
    scanf("%s", &*name);
}

int has_nice_name(char *c)
{
    int vcount = 0, ccount = 0;
    for (int i = 0; i < 20; i++)
    {
        if ((c[i] == 'a') || (c[i] == 'e') || (c[i] == 'i') || (c[i] == 'o') || (c[i] == 'u'))
        {
            vcount += 1;
        }
        else
        {
            ccount += 1;
        }
    }
    if ((vcount >= 2) && (ccount >= 2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void output(int res)
{
    if (res == 1)
    {
        printf("Camel has a nice name");
    }
    else
    {
        printf("Camel does not have a nice name");
    }
}