#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
char ch1='A',ch2='a';
clrscr();
for(i=1;i<5;i++)
{       printf("%c",ch1);
	for(j=1;j<=4;j++)
	{
	printf("%c",ch2);
	}
	printf("\n");
}
getch();
}