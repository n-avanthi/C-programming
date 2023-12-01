/*WAP in order to store the following into a structure. The marks obtained for fpc for ten students of
section A. Take their name and roll no. Find out who has scored the highest marks. Find out the average 
score and find out who has got the least marks.*/

#include<stdio.h>
int main()
{
    struct fpc
    {
        char name[20];
        int rollno;
        int marks;
    } test[10];

    for(int i = 0; i < 3; i++)
    {
        printf("Enter the name: ");
        scanf("%s", test[i].name);
        printf("Enter the roll no: ");
        scanf("%d", &test[i].rollno);
        printf("Enter the marks: ");
        scanf("%d", &test[i].marks);
    }

    int l = test[0].marks, s = test[0].marks, count = 0;
    int lpos, spos, avg;

    for(int i = 0; i < 3; i++)
    {
        if (l < test[i].marks) // 20 < 10 is false but 20 < 40 is true 
        {
            l = test[i].marks;
            lpos = i;
        }
    }
    
    for(int j = 0; j < 3; j++)  
    {
        if (s > test[j].marks) // 20 > 40 is false but 20 > 10 is true
        {
            s = test[j].marks;
            spos = j;
        }
    }

    for(int k = 0; k < 3; k++)
    {
        count += test[k].marks;
    }

    printf("avg is %d", count / 10);
    printf("\n%s with roll no %d got %d which is the highest marks", test[lpos].name, test[lpos].rollno, l);
    printf("\n%s with roll no %d got %d which is the lowest marks", test[spos].name, test[spos].rollno, s);

}