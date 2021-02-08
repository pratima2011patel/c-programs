#include<conio.h>
#include<stdio.h>
void main()
{
int p,a=2,b=4,h=4;
clrscr();
p=as(a,b,h);
printf("The Area of Trapezium is:%d",p);
getch();
}
int as(int x, int y, int h)
{
int t=((x+y)*h));
return(t);
}