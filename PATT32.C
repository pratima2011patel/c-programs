
#include<conio.h>
#include<stdio.h>
void main()
{
int num=1,r,c,k,n2;
clrscr();
for(r=1;r<=4;r++)
	{
	for(k=3;k>=r;k--)
	{
	printf(" ");
	}
	n2=num;
	for(c=1;c<=(2*r-1);c++)
	{   printf("%d",n2);
		if(c<r)
		n2++;
		else
		n2--;

	}
	printf("\n");
	}
getch();
}