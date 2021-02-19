#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,r1,c1,n=3,n1;
clrscr();
for(r=1;r<=4;r++)
	{
	n=3;
	for(c=1;c<=r;c++)
	{
	printf("%d",n);
	n--;
	}
	printf("\n");

	}
for(r1=1;r1<=3;r1++)
{       n=3;
	for(c1=3;c1>=r1;c1--)
	{
	printf("%d",n);
	n--;
	}
	printf("\n");
}
getch();
}
