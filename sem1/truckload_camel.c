/*
Write program to find the weight of a truck load of n camels.
Take inputs for:

truck weight
height, radius and length of n different camels
total_truck_weight = truck_weight + weight_of_camels

Function Declarations

typedef struct _camel {
    float radius, height, length, weight;
} Camel;

void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);
*/

#include<stdio.h>

typedef struct _camel {
    float radius, height, length, weight;
} Camel;

void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main()
{
    int n;
    printf("Enter number of camels: ");
    scanf("%d", &n);
    
    Camel c[n];
    float truck_weight;
    input(n, c[n], &truck_weight);
}

void input(int n, Camel c[n], float *truck_weight)
{
    
}