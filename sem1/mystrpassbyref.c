/*
WAP that does the following: 
a) In Main Create a character array called "myString" that contains a string 
b) Print the contents of "myString" in main  
c) This array needs to be passed to a function called "alterArray"
d) Change alternate character positions of the array in this function "alterArray". Use the following signature / prototype:
     void alterArray(char passedString[ ] )

e) Print the changed string in the function "alterArray" 
f) Print the changed string in the function Main
*/
#include<stdio.h>
void alterArray(char passedString[]);

int main()
{
    int size;
    printf("Enter size of string: ");
    scanf("%d",&size);
    char mystring[size];
    printf("\nEnter a string: ");
    scanf("%s", mystring);
    printf("\nString entered is: %s", mystring);
    alterArray(mystring);
    //PRINT IN MAIN
    printf("/nChanged string in main is: %s", mystring);
}

void alterArray(char passedString[])
{
    int c;
    printf("\nEnter a character: ");
    scanf(" %c",&c);
    int j;
    for(j = 1; j < 7; j = j + 2)
    {
        passedString[j] = c;
    }    
    printf("\nChanged string is: %s",passedString);
    //return passedString not needed because array is a pointer in itself
}


