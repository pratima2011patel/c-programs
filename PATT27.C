#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,n,k;
char ch=65,ex;
clrscr();
       /*	for(i=1;i<=4;i++)
	{ */
	for(i=1;i<=4;i++)
	{
	for(k=3;k>=i;k--)
	{
	printf(" ");
	}


	     ex=ch;
	for(j=1;j<=(2*i-1);j++)
	{ n=ch+i;

	printf("%c",ex);
	ex--;

	}
	ch=ch+2;

	 printf("\n");
	}
getch();
}