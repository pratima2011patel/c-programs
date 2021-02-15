#include<stdio.h>
#include<conio.h>
main()
{
int i,j,k,n=5,r=5;
clrscr();
for(r=1;r<=n;r++)
{
	for(j=5;j>=r;j--)
		{
		printf(" ");
		}
	for(k=1;k<=(2*r-1);k++)
		{
		printf("*");
		}
	printf("\n");
}
getch();
}
