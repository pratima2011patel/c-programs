#include<stdio.h>
#include<conio.h>
#include<math.h>

int radi(int);
/*int fun(int, int); */
void main()
{
int r=4,cir;
clrscr();
radi(r);
getch();
}

int radi(int x)
{
float pi=3.14;
int r=(pi*x*x);
printf("\nThe area of Circle is %d",r);
}