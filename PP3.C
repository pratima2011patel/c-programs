#include<conio.h>
#include<stdio.h>
void main()
{
int p,a=2,b=4;
clrscr();
p=as(a,b);
printf("The Perimeter of Parallelogram   is:%d",p);
getch();
}
int as(int x, int y)
{
int t=((2*x)*(2*y));
return(t);
}