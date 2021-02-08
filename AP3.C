#include<conio.h>
#include<stdio.h>
void main()
{
int p,b=2,h=4;
clrscr();
p=as(b,h);
printf("The area of Parallelogram   is:%d",p);
getch();
}
int as(int x, int y)
{
int t=(x*y);
return(t);
}