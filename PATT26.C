#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,n=1,k;
char ch='A';
clrscr();
       /*	for(i=1;i<=4;i++)
	{ */
	for(i=1;i<=4;i++)
	{
	for(k=3;k>=i;k--)
	{printf(" ");
	}


	ch='A';
	for(j=1;j<=(2*i-1);j++)
	{
		   printf("%c",ch);
		   ch++;
	}
	 printf("\n");
	}
getch();
}