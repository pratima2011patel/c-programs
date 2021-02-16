#include<conio.h>
#include<stdio.h>
void main()
{
int r1,c1,r2,c2;
clrscr();
	for(r1=1;r1<=3;r1++)
	{
		for(c1=1;c1<=5;c1++)
		{
		if(((r1==2)&&(c1==2))||((r1==2)&&(c1==3))||((r1==2)&&(c1==4)))
			{
			printf(" ");
			}
		else
			{
			printf("P");
			}
		}
		printf("\n");
	}
	for(r2=1;r2<=3;r2++)
	{
		for(c2=1;c2<=r2;c2++)
		{
		printf("P");
		}
		printf("\n");
	}
getch();
}