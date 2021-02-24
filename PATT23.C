#include<conio.h>
#include<stdio.h>
void main()
{
int r,c,s,t=4,n=1;

clrscr();
for(r=1;r<=4;r++)
	{
	for(s=1;s<=r;s++)
	{
	printf(" ");
	}
	    n=1;
	    for(c=1;c<=(2*t-1);c++)
	    {
	    printf("%d",n);
	    n++;
	    }t--;
	    printf("\n");
	}
getch();
}