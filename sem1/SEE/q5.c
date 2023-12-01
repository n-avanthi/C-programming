/*
WAP to find the weight of the camel given height, length and stomach radius
using following formula and functions:
weight = pi * stomach_radius^3 * sqrt(height * length)
struct camel
{
    float radius, height, length, weight;
};
typedef struct camel Camel;
Camel input();
float find_weight1(Camel c); //passing by value
(OR)
void find_weight2(Camel *c); //passing by reference
void output(Camel c);
Sample Output: The weight of the camel with radius: 1.0, height: 1.0, length: 1.0
is 3.1415
*/

#include<stdio.h>
#include<math.h>
#define PI 3.1415

struct camel
{
    float radius, height, length, weight;
};
typedef struct camel Camel;

Camel input()
{
    Camel c;
    printf("\nEnter radius: ");
    scanf("%f", &c.radius);
    printf("\nEnter height: ");
    scanf("%f", &c.height);
    printf("\nEnter length: ");
    scanf("%f", &c.length);

    return c;
}

/*float find_weight1(Camel c) //passing by value
{
    float weight = PI * pow(c.radius,3) * sqrt(c.height * c.length);
    return weight;
}*/

void find_weight2(Camel *c) //passing by reference
{
    c->weight = PI * pow(c->radius,3) * sqrt(c->height * c->length);
}

void output(Camel c)
{
    printf("\nThe weight of the camel with radius: %f, height: %f, length: %f is %f", c.radius, c.height, c.length, c.weight);
}

int main()
{
    Camel c = input();
    /*
    c.weight = find_weight1(c);
    */
    find_weight2(&c);
    output(c);

    return 0;
}