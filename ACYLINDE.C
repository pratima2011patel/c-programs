#include<conio.h>
#include<math.h>
#include<stdio.h>
int Acylin(int , int);
void main()
{
int r=2,h=2;
clrscr();
Acylin(r,h);
getch();

}
int Acylin(int r, int h)
{
float pi=3.14;
int a;
a=(pi*r*r*h);
printf("The area of cylinder is :-%d",a);

}