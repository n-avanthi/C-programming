#include<stdio.h>
#include<string.h>

typedef struct class
{
    char name[21];
    float marks;
}class;

int main()
{
    int n;
    char name_check[21];
    float marks_check;
    printf("\nEnter number of students: ");
    scanf("%d", &n);
    class details[n];

    for(int i = 0; i < n; i++)
    {
        printf("\nEnter name of student upto 20 chars: ");
        scanf("%s", name_check);
        while(strlen(name_check) > 20)
        {
            printf("\nName exceeds 20 chars!");
            printf("\nEnter name of student upto 20 chars: ");
            scanf("%s", name_check);
            if(strlen(name_check) <= 20)
            {
                break;
            }
        }
        if(strlen(name_check) <= 20)
        {
            strcpy(details[i].name, name_check);
        }

        printf("\nEnter marks upto 30: ");
        scanf("%f", &marks_check);
        while(marks_check > 30)
        {
            printf("\nMarks greater than 30!");
            printf("\nEnter marks upto 30: ");
            scanf("%f", &marks_check);
            if(marks_check <= 30)
            {
                break;
            }
        }
        if(marks_check <= 30)
        {
            details[i].marks = marks_check;
        }

        if(details[i].marks >= 12)
        {
            printf("%s got %f marks and has passed", details[i].name, details[i].marks);
        }
        else
        {
            printf("%s got %f marks and has failed", details[i].name, details[i].marks);
        }
    }

    return 0;
}