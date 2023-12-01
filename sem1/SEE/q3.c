/*
WAP using the if-else ladder to translate English Numbers to your Mother Tongue.
E.g. If you speak Hindi, Print the translation as 1 = “Ek”, 2 = “Do”, 3 = “Theen” etc.
Allow only 1 to 5 as user input, printing an error message to the user - you know
translation only up to 5, if input exceeds 5. (3 Marks)
*/

#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter number upto 5: ");
    scanf("%d", &num);

    if(num == 1)
    {
        printf("\n1 = Ek");
    }
    else if(num ==2)
    {
        printf("\n2 = Do");
    }
    else if(num == 3)
    {
        printf("\n3 = Theen");
    }
    else if(num == 4)
    {
        printf("\n4 = Char");
    }
    else if(num == 5)
    {
        printf("\n5 = Panch");
    }
    else
    {
        printf("\nTranslation is known only until 5");
    }

    return 0;
}