#include<stdio.h>
#include<conio.h>
main()
{
char c1='A',c2='b';
int i,j,k;
clrscr();
	for(k=1;k<=2;k++)
	{
	printf("%c",c1);
	printf("%c",c2);
	c2++;
	printf("%c",c2);
	c1=c1+3;
	printf("%c",c1);
	c2=c2+2;
	printf("%c",c2);
	c1='A';
	c2='b';
	printf("\n");
	for(i=1;i<=5;i++)
	{
	printf("%d",i);
	}
	printf("\n");
}
getch();
}