#include <stdio.h>
#include <conio.h>
void gross_salary(struct emp);
struct emp
{
    char name[20];
    float b_s;
    float d_a;
    float hr_a;
} e1;
void main()
{
    clrscr();
    printf("enter name of employee:");
    gets(e1.name);
    printf("\nenter basic salary of employee:");
    scanf("%f", &e1.b_s);
    printf("\nenter dearness allowance of employee:");
    scanf("%f", &e1.d_a);
    printf("\nenter housing rent allowance of employee:");
    scanf("%f", &e1.hr_a);
    gross_salary(e1);
    getch();
}
void gross_salary(struct emp e2)
{
    float dearness_allow, housingrent_allow, total_salary;
    dearness_allow = (e2.b_s * e2.d_a) / 100;
    housingrent_allow = (e2.b_s * e2.hr_a) / 100;
    total_salary = e2.b_s + dearness_allow + housingrent_allow;
    printf("\n-----SALARY DETAILS-----\n");
    printf("NAME: %s", e2.name);
    printf("\nDEARNESS ALLOWANCE: %f", dearness_allow);
    printf("\nHOUSING RENT ALLOWANCE: %f", housingrent_allow);
    printf("\nTOTAL SALARY: %0.3f", total_salary);
}