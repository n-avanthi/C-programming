/*A student attempts two tests for FPC.  The rules are: 
Rule #1: Best Marks of Two Tests will be taken 
Rule #2: Total Assessment is for 30 Marks 
Rule #3: If a students fails in Test1, s(he) can write a retest - but can score only 60% as max marks 

Functions need to be written to: 
a) Capture basic details of student in a structure - Name, USN, mail ID, Phone Number  as well as Final Test Marks 
b) Determine which Rule has to be applied based on the Test1 Marks 
c) For Rule#1 and Rule#3 separate functions have to be written 
d) Call the relevant function from within the function used for #b) 
c) Print the results of evaluation 


One of the functions used for the rules is "Pass By Value" and the other one is "Pass By Reference", since Structure
has only Final Marks*/

#include<stdio.h>

struct Details
{
    char name[20];
    int USN;
    char email[50];
    int phone_no;
    float final_test;
};
typedef struct Details details;

details input()
{
    details d;
    printf("Enter your name: ");
    scanf("%s", d.name);
    printf("Enter your USN number: ");
    scanf("%d", &d.USN);
    printf("Enter your email id: ");
    scanf("%s", d.email);
    printf("Enter your phone number: ");
    scanf("%d", d.phone_no);
    printf("Enter your marks for final test: ");
    scanf("%f", d.final_test);
}









