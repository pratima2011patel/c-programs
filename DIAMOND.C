#include<conio.h>
#include<stdio.h>
void main()
{
int num=1,i,j,r,c=5,s=5,k,l,r1,c1=5,n1=1;

clrscr();
	for(r1=1;r1<=5;r1++)
	{
		for(k=5;k>=r1;k--)
		{
		printf(" ");
		}
		for(l=1;l<=(2*r1-1);l++)
		{
		printf("*");

		}
		printf("\n");
	}
	for(r=1;r<=5;r++)
	{
		for(j=1;j<=r;j++)
		{
		printf(" ");
		}
		for(i=1;i<=(2*s-1);i++)
		{
		printf("*");

		}
		s--;
		printf("\n");
	}
getch();
}