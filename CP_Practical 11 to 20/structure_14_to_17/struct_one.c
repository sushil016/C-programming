#include <stdio.h>
#include <conio.h>
struct student
{
    char name[20];
    int roll_no;
    float ptr;
} s1;
void main()
{
    clrscr();
    printf("ENTER NAME:");
    gets(s1.name);
    printf("ENTER ROLL NO:");
    scanf("%d", &s1.roll_no);
    printf("ENTER POINTER:");
    scanf("%f", &s1.ptr);
    printf("\n-----DETAILS____\n");
    printf("NAME: %s", s1.name);
    printf("\nROLL NO: %d", s1.roll_no);
    printf("\nPOINTER: %0.2f", s1.ptr);
    getch();
}