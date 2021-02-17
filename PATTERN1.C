#include<conio.h>
#include<stdio.h>
void main()
{
char ch=65;
int i,j,k;
clrscr();
for(i=1;i<=3;i++)
{
	for(k=2;k>=i;k--)
	{printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	printf("%c ",ch);
	}
	ch=ch+2;


	printf("\n");
}
getch();
}