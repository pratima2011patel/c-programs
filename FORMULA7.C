#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
printf("Program for displaying Area of Trapezium");
area();

getch();
}
int area()
{
float a=3,b=2,h=6,area;


area=(0.5*(a+b)*h);
printf("\nThe Area of Trapezium is :=%f",area);
}