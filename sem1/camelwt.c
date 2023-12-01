/*
Write a program to find the weight of the camel given height, length and stomach radius using four functions 

weight = pi * stomach_radius^3 * sqrt(height * length)

struct camel 
{
   
float radius, height, length, weight; 
}; 

typedef struct camel Camel; 

a) Camel input(); 

b) float find_weight(Camel c); 
//OR
b) find_weight(Camel *c); //passing address variable 

c) void output(Camel c);
1
1
1

The weight of the camel with radius: 1.0, height: 1.0, length: 1.0 is 3.1415
*/

#include<stdio.h>
#include<math.h>
#define PI 3.1415

struct camel 
{
float radius, height, length, weight; 
}; 
typedef struct camel Camel; //Done so that it can be referred to as 'Camel' instead of 'struct camel' each time

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

/*float find_weight(Camel c)
{
    float weight = PI * pow(c.radius, 3) * sqrt(c.height * c.length);
    return weight;
}*/

//OR

find_weight(Camel *c) //passing address variable
{
    c->weight = PI * pow(c->radius, 3) * sqrt(c->height * c->length);
}

void output(Camel c)
{
    printf("The weight of the camel with radius: %f, height: %f, length: %f is %f", c.radius, c.height, c.length, c.weight);
}

int main()
{
    Camel c = input();
    //float weight = find_weight(c);

    //OR

    find_weight(&c);
    //c.weight = weight;
    output(c);

    return 0;
}
