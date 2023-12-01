//WAP to enter the name of the football team that you like the most. Write a 'for-loop' to enter the elements one at a time. Display the name of the team you entered.

#include<stdio.h>
int main()
{
	int size;
	printf("How many letters is the name? ");
	scanf("%d",&size);
	char arr[size];
	for (int i = 0; i <= size ; i++)
	{
		printf("\nEnter name of football team: ");
		scanf(" %c",&arr[i]);
	}
	printf("\nName is: ");
	for (int i = 0; i <= size ; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}
		
 
