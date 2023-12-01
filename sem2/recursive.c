#include<stdio.h>
int total = 0; 
int n = 4;
int howMany(int n, int tot)
{
    if(n==0)
    {
        printf("\nBase Condition");
        return tot;
    }
    else
    {
        tot+=1;
        return howMany(n-1, tot);
    }
}

int main()
{
    total = howMany(n, total);
    printf("\n # of people in Q is %d", total);
    printf("\n # of people of last person in Q is %d", total-1);
}