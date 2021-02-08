#include<conio.h>
#include<stdio.h>
void main()
{
int a,l=2,w=4;
clrscr();
a=as(l,w);
printf("The area of square is:%d",a);
getch();
}
int as(int x, int y)
{
int t=(x*y);
return(t);
}