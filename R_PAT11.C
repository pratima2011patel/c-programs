	#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,k,n=1;
clrscr();
for(i=1;i<=3;i++)
{
	for(k=2;k>=i;k--)
	{
	printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	printf("%d",n);
	}n++;
	printf("\n");
    }

getch();
}