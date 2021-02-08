#include<conio.h>
#include<stdio.h>
void main()
{
int p,a=2,b=4;
clrscr();
p=as(a,b);
printf("The area of Perimeter of cone  is:%d",p);
getch();
}
int as(int x, int y)
{
int t=((x*x)+(y*y));
return(t);
}