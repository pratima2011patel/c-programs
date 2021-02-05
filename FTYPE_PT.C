#include<stdio.h>
#include<conio.h>
#include<math.h>

int pt(int , int);
/*int fun(int, int); */
void main()
{
int l=3,b=4;
clrscr();
pt(l,b);
getch();
}

int pt(int x, int y)
{
int t=(0.5*x*y);
printf("\nThe area of triangle is %d",t);
}