/*Write a program to find out the mood of a Camel. Continue the previous Program #1 

Specifications 
Camel is:
sick when its stomach_radius is less than height and less than length
happy when its height is less than length and less than stomach_radius.
tense when its length is less than height and stomach_radius.
a) void input_camel_details(float *radius, float *height, float *length); 
b) int find_mood(float radius, float height, float length) 
c) void output(float radius, float height, float length, int mood);

5
2
4

The Camel is Happy*/

#include<stdio.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

struct camel 
{
    float radius, height, length;
};
typedef struct camel Camel;

void input_camel_details(float *radius, float *height, float *length)
{
    printf("\nEnter radius: ");
    scanf("%f", &*radius);
    printf("\nEnter height: ");
    scanf("%f", &*height);
    printf("\nEnter length: ");
    scanf("%f", &*length);
}

int find_mood(float radius, float height, float length)
{
    if((radius < height) && (radius < length))
    {
        return 1;
    }
    else if((height < length) && (height < radius))
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

void output(float radius, float height, float length, int mood)
{
    if (mood == 1)
    {
        printf("\nThe Camel is sick");
    }
    else if (mood == 2)
    {
        printf("\nThe Camel is happy");
    }
    else
    {
        printf("\nThe Camel is tense");
    }
}

int main()
{
    Camel c;
    input_camel_details(&c.radius, &c.height, &c.length);
    int mood = find_mood(c.radius, c.height, c.length);
    output(c.radius, c.height, c.length, mood);
}