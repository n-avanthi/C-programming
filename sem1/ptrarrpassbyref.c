/*WAP that does the following: 

a) In Main Create a character array called "myString" that contains a string 
b) Print the contents of "myString" in main  
c) This array needs to be passed to a function called "alterArray"
d) Change alternate character positions of the array in this function "alterArray". Use the following signature / prototype:
      void alterArray(char *ptr)

e) Print the changed string in the function "alterArray" 
f) Print the changed string in the function Main
USE POINTER*/

#include<stdio.h>
void alterArray(char *ptr);

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    char mystring[size];
    printf("\nEnter a string: ");
    scanf("%s", mystring);
    printf("\nString entered is: %s", mystring);
    alterArray(mystring);
    printf("\nChanged string in main is: %s", mystring);
}

void alterArray(char *ptr)
{
    int c;
    printf("\nEnter a character: ");
    scanf(" %c",&c);
    int j;
    for(j = 1; j < 7; j = j + 2)
    {
        ptr[j] = c;
    }
    printf("\nChanged string is: %s", ptr);
    *(ptr+1) = 'G';
    printf("\nEdited string is %s", ptr);
}
