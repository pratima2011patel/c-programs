#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,k,n=0;

clrscr();
       /*	for(i=1;i<=4;i++)
	{ */
for(i=1;i<=4;i++)
{                 n=i;
	for(k=3;k>=i;k--)
	{
	printf(" ");
	}
	for(j=1;j<=(2*i-1);j++)
	{

	if(j<=i)
	{n--;}
	else
	{n++; }
	printf("%d",n);

	};
	 printf("\n");
	}
getch();
}