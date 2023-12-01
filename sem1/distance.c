//WAP to input two points find distance between them
#include<stdio.h>
#include<math.h>
int main()
{
    float x1, y1, x2, y2, z1, z2;
    printf("\nEnter coordinates of first point: ");
    scanf("%f%f", &x1, &y1);

    printf("\nEnter coordinates of second point: ");
    scanf("%f%f", &x2, &y2);

    printf("\nEnter coordinates of third point: ");
    scanf("%f%f", &z1, &z2);

    float dist = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)) + ((z2 - z1) * (z2 - z1));
    float distance = sqrt(dist);

    printf("The distance between the three points entered is: %f", distance);
    return 0;
}