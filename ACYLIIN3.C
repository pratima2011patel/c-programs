#include<conio.h>
#include<stdio.h>
void main()
{
int r=4,h=4;
float p;
clrscr();
p=as(r,h);
printf("The Area of Cylinder is:%d",p);
getch();
}
int as(int x, int y)
{
float pi=3.14, t;
t=(pi*x*x*y);
return(t);
}