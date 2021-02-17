#include<conio.h>
#include<stdio.h>
void main()
{
/*char ch='A';*/
int i=4,j=7,k,n=1;
clrscr();
for(i=1;i<=5;i++)
{
	for(j=5;j>=i;j--)
	{
	printf("%d",n);
	n++;
	}
	n=1;



printf("\n");

for(k=1;k<=i;k++)
	{
	printf(" ");
	}
}
getch();
}
