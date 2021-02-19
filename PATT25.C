#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,n=1,k;
clrscr();
       /*	for(i=1;i<=4;i++)
	{ */
	for(i=1;i<=4;i++)
	{
	for(k=3;k>=i;k--)
	{printf(" ");
	}


	n=2*i-1;
	for(j=1;j<=(2*i-1);j++)
	{
		   printf("%d",n);
		   n--;
	}
	 printf("\n");
	}
getch();
}