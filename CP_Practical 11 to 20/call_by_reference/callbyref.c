#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
int a,b;
printf("enter the values for variables:");
scanf("%d%d",&a,&b);
printf("\nBefore Swapping value of a= %d,b=%d",a,b);
swap(&a,&b);
printf("\nAfter swapping value of a=%d,b=%d",a,b);
getch();
}
void swap(int *p1,int *p2)
{
 int temp;
 temp=*p1;
 *p1=*p2;
 *p2=temp;
}
