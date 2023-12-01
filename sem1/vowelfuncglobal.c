/*WAP the declares a function of following prototype:
int findVowels(char c);
It is called from main 8 times. Each time the user is prompted to enter a character.
The function checks if the character entered is a vowel or not. Assume lower case.
The result of vowel checking is printed in the main.
After 8 iterations, the number of vowels entered must be displayed to the user.
*/
/*Rewrite the program to use character array instead of primitive character data type.*/

#include<stdio.h>
/*int n;
printf("Enter size: ");
scanf("%d", &n);*/
char arr[8];

int findVowels(char c);

int main()
{
    int count = 0;
    for(int i = 0; i < 8; i++)
    {
        printf("\nEnter a letter (in lowercase): \n");
        scanf(" %c",&arr[i]);
        int vowel = findVowels(arr[i]);
        if (vowel == 1)
        {
            printf("The letter you entered is a vowel");
            count++;
        }
        else if (vowel == 0)
        {
            printf("It is not a vowel");
        }
    }
    printf("\nThe number of vowels are: %d", count);
}

int findVowels(char c)
{
    if (c == 'a' || c == 'e' || c == 'i'|| c == 'o'|| c == 'u')
   {
      return (1);
   }
   else
   {
      return(0);
   }
}