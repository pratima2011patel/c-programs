
#include<conio.h>
#include<stdio.h>
void main()
{
int a,l=2;
clrscr();
a=as(l);
printf("The area ofPerimeter of square is:%d",a);
getch();
}
int as(int x)
{
int t=(4*x*x*x*x);
return(t);
}