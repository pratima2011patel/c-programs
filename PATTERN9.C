#include<conio.h>
#include<stdio.h>
void main()
{
char ch='A';
int i=4,j=7,k,n=5;
clrscr();
for(i=1;i<=5;i++)
{
	for(j=1;j<=n;j++)
	{
	printf("%c",ch);
	ch++;
	}
	ch='A';
	n--;



printf("\n");

/*for(k=1;k<=i;k++)
	{
	printf(" ");
	} */
}
getch();
}
