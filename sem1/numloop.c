//WAP to print the first 'n' natural numbers. Do this program by using 
//(i) for-loop 
//(ii) do-while loop 
//(iii) while loop

#include<stdio.h>
int main()
{
	int size;
	printf("Enter the size: ");
	scanf("%d",&size);
	int arr[size];
	/*for(int i = 1; i <= size; i++)
	{
		arr[i] = i;
	}*/
	/*int i = 1;
	do
	{
		arr[i] = i;
        i++;
	}
	while (i <= size);*/
	int i = 1;
	while (i <= size)
	{
		arr[i] = i;
        i++;
	}
    for(int i = 1; i <= size; i++)
    {
        printf("\nElement is %d", arr[i]);
    }
	return 0;
}		
 