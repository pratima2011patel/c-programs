#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
printf("Program for displaying Area of Circle");
area();

getch();
}
int area()
{
float pi=3.14,area;
int r=4;

area=(pi*r*r);
printf("\nThe Area of circle is :=%f",area);
}