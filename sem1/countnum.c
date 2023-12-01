//WAP to enter integer values into an array. Check if the numbers entered are positive, negative or zero. Count the # of positive and negative numbers.  
//Do this program by using 'do-while loop'.

#include<stdio.h>
int main()
{
	int size, i;
	int pcount = 0, ncount = 0, zcount = 0;
	printf("Enter size: ");
	scanf("%d",&size);
	int arr[size + 1];
	do
	{
		printf("\nEnter value: ");
		scanf("%d",&arr[i]);
		if (arr[i] > 0)
		{
			pcount++;
		}
		else if (arr[i] < 0)
		{
			ncount++;
		}
		else
		{
			zcount++;
		}
		i++;	
	}
	while (i <= size);
	printf("Number of positive elements are: %d", pcount);
	printf("Number of negative elements are: %d", ncount);
	printf("Number of zero elements are: %d", zcount);	
}