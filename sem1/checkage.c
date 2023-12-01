//WAP to input your name and age. Check if you are eligible to undergo Bachelors degree wherein you should have completed 18 years

#include<stdio.h>
int checkAge(int age);

int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	int result = checkAge(age);
	if (result == 1)
	{
		printf("You are eligible");
	}
	else
	{
		printf("You are not eligible :(");
	}
	return 0;
}

int checkAge(int age)
{
	if (age >= 18)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}