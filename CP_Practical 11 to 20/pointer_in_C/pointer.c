#include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 void main()
 {
   int N,*ptr,i,min,max;
   clrscr();
   printf("enter no of elements:");scanf("%d",&N);
   ptr=(int*)calloc(N,sizeof(int));
   if(ptr==NULL)
   {
   printf("Memory not Allocated");
   exit(0);
   }
   else
   printf("Memory Allocated");

   printf("\nenter elements: ");
   for(i=0;i<N;i++)
   scanf("%d",ptr+i);

   printf("elements are: ");
   for(i=0;i<N;i++)
   printf("%d ",*(ptr+i));

   max=*ptr;
   for(i=1;i<N;i++)
   {
	if( max < *(ptr+i) )
	max=*(ptr+i);
   }

   min=*ptr;
   for(i=1;i<N;i++)
   {
	if( min > *(ptr+i) )
	min=*(ptr+i);
   }
   printf("\nmax element: %d",max);
   printf("\nmin element: %d",min);
   getch();
 }