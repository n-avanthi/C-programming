/*WAP that allows the user to input the following details into a Structure
-- Name of the car
-- Color
-- Price
If the price is greater than Rs.20L display - "Luxury Car"
If the price is greater than Rs.15L & less than Rs.20L display "Semi-Luxury Car"
If price is between Rs.10L & Rs.15L (both prices inclusive) display "Comfort Car"
If the price is less than Rs.10L display "Standard Car"
*/

#include<stdio.h>
int main()
{
    struct myshop
    {
        char name[10];
        char colour[10];
        float price;
    } car;
    printf("Enter name of car: ");
    scanf("%s",car.name);
    printf("Enter colour of car: ");
    scanf("%s",car.colour);
    printf("Enter the price: ");
    scanf("%f",&car.price);
    if (car.price >= 2000000)
    {
        printf("Luxury car");
    }
    else if ((car.price > 1500000) && (car.price < 2000000))
    {
        printf("Semi-Luxury car");
    }
    else if ((car.price >= 1000000) && (car.price <= 1500000))
    {
        printf("Comfort car");
    }
    if (car.price < 1000000)
    {
        printf("Standard car");
    }
}