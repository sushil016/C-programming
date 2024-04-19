#include <stdio.h>
#include <conio.h>

union student
{
int roll_no;
char name[20];
double marks;
}s1;
void main()
{
clrscr();
printf("enter NAME:");gets(s1.name);
printf("NAME: %s",s1.name);
printf("\nenter ROLL NO:");scanf("%d",&s1.roll_no);
printf("ROLL NO: %d",s1.roll_no);
printf("\nenter MARKS:");scanf("%lf",&s1.marks);
printf("MARKS: %lf",s1.marks);
printf("\n-----Other members-----\n");
printf("\nNAME: %s",s1.name);
printf("\nROLL NO %d",s1.roll_no);
getch();
}