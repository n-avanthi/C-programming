 /*WAP that facilitates imputing into an array of 10 numbers by the user. Do the following:
    a) Find the position of the smallest element in the array. Print both the position & the value. 
    b) Every odd position of the array subtract the value 5
    c) Every even position multiply by 5
    d) Find the position of the largest element in the array after b) & c)
    e) Print both the position & the value.
    f) Count the number of odd elements in the array. Also display them.
    g) Count the number of negative elements in the array. Also display them.
    h) For both f) & g) take care of the special case of 0*/

#include<stdio.h>
int main()
{
    int arr[10], s, pos, l;
    int ocount = 0, ncount = 0, zcount = 0;    
    for (int i = 0; i < 10; i++)
    {
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }
    s = arr[0];
    for (int j = 0; j < 10; j++)
    {
        if (s > arr[j])
        {
            s = arr[j];
            pos = j + 1;
        }
    }
    printf("The smallest number is %d and the position is %d\n", s, pos);

    for(int i = 0; i < 10; i++)
    {
        if(i%2 != 0)
        {
            arr[i]-=5;
        }
        else
        {
            arr[i]*=5;
        }
    }
    l = arr[0];
    for (int j = 0; j < 10; j++)
    {
        if (l < arr[j])
        {
            l = arr[j];
            pos = j + 1;
        }
    }
    printf("The largest number after altering is %d and the position is %d\n", l ,pos);
    
    printf("Odd elements are:");
    for (int i = 0; i < 10; i++)
    {
        if((arr[i]%2 != 0) && (arr[i] != 0))
        {
            printf("%d, ",arr[i]);
            ocount++;
        }
    } 
    printf("\nNegative elements are:");
    for (int i = 0; i < 10; i++)
    {
        if((arr[i] < 0) && (arr[i] != 0))
        {
            printf("%d, ",arr[i]);
            ncount++;
        }
    } 
    for (int i = 0; i < 10; i++)
    {
        if(arr[i] ==0)
        {
            zcount++;
        }
    } 
    printf("The number of odd elements are %d, the number of negative elements are %d and the number of zero elements are %d", ocount,ncount,zcount);
}