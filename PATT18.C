#include<conio.h>
#include<stdio.h>
void main()
{
int c,r,nk,s=1,k,n=7;
clrscr();
for(r=4;r>=1;r--)
{
	for(k=1;k<=s;k++)
		{
		printf(" ");
		}
	for(c=1;c<=(2*r-1);c++)
		{
		printf("%d",n);
		}
		n=n-2;
		printf("\n");
		s++;

}
getch();
}