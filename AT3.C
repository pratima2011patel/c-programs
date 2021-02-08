#include<conio.h>
#include<stdio.h>
void main()
{
int a,b=2,h=4;
clrscr();
a=at(b,h);
printf("The area of triangle is:%d",a);
getch();
}
int at(int x, int y)
{
int t=(0.5*x*y);
return(t);
}