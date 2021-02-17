#include<conio.h>
#include<stdio.h>
void main()
{
char ch='E';
int i=4,j=7,k,n=3;
clrscr();
for(i=1;i<=5;i++)
{
	for(j=5;j>=i;j--)
	{
	printf("%c",ch);
	}
printf("\n");
ch--;
for(k=1;k<=i;k++)
	{
	printf(" ");
	}
}
getch();
}
