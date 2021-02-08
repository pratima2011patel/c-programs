#include<conio.h>
#include<stdio.h>
void main()
{
int p,a=2,b=4,c=2,d=4,;
clrscr();
p=as(a,b,c,d);
printf("The Perimeter of Trapezium is:%d",p);
getch();
}
int as(int x, int y, int w, int z)
{
int t=(x+y+w+z);
return(t);
}