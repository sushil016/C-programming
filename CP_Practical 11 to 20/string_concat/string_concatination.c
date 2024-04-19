#include <stdio.h>
#include <conio.h>
void str_cat(char [],char [] );
void main()
{
	char s1[20],s2[20];
	clrscr();
	printf("enter the string 1:");
	gets(s1);
	printf("enter the string 2:");
	gets(s2);
	str_cat(s1,s2);
	getch();
}

void str_cat(char s3[20], char s4[20])
{
	int i,j=0;
	printf("received strings:\n");
	printf("String 1 is %s",s3);
	printf("\nString 2 is %s",s4);
	for(i=0;s3[i]!='\0';i++)
	{

	}

	while(s4[j]!='\0')
	{
		s3[i]=s4[j];
		i++;
		j++;
	}
	s3[i]='\0';
	printf("\nAfter Concatenation:\n");
	printf("String 1 is %s",s3);
	printf("\nString 2 is %s",s4);
}