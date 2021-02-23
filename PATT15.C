
#include<conio.h>
#include<stdio.h>
void main()
{
int r,c,k,n2;
char c1='A',c2;
clrscr();
for(r=1;r<=4;r++)
	{
	for(k=3;k>=r;k--)
	{
	printf(" ");
	}
	/*n2=num;*/c2=c1;
	for(c=1;c<=(2*r-1);c++)
	{   printf("%c",c2);
		if(c<r)
		c2++;
		else
		c2--;

	}
	printf("\n");
	}
getch();
}