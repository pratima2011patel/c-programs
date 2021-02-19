#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,r1,c1;
clrscr();
for(r=1;r<=4;r++)
	{
	for(c=1;c<=r;c++)
	{
	printf("*");
	}
	printf("\n");

	}
for(r1=1;r1<=3;r1++)
{
	for(c1=3;c1>=r1;c1--)
	{
	printf("*");
	}
	printf("\n");
}
getch();
}
