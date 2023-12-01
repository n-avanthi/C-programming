#include<stdio.h>
void display ( int * );
int main()
{
 int i ;
 int marks[ ] = { 15, 63, 21, 45, 76, 32, 122 } ;
 for ( i = 0 ; i <= 6 ; i++ )
{
     display( &marks[i] ) ;
}}
void display( int *n )
{
 printf ( "%d ", *n ) ;
}
