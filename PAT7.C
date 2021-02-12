#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char ch='A';
clrscr();
for(i=0;i<=4;i++)
{
	for(j=1;j<=5;j++)
	{
	printf("%c",ch);
	ch++;
	}
	ch='A';
	printf("\n");
}
getch();
}