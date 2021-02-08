#include<conio.h>
#include<stdio.h>
void main()
{
int p,l=2,w=4;
clrscr();
p=as(l,w);
printf("The Perimeter of Rectangle is:%d",p);
getch();
}
int as(int x, int y)
{
int t=((2*x)+(2*y));
return(t);
}