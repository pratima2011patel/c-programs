#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,k;
char ch='A';
clrscr();
for(i=1;i<=3;i++)
{
	for(k=2;k>=i;k--)
	{
	printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	printf("%c",ch);
	}ch++;
	printf("\n");
    }

getch();
}