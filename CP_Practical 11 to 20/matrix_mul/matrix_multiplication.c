#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,a[3][4],b[4][2],p[3][2];
	clrscr();
	printf("enter the first matrix: ");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		scanf("%d",&a[i][j]);

	}
	printf("enter the second matrix: ");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=1;j++)
		scanf("%d",&b[i][j]);

	}

	printf("first matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("\n second matrix:\n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=1;j++)
		printf("%d ",b[i][j]);
		printf("\n");
	}

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=1;j++)
		{
			p[i][j]=0;
			for(k=0;k<=3;k++)
		{
			p[i][j]=p[i][j]+(a[i][k]*b[k][j]);
		}

	}


 }
  printf("\n resultant matrix:\n");
  for(i=0;i<=2;i++)
  {
	for(j=0;j<=1;j++)
	printf("%d ",p[i][j]);
	printf("\n");
  }
 getch();
}
