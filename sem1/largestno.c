/*
//WAP to find the index of the largest number in an array

//Function Declaration
int input_size(); 
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]); 
void output(int index);

//Input
4 2 9 1 7

//Output
The index of the largest number in the array is 2
*/

#include<stdio.h>

int input_size(); 
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]); 
void output(int index);

int main()
{
    int size = input_size();
    int arr[size];
    input_array(size, &arr[size]);
    int lpos = find_largest_index(size, &arr[size]);
    output(lpos);

    return 0;
}

int input_size()
{
    int n;
    printf("\nEnter size: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n])
{
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter element: ");
        scanf("%d", &a[i]);
    }
}

int find_largest_index(int n, int a[n])
{
    int max = a[0], l = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            l = i;
        }
    }

    return l;
}

void output(int index)
{
    printf("\nThe index of the largest number is in the index is %d", index);
}