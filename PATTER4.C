#include<conio.h>
#include<stdio.h>
void main()
{
char ch=65;
int i=4,j=7,k,n=3;
clrscr();
for(i=1;i<=4;i++)
{
	for(k=3;k>=i;k--)
	{
	printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	printf("%c ",ch);
	}
printf("\n");
ch++;
}
getch();
}
