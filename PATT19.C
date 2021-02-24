#include<conio.h>
#include<stdio.h>
void main()
{
int r,c,s,t=4;
char ch='A';
clrscr();
for(r=1;r<=4;r++)
	{
	for(s=1;s<=r;s++)
	{
	printf(" ");
	}
	    ch='A';
	    for(c=1;c<=(2*t-1);c++)
	    {
	    printf("%c",ch);
	    ch++;
	    }t--;
	    printf("\n");
	}
getch();
}