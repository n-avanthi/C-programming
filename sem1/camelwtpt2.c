/*Write a program to find the weight of a camel, given height, length and stomach radius using four functions.
weight = pi * stomach_radius^3 * sqrt(height * length)

Function Declarations

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);*/

#include<stdio.h>
#include<math.h>
#define PI 3.1415

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main()
{
    float radius, height, length;
    input_camel_details(&radius, &height, &length);
    float weight = find_weight(radius, height, length);
    output(radius, height, length, weight);

    return 0;
}

void input_camel_details(float *radius, float *height, float *length)
{
    printf("Enter radius: ");
    scanf("%f", &*radius);
    printf("Enter height: ");
    scanf("%f", &*height);
    printf("Enter length: ");
    scanf("%f", &*length);
}

float find_weight(float radius, float height, float length)
{
    float weight = PI * pow(radius,3) * sqrt(height * length);
    return weight;
}

void output(float radius, float height, float length, float weight)
{
    printf("The weight of the camel with radius: %f, height: %f, length: %f is %f", radius, height, length, weight);
}



