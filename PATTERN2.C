#include<conio.h>
#include<stdio.h>
void main()
{

int i,j,k,n=7;
clrscr();
for(i=1;i<=4;i++)
{
	for(k=4;k>=i;k--)
	{printf(" ");

	}
	for(j=1;j<=(2*i-1);j++)
	{
	printf("%d ",j);
	}


	printf("\n");
}
getch();
}