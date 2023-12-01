#include<stdio.h>
int main()
{
    int c = 10;
    int *p;
    p = &c;
    //printf("%d", *c);
    printf("%d", *p);
    printf("\n%d", *(p+1));
    //printf("%d", **p);
}