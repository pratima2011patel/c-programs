#include<conio.h>
#include<stdio.h>
void main()
{
int r=4;
float p;
clrscr();
p=as(r);
printf("The Perimeter  of Circle is:%f",p);
getch();
}
int as(int x)
{
float pi=3.14,t;
t=(2*pi*x);
return(t);
}