
#include<conio.h>
#include<stdio.h>
void main()
{
int c,r,k;
char ch,alpha='A';
clrscr();
       /*	for(i=1;i<=4;i++)
	{ */
for(r=1;r<=4;r++)
{
	for(k=3;k>=r;k--)
	{
	printf(" ");
	}
	ch=alpha+1;
	for(c=1;c<=(2*r-1);c++)
	{

	if(c<=r)
	ch--;
	else
	ch++;

	printf("%c",ch);
	}
	alpha++;
	printf("\n");
}
getch();
}

